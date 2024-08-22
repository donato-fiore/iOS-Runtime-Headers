// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSMAGSAFEACCESSORYSLEEVEVIEW_H
#define CSMAGSAFEACCESSORYSLEEVEVIEW_H

@class CALayer, BCBatteryDevice, UIImageView, SBFLockScreenDateView;


#import "CSMagSafeAccessoryView.h"
#import "CSBatteryChargingView.h"

@interface CSMagSafeAccessorySleeveView : CSMagSafeAccessoryView

@property (retain, nonatomic) CALayer *backgroundColorLayer; // ivar: _backgroundColorLayer
@property (retain, nonatomic) CSBatteryChargingView *batteryChargingView; // ivar: _batteryChargingView
@property (retain, nonatomic) BCBatteryDevice *batteryDevice; // ivar: _batteryDevice
@property (nonatomic) BOOL charging; // ivar: _charging
@property (retain, nonatomic) UIImageView *chargingBoltImageView; // ivar: _chargingBoltImageView
@property (retain, nonatomic) SBFLockScreenDateView *dateView; // ivar: _dateView
@property (retain, nonatomic) SBFLockScreenDateView *secondaryDateView; // ivar: _secondaryDateView
@property (nonatomic) CGRect visibleWindowFrame; // ivar: _visibleWindowFrame


-(CGFloat)animationDurationBeforeDismissal;
-(id)_batteryChargingViewWithChargingInfo:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dismissAnimation;
-(void)_presentAnimation;
-(void)_runAnimationWithType:(NSUInteger)arg0 ;
-(void)layoutSubviews;
-(void)performAnimation:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)setLegibilitySettings:(id)arg0 ;
-(void)transitionChargingViewVisible:(BOOL)arg0 chargingInfo:(id)arg1 ;
-(void)updateDateViews;


@end


#endif