// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PISMARTCOLORADJUSTMENTCONTROLLER_H
#define PISMARTCOLORADJUSTMENTCONTROLLER_H

@class NSDictionary;


#import "PIAdjustmentController.h"

@interface PISmartColorAdjustmentController : PIAdjustmentController {
    ? _stats;
    ? _smartSettings;
}


@property (nonatomic) CGFloat inputColor;
@property (nonatomic) CGFloat offsetCast;
@property (nonatomic) CGFloat offsetContrast;
@property (nonatomic) CGFloat offsetSaturation;
@property (copy, nonatomic) NSDictionary *statistics;


+(id)attributeCastKey;
+(id)attributeContrastKey;
+(id)attributeVibrancyKey;
+(id)inputCastKey;
+(id)inputContrastKey;
+(id)inputSaturationKey;
-(CGFloat)inputCast;
-(CGFloat)inputContrast;
-(CGFloat)inputSaturation;
-(id)computedSettings;
-(id)initWithAdjustment:(id)arg0 ;
-(void)_updateSettingsWithInputColor:(CGFloat)arg0 ;
-(void)setInputCast:(CGFloat)arg0 ;
-(void)setInputContrast:(CGFloat)arg0 ;
-(void)setInputSaturation:(CGFloat)arg0 ;


@end


#endif