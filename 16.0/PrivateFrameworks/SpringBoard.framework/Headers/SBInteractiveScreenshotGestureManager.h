// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBINTERACTIVESCREENSHOTGESTUREMANAGER_H
#define SBINTERACTIVESCREENSHOTGESTUREMANAGER_H

@class NSUUID, NSMutableSet, NSMutableArray, UIScreen, NSMutableDictionary, NSHashTable, NSString;
@protocol BSTransactionObserver, SBInteractiveScreenshotCommitWorkspaceTransactionDelegate, SBInteractiveScreenshotGestureRootViewControllerDelegate, SBAppInteractionEventSourceObserving, SBSystemGestureRecognizerDelegate, BSInvalidatable, SBInteractiveScreenshotGestureManagerDelegate;

#import <Foundation/Foundation.h>

#import "SBDisplayAppInteractionEventSource.h"
#import "SBAsynchronousRenderingAssertion.h"
#import "SBCornerPencilPanGestureRecognizer.h"
#import "SBCornerFingerPanGestureRecognizer.h"
#import "SBInteractiveScreenshotCommitWorkspaceTransaction.h"
#import "SBInteractiveScreenshotSettings.h"
#import "SBSystemGestureManager.h"
#import "SBMainWorkspace.h"
#import "SBWindowScene.h"

@interface SBInteractiveScreenshotGestureManager : NSObject <BSTransactionObserver, SBInteractiveScreenshotCommitWorkspaceTransactionDelegate, SBInteractiveScreenshotGestureRootViewControllerDelegate, SBAppInteractionEventSourceObserving, SBSystemGestureRecognizerDelegate>

 {
    NSUUID *_activeGestureSessionID;
    SBDisplayAppInteractionEventSource *_appInteractionEventSource;
    SBAsynchronousRenderingAssertion *_asynchronousRenderingAssertion;
    SBCornerPencilPanGestureRecognizer *_bottomLeftPencilGestureRecognizer;
    SBCornerFingerPanGestureRecognizer *_bottomLeftFingerGestureRecognizer;
    SBCornerPencilPanGestureRecognizer *_bottomRightPencilGestureRecognizer;
    SBCornerFingerPanGestureRecognizer *_bottomRightFingerGestureRecognizer;
    SBInteractiveScreenshotCommitWorkspaceTransaction *_commitTransaction;
    id<BSInvalidatable> *_commitTransactionDisableGestureAssertion;
    NSMutableSet *_disableGestureAssertions;
    BOOL _hasInitiatedCommit;
    BOOL _isCapturingScreenshot;
    CGFloat _lastApplicationTouchTime;
    NSMutableArray *_pendingCommitWorkspaceTransactionBlocks;
    UIScreen *_screen;
    NSMutableDictionary *_sessionIDToSession;
    SBInteractiveScreenshotSettings *_settings;
    SBSystemGestureManager *_systemGestureManager;
    NSHashTable *_weakReusableGestureRootWindows;
    SBMainWorkspace *_workspace;
    SBWindowScene *_windowScene;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBInteractiveScreenshotGestureManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)handleRemoteTransientOverlayPresentationRequest:(id)arg0 forSession:(id)arg1 ;
-(id)_screenshotPresentationOptions;
-(id)acquireDisableGestureAssertionWithReason:(id)arg0 ;
-(id)initWithWindowScene:(id)arg0 workspace:(id)arg1 appInteractionEventSource:(id)arg2 ;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(void)_handleInteractiveScreenshotGesture:(id)arg0 ;
-(void)_invalidateSessionID:(id)arg0 ;
-(void)_performCommitWorkspaceTransactionBlock:(id)arg0 ;
-(void)_performPendingCommitWorkspaceTransactionBlocksWithTransaction:(id)arg0 ;
-(void)_springBoardBootCompleted:(id)arg0 ;
-(void)_updateFailureRequirements;
-(void)dealloc;
-(void)eventSource:(id)arg0 userTouchedApplication:(id)arg1 ;
-(void)interactiveScreenshotCommitWorkspaceTransactionRequestsGestureWindowInvalidation:(id)arg0 ;
-(void)interactiveScreenshotCommitWorkspaceTransactionRequestsPlaceholderChromeRemoval:(id)arg0 ;
-(void)interactiveScreenshotGestureRootViewController:(id)arg0 gestureDidCompleteWithIntent:(NSInteger)arg1 ;
-(void)interactiveScreenshotGestureRootViewControllerRequestsGestureRecognizerCancellation:(id)arg0 ;
-(void)transactionDidComplete:(id)arg0 ;


@end


#endif