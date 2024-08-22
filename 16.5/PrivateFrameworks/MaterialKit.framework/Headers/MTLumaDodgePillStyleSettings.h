// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLUMADODGEPILLSTYLESETTINGS_H
#define MTLUMADODGEPILLSTYLESETTINGS_H

@class PTSettings;



@interface MTLumaDodgePillStyleSettings : PTSettings

@property (nonatomic) CGFloat blur; // ivar: _blur
@property (nonatomic) CGFloat brightness; // ivar: _brightness
@property (nonatomic) CGFloat colorAddOpacity; // ivar: _colorAddOpacity
@property (nonatomic) CGFloat lumaMapPlusColorOpacity; // ivar: _lumaMapPlusColorOpacity
@property (nonatomic) CGFloat overlayBlendOpacity; // ivar: _overlayBlendOpacity
@property (nonatomic) CGFloat saturation; // ivar: _saturation


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif