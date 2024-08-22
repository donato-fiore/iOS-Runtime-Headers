// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSREMOTEALERTHANDLE_H
#define SBSREMOTEALERTHANDLE_H

@class NSHashTable, NSString;
@protocol OS_dispatch_queue, SBSRemoteAlertHandleClient;

#import <Foundation/Foundation.h>


@interface SBSRemoteAlertHandle : NSObject {
    os_unfair_lock_s _lock;
    BOOL _lock_active;
    BOOL _lock_valid;
    NSHashTable *_lock_observers;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    id<SBSRemoteAlertHandleClient> *_handleClient;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSString *handleID; // ivar: _handleID
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(id)defaultHandleClient;
+(id)handleWithConfiguration:(id)arg0 ;
+(id)lookupHandlesForConfiguration:(id)arg0 creatingIfNone:(BOOL)arg1 ;
+(id)lookupHandlesForDefinition:(id)arg0 ;
+(id)lookupHandlesForDefinition:(id)arg0 creatingIfNone:(BOOL)arg1 ;
+(id)lookupHandlesForDefinition:(id)arg0 creatingIfNone:(BOOL)arg1 configurationContext:(id)arg2 ;
+(id)newHandleWithDefinition:(id)arg0 configurationContext:(id)arg1 ;
+(void)setDefaultHandleClient:(id)arg0 ;
-(id)_initWithHandleID:(id)arg0 handleClient:(id)arg1 ;
-(void)_didActivate;
-(void)_didDeactivate;
-(void)_invalidateWithError:(id)arg0 shouldInvalidateHandleClient:(BOOL)arg1 ;
-(void)_receivedInvalidationWithError:(id)arg0 ;
-(void)activateWithContext:(id)arg0 ;
-(void)activateWithOptions:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)invalidate;
-(void)registerObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif