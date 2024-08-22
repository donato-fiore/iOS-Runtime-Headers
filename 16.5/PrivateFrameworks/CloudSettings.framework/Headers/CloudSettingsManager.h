// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLOUDSETTINGSMANAGER_H
#define CLOUDSETTINGSMANAGER_H


#import <Foundation/Foundation.h>


@interface CloudSettingsManager : NSObject



+(id)sharedCloudSettingsManager;
-(BOOL)isEnabledForStore:(id)arg0 ;
-(BOOL)isServiceKnownForStore:(id)arg0 ;
-(NSInteger)conflictStateForStore:(id)arg0 ;
-(id)activeXPCConnectionForStore:(id)arg0 ;
-(id)currentConflictDictionary;
-(id)currentStateDictionary;
-(id)defaultSettingsDictionary;
-(id)deviceSettingsForStore:(id)arg0 ;
-(id)knownServiceNames;
-(void)applyCloudSettingsToDevice:(id)arg0 forStore:(id)arg1 ;
-(void)applySettingsToDevice:(id)arg0 forStore:(id)arg1 ;
-(void)performFirstTimeSetup:(id)arg0 ;
-(void)setConflict:(NSInteger)arg0 forStore:(id)arg1 ;
-(void)setEnabled:(BOOL)arg0 forStore:(id)arg1 ;
-(void)writeConflictsDictionaryToPrefs:(id)arg0 ;
-(void)writeSettingsDictionaryToPrefs:(id)arg0 ;
-(void)writeToCloudSettings:(id)arg0 forStore:(id)arg1 ;


@end


#endif