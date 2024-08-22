// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDAUDIOANALYTICSSETTINGSPREFERENCES_H
#define HDAUDIOANALYTICSSETTINGSPREFERENCES_H


#import <Foundation/Foundation.h>


@interface HDAudioAnalyticsSettingsPreferences : NSObject



-(BOOL)_hasPairedWatchWithNoiseApp;
-(id)headphonePreferences;
-(id)headphonePreferencesForActivePairedWatch;
-(id)headphonePreferencesForLocalDevice;
-(id)noisePreferences;


@end


#endif