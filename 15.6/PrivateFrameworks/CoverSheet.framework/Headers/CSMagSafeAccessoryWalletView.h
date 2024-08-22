// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSMAGSAFEACCESSORYWALLETVIEW_H
#define CSMAGSAFEACCESSORYWALLETVIEW_H

@class CABackdropLayer, CALayer;


#import "CSMagSafeAccessoryView.h"
#import "CSMagSafeAccessoryConfiguration.h"
#import "CSMagSafeSilhouetteConfiguration.h"
#import "CSRingLayer.h"

@interface CSMagSafeAccessoryWalletView : CSMagSafeAccessoryView

@property (retain, nonatomic) CABackdropLayer *averageColorBackdropLayer; // ivar: _averageColorBackdropLayer
@property (retain, nonatomic) CABackdropLayer *backgroundBackdropLayer; // ivar: _backgroundBackdropLayer
@property (retain, nonatomic) CABackdropLayer *backgroundRadiusBackdropLayer; // ivar: _backgroundRadiusBackdropLayer
@property (retain, nonatomic) CSMagSafeAccessoryConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) CSMagSafeSilhouetteConfiguration *silhouette; // ivar: _silhouette
@property (retain, nonatomic) CSRingLayer *trackRing; // ivar: _trackRing
@property (retain, nonatomic) CABackdropLayer *trackRingBlurBackdropLayer; // ivar: _trackRingBlurBackdropLayer
@property (retain, nonatomic) CSRingLayer *trackRingBlurLayer; // ivar: _trackRingBlurLayer
@property (retain, nonatomic) CALayer *walletLayer; // ivar: _walletLayer


-(CGFloat)animationDurationBeforeDismissal;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dismissAnimation;
-(void)_presentAnimation;
-(void)_runAnimationWithType:(NSUInteger)arg0 ;
-(void)layoutSubviews;
-(void)performAnimation:(NSUInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif