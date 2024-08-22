// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSDASHBOARDSCROLLMODIFIERSETTINGS_H
#define CSDASHBOARDSCROLLMODIFIERSETTINGS_H

@class PTSettings;



@interface CSDashBoardScrollModifierSettings : PTSettings

@property (nonatomic) CGFloat accumulatedDragThresholdPercentage; // ivar: _accumulatedDragThresholdPercentage
@property (nonatomic) BOOL cancelScrollingIfTooMuchDrag; // ivar: _cancelScrollingIfTooMuchDrag
@property (nonatomic) CGFloat inertialMultiplierSigmoidAlpha; // ivar: _inertialMultiplierSigmoidAlpha
@property (nonatomic) CGFloat inertialMultiplierSigmoidBase; // ivar: _inertialMultiplierSigmoidBase
@property (nonatomic) CGFloat inertialMultiplierSigmoidPivot; // ivar: _inertialMultiplierSigmoidPivot
@property (nonatomic) CGFloat inertialMultiplierSigmoidRange; // ivar: _inertialMultiplierSigmoidRange
@property (nonatomic) CGFloat maxDragFromVerticalPerFrame; // ivar: _maxDragFromVerticalPerFrame
@property (nonatomic) CGFloat maxScrollDistance; // ivar: _maxScrollDistance
@property (nonatomic) CGFloat minPercentageSigmoidAlpha; // ivar: _minPercentageSigmoidAlpha
@property (nonatomic) CGFloat minPercentageSigmoidBase; // ivar: _minPercentageSigmoidBase
@property (nonatomic) CGFloat minPercentageSigmoidPivot; // ivar: _minPercentageSigmoidPivot
@property (nonatomic) CGFloat minPercentageSigmoidRange; // ivar: _minPercentageSigmoidRange
@property (nonatomic) CGFloat powerOfVerticalDirectionSine2; // ivar: _powerOfVerticalDirectionSine2
@property (nonatomic) NSInteger strategy; // ivar: _strategy


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif