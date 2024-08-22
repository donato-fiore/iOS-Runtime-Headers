// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPOINTEREFFECTSETTINGS_H
#define _UIPOINTEREFFECTSETTINGS_H

@class PTSettings;



@interface _UIPointerEffectSettings : PTSettings

@property (nonatomic) CGFloat dampedAnimationDampingRatio; // ivar: _dampedAnimationDampingRatio
@property (nonatomic) CGFloat dampedAnimationResponse; // ivar: _dampedAnimationResponse
@property (nonatomic) CGFloat defaultPointerCornerRadius; // ivar: _defaultPointerCornerRadius
@property (nonatomic) CGFloat maxSlipPoints; // ivar: _maxSlipPoints
@property (nonatomic) CGFloat overrideSlipPoints; // ivar: _overrideSlipPoints
@property (nonatomic) CGFloat parallaxAmount; // ivar: _parallaxAmount
@property (nonatomic) CGFloat scaleUpAnimationDampingRatio; // ivar: _scaleUpAnimationDampingRatio
@property (nonatomic) CGFloat scaleUpAnimationResponse; // ivar: _scaleUpAnimationResponse
@property (nonatomic) CGFloat scaleUpPoints; // ivar: _scaleUpPoints
@property (nonatomic) CGFloat slipFactorX; // ivar: _slipFactorX
@property (nonatomic) CGFloat slipFactorY; // ivar: _slipFactorY


+(BOOL)pointerSlipMatchesContentSlip;
+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif