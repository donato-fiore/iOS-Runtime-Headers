// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIJSSETTINGSINTERFACE_H
#define VUIJSSETTINGSINTERFACE_H

@protocol VUIJSSettingsInterface;


#import "VUIJSObject.h"

@interface VUIJSSettingsInterface : VUIJSObject <VUIJSSettingsInterface>





-(BOOL)privateModeEnabled;
-(BOOL)sportsScoreSpoilersAllowed;
-(NSUInteger)privacyFlowContentVersion;
-(id)appSettingsByChannelID;
-(id)consentedBrands;
-(id)deniedBrands;
-(id)initWithAppContext:(id)arg0 ;
-(id)userPreferences;
-(id)wlkOverrides;
-(void)_handleSettingsDidChange:(id)arg0 ;
-(void)dealloc;
-(void)forceUpdateWithCallback:(id)arg0 ;
-(void)updateFeaturesConfiguration:(id)arg0 ;


@end


#endif