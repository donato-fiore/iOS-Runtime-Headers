// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBALERTLAYOUTPRESENTATIONVERIFIER_H
#define SBALERTLAYOUTPRESENTATIONVERIFIER_H

@class NSMutableArray, UIWindow, UIScreen, NSTimer, NSString;
@protocol SBUIActiveOrientationObserver, SBReachabilityObserver;

#import <Foundation/Foundation.h>

#import "SBSharedModalAlertItemPresenter.h"

@interface SBAlertLayoutPresentationVerifier : NSObject <SBUIActiveOrientationObserver, SBReachabilityObserver>

 {
    BOOL _pendingLayoutVerification;
    BOOL _pendingScheduledLayoutVerification;
    NSMutableArray *_updateReasons;
    UIWindow *_alertWindow;
    SBSharedModalAlertItemPresenter *_alertPresenter;
    UIScreen *_screen;
    NSTimer *_bugCaptureTimer;
    CGFloat _lastAutoBugCaptureEventTime;
    CGFloat _firstLogEventTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)initWithScreen:(id)arg0 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)dealloc;
-(void)handleReachabilityYOffsetDidChange;
-(void)scheduleAlertLayoutVerificationForReason:(id)arg0 ;
-(void)scheduleDelayedAlertLayoutVerificationForReason:(id)arg0 ;
-(void)setAlertItemWindow:(id)arg0 ;
-(void)setAlertPresenter:(id)arg0 ;


@end


#endif