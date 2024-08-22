// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPIPSTASHMATERIALSETTINGS_H
#define SBPIPSTASHMATERIALSETTINGS_H

@class PTSettings, NSString, UIColor;



@interface SBPIPStashMaterialSettings : PTSettings

@property (copy, nonatomic) NSString *chevronCompositingFilter; // ivar: _chevronCompositingFilter
@property (retain, nonatomic) UIColor *chevronTintColor; // ivar: _chevronTintColor
@property (nonatomic) CGFloat darkTintAlpha; // ivar: _darkTintAlpha
@property (readonly, nonatomic) UIColor *darkTintColor;
@property (nonatomic) CGFloat lightTintAlpha; // ivar: _lightTintAlpha
@property (readonly, nonatomic) UIColor *lightTintColor;


+(BOOL)ignoresKey:(id)arg0 ;
+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif