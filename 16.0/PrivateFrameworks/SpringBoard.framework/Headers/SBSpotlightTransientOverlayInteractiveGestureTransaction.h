// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSPOTLIGHTTRANSIENTOVERLAYINTERACTIVEGESTURETRANSACTION_H
#define SBSPOTLIGHTTRANSIENTOVERLAYINTERACTIVEGESTURETRANSACTION_H

@class NSString;
@protocol BSTransactionObserver;


#import "SBMainWorkspaceTransaction.h"
#import "SBSpotlightSettings.h"
#import "SBSpotlightTransientOverlayViewController.h"

@interface SBSpotlightTransientOverlayInteractiveGestureTransaction : SBMainWorkspaceTransaction <BSTransactionObserver>

 {
    BOOL _gestureFinishedBeforeTransactionBegan;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBMainWorkspaceTransaction *presentTransientOverlayTransaction; // ivar: _presentTransientOverlayTransaction
@property (retain, nonatomic) SBSpotlightSettings *settings; // ivar: _settings
@property (retain, nonatomic) SBSpotlightTransientOverlayViewController *spotlightTransientOverlayViewController; // ivar: _spotlightTransientOverlayViewController
@property (readonly) Class superclass;


-(BOOL)canInterruptForTransitionRequest:(id)arg0 ;
-(id)initWithTransitionRequest:(id)arg0 spotlightTransientOverlayViewController:(id)arg1 ;
-(void)_begin;
-(void)_didComplete;
-(void)_dismissSpotlightTransientOverlayViewController;
-(void)_logForInterruptAttemptReason:(id)arg0 ;
-(void)_presentTransientOverlayViewController:(id)arg0 ;
-(void)endPresentation:(BOOL)arg0 ;
-(void)noteGestureFinishedBeforeTransactionBegan;
-(void)transactionDidComplete:(id)arg0 ;
-(void)updatePresentationWithProgress:(CGFloat)arg0 translation:(CGFloat)arg1 ;


@end


#endif