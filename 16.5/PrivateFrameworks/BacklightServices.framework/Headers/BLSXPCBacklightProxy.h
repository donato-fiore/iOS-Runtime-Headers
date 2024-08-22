// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSXPCBACKLIGHTPROXY_H
#define BLSXPCBACKLIGHTPROXY_H

@class NSHashTable, BSServiceConnection, NSString;
@protocol BLSBacklightProxy, BLSXPCBacklightProxyClientInterface, BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BLSXPCBacklightProxy : NSObject <BLSBacklightProxy, BLSXPCBacklightProxyClientInterface, BSInvalidatable>

 {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BSServiceConnection *_connection;
    os_unfair_lock_s _lock;
    NSInteger _backlightState;
    BOOL _isBacklightStateCached;
    BOOL _isAlwaysOnEnabled;
    BOOL _isAlwaysOnEnabledCached;
    BOOL _lock_invalidated;
}


@property (readonly, nonatomic, getter=isAlwaysOnEnabled) BOOL alwaysOnEnabled;
@property (readonly, nonatomic) NSInteger backlightState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger flipbookState;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;


-(id)init;
-(id)performChangeRequest:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)didChangeAlwaysOnEnabled:(id)arg0 ;
-(void)didCompleteUpdateToState:(id)arg0 forEvent:(id)arg1 ;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;


@end


#endif