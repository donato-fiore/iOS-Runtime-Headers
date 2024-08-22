// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIACTIVITYINDICATORSETTINGS_H
#define _UIACTIVITYINDICATORSETTINGS_H

@class PTSettings;



@interface _UIActivityIndicatorSettings : PTSettings

@property (nonatomic) CGFloat alphaValue; // ivar: _alphaValue
@property (nonatomic) CGFloat blueValue; // ivar: _blueValue
@property (nonatomic) BOOL customColor; // ivar: _customColor
@property (nonatomic) CGFloat fullLoopDuration; // ivar: _fullLoopDuration
@property (nonatomic) CGFloat greenValue; // ivar: _greenValue
@property (nonatomic) CGFloat redValue; // ivar: _redValue


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif