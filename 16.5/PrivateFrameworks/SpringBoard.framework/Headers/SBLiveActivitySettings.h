// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLIVEACTIVITYSETTINGS_H
#define SBLIVEACTIVITYSETTINGS_H

@class PTSettings;



@interface SBLiveActivitySettings : PTSettings

@property (nonatomic) BOOL allowAlertsOnHostApp; // ivar: _allowAlertsOnHostApp


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif