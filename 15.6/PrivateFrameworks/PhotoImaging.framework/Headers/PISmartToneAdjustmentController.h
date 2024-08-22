// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PISMARTTONEADJUSTMENTCONTROLLER_H
#define PISMARTTONEADJUSTMENTCONTROLLER_H

@class NSDictionary;


#import "PIAdjustmentController.h"

@interface PISmartToneAdjustmentController : PIAdjustmentController {
    ? _smartSettings;
}


@property (nonatomic) CGFloat inputLight;
@property (nonatomic) CGFloat offsetBlack;
@property (nonatomic) CGFloat offsetBrightness;
@property (nonatomic) CGFloat offsetContrast;
@property (nonatomic) CGFloat offsetExposure;
@property (nonatomic) CGFloat offsetHighlights;
@property (nonatomic) CGFloat offsetLocalLight;
@property (nonatomic) CGFloat offsetShadows;
@property (copy, nonatomic) NSDictionary *overcaptureStatistics;
@property (nonatomic) NSInteger sourceSelection;
@property (copy, nonatomic) NSDictionary *statistics;


+(id)attributeBlackPointKey;
+(id)attributeBrightnessKey;
+(id)attributeContrastKey;
+(id)attributeExposureKey;
+(id)attributeHighlightsKey;
+(id)attributeLightMapHeightKey;
+(id)attributeLightMapKey;
+(id)attributeLightMapWidthKey;
+(id)attributeLocalLightKey;
+(id)attributeShadowsKey;
+(id)inputBlackKey;
+(id)inputBrightnessKey;
+(id)inputContrastKey;
+(id)inputExposureKey;
+(id)inputHighlightsKey;
+(id)inputLocalLightKey;
+(id)inputRawHighlightsKey;
+(id)inputShadowsKey;
-(CGFloat)inputBlack;
-(CGFloat)inputBrightness;
-(CGFloat)inputContrast;
-(CGFloat)inputExposure;
-(CGFloat)inputHighlights;
-(CGFloat)inputLocalLight;
-(CGFloat)inputRawHighlights;
-(CGFloat)inputShadows;
-(id)computedSettings;
-(id)initWithAdjustment:(id)arg0 ;
-(void)_updateSettingsWithInputLight:(CGFloat)arg0 ;
-(void)setInputBlack:(CGFloat)arg0 ;
-(void)setInputBrightness:(CGFloat)arg0 ;
-(void)setInputContrast:(CGFloat)arg0 ;
-(void)setInputExposure:(CGFloat)arg0 ;
-(void)setInputHighlights:(CGFloat)arg0 ;
-(void)setInputLocalLight:(CGFloat)arg0 ;
-(void)setInputRawHighlights:(CGFloat)arg0 ;
-(void)setInputShadows:(CGFloat)arg0 ;


@end


#endif