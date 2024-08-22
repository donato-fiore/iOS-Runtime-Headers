// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWORKSPACE_H
#define SBWORKSPACE_H

@class NSString, FBWorkspaceEventQueue;
@protocol SBIdleTimerProviding, SBIdleTimerCoordinating;

#import <Foundation/Foundation.h>

#import "SBWorkspaceTransaction.h"

@interface SBWorkspace : NSObject <SBIdleTimerProviding, SBIdleTimerCoordinating>



@property (readonly, nonatomic) SBWorkspaceTransaction *currentTransaction; // ivar: _currentTransaction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBWorkspaceEventQueue *eventQueue; // ivar: _eventQueue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)mainWorkspace;
-(BOOL)_executeTransitionRequest:(id)arg0 options:(NSUInteger)arg1 validator:(id)arg2 ;
-(BOOL)executeTransitionRequest:(id)arg0 ;
-(BOOL)executeTransitionRequest:(id)arg0 withValidator:(id)arg1 ;
-(BOOL)requestTransitionWithBuilder:(id)arg0 ;
// -(BOOL)requestTransitionWithOptions:(NSUInteger)arg0 builder:(id)arg1 validator:(unk)arg2  ;
-(BOOL)requestTransitionWithOptions:(NSUInteger)arg0 displayConfiguration:(id)arg1 builder:(id)arg2 ;
// -(BOOL)requestTransitionWithOptions:(NSUInteger)arg0 displayConfiguration:(id)arg1 builder:(id)arg2 validator:(unk)arg3  ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)createRequestForApplicationActivation:(id)arg0 options:(NSUInteger)arg1 ;
-(id)createRequestForApplicationActivation:(id)arg0 withDisplayConfiguration:(id)arg1 options:(NSUInteger)arg2 ;
-(id)createRequestWithOptions:(NSUInteger)arg0 ;
-(id)createRequestWithOptions:(NSUInteger)arg0 displayConfiguration:(id)arg1 ;
-(id)idleTimerProvider:(id)arg0 didProposeBehavior:(id)arg1 forReason:(id)arg2 ;
-(id)init;
-(id)initWithEventQueue:(id)arg0 ;
-(id)transactionForTransitionRequest:(id)arg0 ;


@end


#endif