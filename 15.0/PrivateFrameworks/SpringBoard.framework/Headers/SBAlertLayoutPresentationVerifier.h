// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBALERTLAYOUTPRESENTATIONVERIFIER_H
#define SBALERTLAYOUTPRESENTATIONVERIFIER_H

@class NSMutableArray, UIWindow, BSMonotonicReferenceTime, NSString;
@protocol SBUIActiveOrientationObserver, SBReachabilityObserver;

#import <Foundation/Foundation.h>

#import "SBSharedModalAlertItemPresenter.h"

@interface SBAlertLayoutPresentationVerifier : NSObject <SBUIActiveOrientationObserver, SBReachabilityObserver>

 {
    BOOL _pendingLayoutVerification;
    NSMutableArray *_updateReasons;
    UIWindow *_alertWindow;
    SBSharedModalAlertItemPresenter *_alertPresenter;
    BSMonotonicReferenceTime *_firstLogEventTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)dealloc;
-(void)handleReachabilityYOffsetDidChange;
-(void)scheduleAlertLayoutVerificationForReason:(id)arg0 ;
-(void)setAlertItemWindow:(id)arg0 ;
-(void)setAlertPresenter:(id)arg0 ;


@end


#endif