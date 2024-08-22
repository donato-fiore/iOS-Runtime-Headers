// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICUSTOMBLUREFFECT_H
#define _UICUSTOMBLUREFFECT_H



#import "UIBlurEffect.h"
#import "UIColor.h"

@interface _UICustomBlurEffect : UIBlurEffect

@property (nonatomic) CGFloat blurRadius;
@property (nonatomic) CGFloat colorBurnTintAlpha;
@property (nonatomic) CGFloat colorBurnTintLevel;
@property (retain, nonatomic) UIColor *colorTint;
@property (nonatomic) CGFloat colorTintAlpha;
@property (nonatomic) BOOL darkenWithSourceOver;
@property (nonatomic) CGFloat darkeningTintAlpha;
@property (nonatomic) CGFloat darkeningTintHue;
@property (nonatomic) CGFloat darkeningTintSaturation;
@property (nonatomic) CGFloat grayscaleTintAlpha;
@property (nonatomic) CGFloat grayscaleTintLevel;
@property (nonatomic) BOOL lightenGrayscaleWithSourceOver;
@property (nonatomic) CGFloat saturationDeltaFactor;
@property (nonatomic) CGFloat scale;
@property (nonatomic) CGFloat zoom;


+(id)effectWithStyle:(NSInteger)arg0 ;
-(id)effectSettings;


@end


#endif