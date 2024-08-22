// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSLOCKSCREENPASSCODESETTINGS_H
#define CSLOCKSCREENPASSCODESETTINGS_H

@class PTSettings;



@interface CSLockScreenPasscodeSettings : PTSettings

@property (nonatomic) CGFloat lightenSourceOverColorAlpha; // ivar: _lightenSourceOverColorAlpha
@property (nonatomic) CGFloat lightenSourceOverColorWhite; // ivar: _lightenSourceOverColorWhite
@property (nonatomic) CGFloat plusDColorAlpha; // ivar: _plusDColorAlpha
@property (nonatomic) CGFloat plusDColorWhite; // ivar: _plusDColorWhite


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif