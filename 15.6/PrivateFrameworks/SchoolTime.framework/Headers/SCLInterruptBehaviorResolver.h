// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCLINTERRUPTBEHAVIORRESOLVER_H
#define SCLINTERRUPTBEHAVIORRESOLVER_H

@class CNContactStore, NSString, NSXPCListener, NSMutableArray;
@protocol SCLInterruptBehaviorResolutionXPCServer, NSXPCListenerDelegate, SCLSchoolModeServerObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SCLState.h"

@interface SCLInterruptBehaviorResolver : NSObject <SCLInterruptBehaviorResolutionXPCServer, NSXPCListenerDelegate, SCLSchoolModeServerObserver>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) SCLState *currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableArray *resolutionRecords; // ivar: _resolutionRecords
@property (readonly) Class superclass;


-(BOOL)_isEmergencyBypassEnabledForContact:(id)arg0 ;
-(BOOL)_isEntitledWithClientIdentifier:(id)arg0 ;
-(BOOL)_isRepeatSender:(id)arg0 date:(id)arg1 clientIdentifier:(id)arg2 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_resolveInterruptBehaviorForEvent:(id)arg0 date:(id)arg1 clientIdentifier:(id)arg2 ;
-(id)initWithTargetQueue:(id)arg0 ;
-(void)_addResolutionRecord:(id)arg0 ;
-(void)activate;
-(void)dealloc;
-(void)resolveBehaviorForEvent:(id)arg0 clientIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)server:(id)arg0 didUpdateState:(id)arg1 fromState:(id)arg2 ;


@end


#endif