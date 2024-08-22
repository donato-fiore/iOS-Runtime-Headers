// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBINTERACTIVESCREENSHOTGESTUREMANAGER_H
#define SBINTERACTIVESCREENSHOTGESTUREMANAGER_H

@class NSUUID, NSMutableSet, BSMonotonicReferenceTime, NSMutableArray, UIScreen, NSMutableDictionary, FBScene, NSHashTable, NSString;
@protocol BSTransactionObserver, SBInteractiveScreenshotCommitWorkspaceTransactionDelegate, SBInteractiveScreenshotGestureRootViewControllerDelegate, SBMainDisplayWorkspaceAppInteractionEventSourceObserving, SBSystemGestureRecognizerDelegate, BSInvalidatable, SBInteractiveScreenshotGestureManagerDelegate;

#import <Foundation/Foundation.h>

#import "SBMainDisplayWorkspaceAppInteractionEventSource.h"
#import "SBAsynchronousRenderingAssertion.h"
#import "SBCornerPencilPanGestureRecognizer.h"
#import "SBInteractiveScreenshotCommitWorkspaceTransaction.h"
#import "SBInteractiveScreenshotSettings.h"
#import "SBSystemGestureManager.h"
#import "SBMainWorkspace.h"

@interface SBInteractiveScreenshotGestureManager : NSObject <BSTransactionObserver, SBInteractiveScreenshotCommitWorkspaceTransactionDelegate, SBInteractiveScreenshotGestureRootViewControllerDelegate, SBMainDisplayWorkspaceAppInteractionEventSourceObserving, SBSystemGestureRecognizerDelegate>

 {
    NSUUID *_activeGestureSessionID;
    SBMainDisplayWorkspaceAppInteractionEventSource *_appInteractionEventSource;
    SBAsynchronousRenderingAssertion *_asynchronousRenderingAssertion;
    SBCornerPencilPanGestureRecognizer *_gestureRecognizer;
    SBInteractiveScreenshotCommitWorkspaceTransaction *_commitTransaction;
    id<BSInvalidatable> *_commitTransactionDisableGestureAssertion;
    NSMutableSet *_disableGestureAssertions;
    BOOL _hasInitiatedCommit;
    BOOL _isCapturingScreenshot;
    BSMonotonicReferenceTime *_lastApplicationTouchReferenceTime;
    NSMutableArray *_pendingCommitWorkspaceTransactionBlocks;
    UIScreen *_screen;
    NSMutableDictionary *_sessionIDToSession;
    SBInteractiveScreenshotSettings *_settings;
    FBScene *_sourceScene;
    SBSystemGestureManager *_systemGestureManager;
    NSHashTable *_weakReusableGestureRootWindows;
    SBMainWorkspace *_workspace;
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
-(id)initWithScreen:(id)arg0 sourceScene:(id)arg1 workspace:(id)arg2 systemGestureManager:(id)arg3 appInteractionEventSource:(id)arg4 ;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(void)_handleInteractiveScreenshotGesture:(id)arg0 ;
-(void)_invalidateSessionID:(id)arg0 ;
-(void)_performCommitWorkspaceTransactionBlock:(id)arg0 ;
-(void)_performPendingCommitWorkspaceTransactionBlocksWithTransaction:(id)arg0 ;
-(void)dealloc;
-(void)eventSource:(id)arg0 userTouchedApplication:(id)arg1 ;
-(void)interactiveScreenshotCommitWorkspaceTransactionRequestsGestureWindowInvalidation:(id)arg0 ;
-(void)interactiveScreenshotCommitWorkspaceTransactionRequestsPlaceholderChromeRemoval:(id)arg0 ;
-(void)interactiveScreenshotGestureRootViewController:(id)arg0 gestureDidCompleteWithIntent:(NSInteger)arg1 ;
-(void)interactiveScreenshotGestureRootViewControllerRequestsGestureRecognizerCancellation:(id)arg0 ;
-(void)transactionDidComplete:(id)arg0 ;


@end


#endif