// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPOINTEREFFECTSIZERULESETTINGS_H
#define _UIPOINTEREFFECTSIZERULESETTINGS_H

@class PTSettings;



@interface _UIPointerEffectSizeRuleSettings : PTSettings

@property (nonatomic) CGFloat explicitRequestMultiplier; // ivar: _explicitRequestMultiplier
@property (nonatomic) CGFloat genericSizeRuleThreshold; // ivar: _genericSizeRuleThreshold
@property (nonatomic) CGFloat narrowAspectRuleMajorDimensionThreshold; // ivar: _narrowAspectRuleMajorDimensionThreshold
@property (nonatomic) CGFloat narrowAspectRuleMinorDimensionThreshold; // ivar: _narrowAspectRuleMinorDimensionThreshold
@property (nonatomic) CGFloat pointerSizeRuleMajorDimensionThreshold; // ivar: _pointerSizeRuleMajorDimensionThreshold
@property (nonatomic) CGFloat pointerSizeRuleMinorDimensionThreshold; // ivar: _pointerSizeRuleMinorDimensionThreshold


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif