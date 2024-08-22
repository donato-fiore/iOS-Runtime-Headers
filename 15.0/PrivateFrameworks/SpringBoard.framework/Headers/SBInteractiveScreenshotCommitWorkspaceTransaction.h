// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBINTERACTIVESCREENSHOTCOMMITWORKSPACETRANSACTION_H
#define SBINTERACTIVESCREENSHOTCOMMITWORKSPACETRANSACTION_H

@class NSTimer, NSString, NSUUID;
@protocol SBTransientOverlayPresentWorkspaceTransactionObserver, SBInteractiveScreenshotCommitWorkspaceTransactionDelegate;


#import "SBMainWorkspaceTransaction.h"
#import "SBTransientOverlayViewController.h"

@interface SBInteractiveScreenshotCommitWorkspaceTransaction : SBMainWorkspaceTransaction <SBTransientOverlayPresentWorkspaceTransactionObserver>

 {
    BOOL _hasBeganPresentation;
    BOOL _hasFinishedPresentation;
    BOOL _hasQueuedPresentationTransaction;
    BOOL _hasRequestedPlaceholderChromeRemoval;
    BOOL _hasWatchdogExpired;
    NSTimer *_watchdogTimeoutTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSUUID *gestureSessionID; // ivar: _gestureSessionID
@property (nonatomic) BOOL hasFinishedFlashAnimation; // ivar: _hasFinishedFlashAnimation
@property (nonatomic) BOOL hasFinishedSettlingAnimation; // ivar: _hasFinishedSettlingAnimation
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBInteractiveScreenshotCommitWorkspaceTransactionDelegate> *interactiveScreenshotCommitDelegate; // ivar: _interactiveScreenshotCommitDelegate
@property (retain, nonatomic) SBTransientOverlayViewController *screenshotMarkupTransientOverlayViewController; // ivar: _screenshotMarkupTransientOverlayViewController
@property (readonly) Class superclass;


-(id)initWithTransitionRequest:(id)arg0 gestureSessionID:(id)arg1 ;
-(void)_begin;
-(void)_handleWatchdogTimeout;
-(void)_updateState;
-(void)transientOverlayPresentWorkspaceTransactionDidPerformPresentation:(id)arg0 ;


@end


#endif