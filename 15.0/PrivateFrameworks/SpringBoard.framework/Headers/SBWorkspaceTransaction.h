// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWORKSPACETRANSACTION_H
#define SBWORKSPACETRANSACTION_H

@class FBSDisplayConfiguration, FBSDisplayIdentity;


#import "SBTransaction.h"
#import "SBWorkspaceTransitionRequest.h"
#import "SBSceneLayoutViewController.h"
#import "SBLayoutStateTransitionCoordinator.h"
#import "SBSceneManager.h"
#import "SBUIAnimationController.h"

@interface SBWorkspaceTransaction : SBTransaction {
    SBWorkspaceTransitionRequest *_transitionRequestForPendingInterruption;
}


@property (nonatomic) BOOL clearsCompletionAsynchronously; // ivar: _clearsCompletionAsynchronously
@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, nonatomic) SBSceneLayoutViewController *layoutController; // ivar: _layoutController
@property (readonly, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator; // ivar: _layoutStateTransitionCoordinator
@property (readonly, nonatomic) SBSceneManager *sceneManager; // ivar: _sceneManager
@property (retain, nonatomic) SBUIAnimationController *suggestedAnimationController; // ivar: _suggestedAnimationController
@property (readonly, nonatomic) SBWorkspaceTransitionRequest *transitionRequest; // ivar: _transitionRequest


-(BOOL)_isInterruptingForTransitionRequest;
-(BOOL)canInterruptForTransitionRequest:(id)arg0 ;
-(id)_childWorkspaceTransactions;
-(id)_customizedDescriptionProperties;
-(id)init;
-(id)initWithTransitionRequest:(id)arg0 ;
-(void)_didComplete;
-(void)_didInterruptForTransitionRequest:(id)arg0 ;
-(void)_performDeviceCoherencyCheck;
-(void)_willInterruptForTransitionRequest:(id)arg0 ;
-(void)interruptForTransitionRequest:(id)arg0 ;
-(void)keepAliveForAsyncBlock:(id)arg0 ;


@end


#endif