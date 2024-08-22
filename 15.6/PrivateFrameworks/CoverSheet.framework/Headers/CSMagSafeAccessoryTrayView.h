// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSMAGSAFEACCESSORYTRAYVIEW_H
#define CSMAGSAFEACCESSORYTRAYVIEW_H

@class CABackdropLayer, CALayer;


#import "CSMagSafeAccessoryView.h"
#import "CSRingLayer.h"

@interface CSMagSafeAccessoryTrayView : CSMagSafeAccessoryView

@property (retain, nonatomic) CABackdropLayer *averageColorBackdropLayer; // ivar: _averageColorBackdropLayer
@property (retain, nonatomic) CABackdropLayer *backgroundBackdropLayer; // ivar: _backgroundBackdropLayer
@property (retain, nonatomic) CABackdropLayer *backgroundRadiusBackdropLayer; // ivar: _backgroundRadiusBackdropLayer
@property (nonatomic) BOOL clearColorAnimationNeeded; // ivar: _clearColorAnimationNeeded
@property (retain, nonatomic) CALayer *splashRing1; // ivar: _splashRing1
@property (retain, nonatomic) CALayer *splashRing2; // ivar: _splashRing2
@property (retain, nonatomic) CALayer *splashRing3; // ivar: _splashRing3
@property (retain, nonatomic) CALayer *splashRing4; // ivar: _splashRing4
@property (retain, nonatomic) CSRingLayer *trackRing; // ivar: _trackRing
@property (retain, nonatomic) CABackdropLayer *trackRingBlurBackdropLayer; // ivar: _trackRingBlurBackdropLayer
@property (retain, nonatomic) CSRingLayer *trackRingBlurLayer; // ivar: _trackRingBlurLayer


-(CGFloat)animationDurationBeforeDismissal;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithTrayColor:(id)arg0 ;
-(void)_dismissAnimation;
-(void)_presentAnimation;
-(void)_runAnimationWithType:(NSUInteger)arg0 ;
-(void)layoutSubviews;
-(void)performAnimation:(NSUInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif