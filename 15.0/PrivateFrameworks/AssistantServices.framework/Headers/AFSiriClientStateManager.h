// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFSIRICLIENTSTATEMANAGER_H
#define AFSIRICLIENTSTATEMANAGER_H

@class NSMapTable;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "AFNotifyStatePublisher.h"
#import "AFSafetyBlock.h"
#import "AFWatchdogTimer.h"

@interface AFSiriClientStateManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AFNotifyStatePublisher *_publisher;
    NSMapTable *_statesByClient;
    NSInteger _transactionDepth;
    AFSafetyBlock *_presentationTransitionAssertion;
    AFWatchdogTimer *_presentationTransitionWatchdogTimer;
    NSObject<OS_dispatch_group> *_presentationTransitionGroup;
}




+(id)sharedManager;
-(NSUInteger)_aggregatedState;
-(id)_stateForClient:(*void)arg0 createIfAbsent:(BOOL)arg1 ;
-(id)initWithInstanceContext:(id)arg0 ;
-(void)_aggregateStatesAndPublishIfNeeded;
-(void)_beginListeningForClient:(*void)arg0 ;
-(void)_beginPresentationTransition;
-(void)_beginRequestWithUUID:(id)arg0 forClient:(*void)arg1 ;
-(void)_beginSessionForClient:(*void)arg0 ;
-(void)_beginSpeakingForClient:(*void)arg0 ;
-(void)_endListeningForClient:(*void)arg0 ;
-(void)_endPresentationTransitionForReason:(id)arg0 ;
-(void)_endRequestWithUUID:(id)arg0 forClient:(*void)arg1 ;
-(void)_endSessionForClient:(*void)arg0 ;
-(void)_endSpeakingForClient:(*void)arg0 ;
-(void)_removeStateForClient:(*void)arg0 ;
-(void)beginListeningForClient:(*void)arg0 ;
-(void)beginPresentationTransition;
-(void)beginRequestWithUUID:(id)arg0 forClient:(*void)arg1 ;
-(void)beginSessionForClient:(*void)arg0 ;
-(void)beginSpeakingForClient:(id)arg0 ;
-(void)beginTransaction;
-(void)endListeningForClient:(*void)arg0 ;
-(void)endPresentationTransition;
-(void)endRequestWithUUID:(id)arg0 forClient:(*void)arg1 ;
-(void)endSessionForClient:(*void)arg0 ;
-(void)endSpeakingForClient:(id)arg0 ;
-(void)endTransaction;
-(void)getCurrentStateWithCompletion:(id)arg0 ;
-(void)invalidateClient:(*void)arg0 ;


@end


#endif