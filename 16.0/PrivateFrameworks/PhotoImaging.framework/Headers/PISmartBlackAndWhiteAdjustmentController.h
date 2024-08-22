// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PISMARTBLACKANDWHITEADJUSTMENTCONTROLLER_H
#define PISMARTBLACKANDWHITEADJUSTMENTCONTROLLER_H



#import "PIAdjustmentController.h"

@interface PISmartBlackAndWhiteAdjustmentController : PIAdjustmentController

@property (nonatomic) CGFloat grain;
@property (nonatomic) CGFloat hue;
@property (nonatomic) CGFloat neutral;
@property (nonatomic) CGFloat strength;
@property (nonatomic) CGFloat tone;


+(id)attributeGrainKey;
+(id)attributeHueKey;
+(id)attributeNeutralGammaKey;
+(id)attributeStrengthKey;
+(id)attributeToneKey;
+(id)inputGrainKey;
+(id)inputHueKey;
+(id)inputNeutralGammaKey;
+(id)inputSeedKey;
+(id)inputStrengthKey;
+(id)inputToneKey;


@end


#endif