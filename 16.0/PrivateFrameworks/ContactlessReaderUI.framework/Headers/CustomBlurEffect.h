// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUSTOMBLUREFFECT_H
#define CUSTOMBLUREFFECT_H

@class UIBlurEffect, NSNumber, UIColor;



@interface CustomBlurEffect : UIBlurEffect

@property (retain, nonatomic) NSNumber *customBlurRadius; // ivar: _customBlurRadius
@property (retain, nonatomic) UIColor *customColorTint; // ivar: _customColorTint
@property (retain, nonatomic) NSNumber *customColorTintAlpha; // ivar: _customColorTintAlpha
@property (retain, nonatomic) NSNumber *customSaturation; // ivar: _customSaturation


+(id)effectWithStyle:(NSInteger)arg0 ;
-(id)effectSettings;


@end


#endif