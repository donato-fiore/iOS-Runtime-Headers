// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSLOOKSETTINGS_H
#define CSLOOKSETTINGS_H

@class PTSettings, NSString;



@interface CSLookSettings : PTSettings

@property (nonatomic) BOOL customizesDateTime; // ivar: _customizesDateTime
@property (nonatomic) BOOL subtitleAboveTime; // ivar: _subtitleAboveTime
@property (nonatomic) NSString *timeFontDesign; // ivar: _timeFontDesign
@property (nonatomic) CGFloat timeFontSize; // ivar: _timeFontSize
@property (nonatomic) CGFloat timeFontWeight; // ivar: _timeFontWeight
@property (nonatomic) BOOL useSettingsDateTime; // ivar: _useSettingsDateTime


+(id)settingsControllerModule;
-(id)customTimeFont;
-(void)setDefaultValues;


@end


#endif