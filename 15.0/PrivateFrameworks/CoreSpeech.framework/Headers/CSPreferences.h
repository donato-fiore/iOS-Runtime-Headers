// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSPREFERENCES_H
#define CSPREFERENCES_H


#import <Foundation/Foundation.h>


@interface CSPreferences : NSObject



+(id)sharedPreferences;
-(BOOL)enableAudioInjection:(BOOL)arg0 ;
-(BOOL)fileLoggingIsEnabled;
-(BOOL)isAdaptiveSiriVolumeTemporaryIntentValid;
-(BOOL)isAttentiveSiriAudioLoggingEnabled;
-(BOOL)isAttentiveSiriEnabled;
-(BOOL)isPHSSupported;
-(BOOL)smartSiriVolumeContextAwareEnabled;
-(BOOL)twoShotNotificationEnabled;
-(BOOL)useSiriActivationSPIForHomePod;
-(BOOL)voiceTriggerEnabled;
-(id)getStartOfSpeechAudioLogFilePath;
-(id)trialBaseAssetDirectory;
-(id)voiceTriggerAudioLogDirectory;
-(void)disableAdaptiveSiriVolume:(id)arg0 ;
-(void)setAudioInjectionFilePath:(id)arg0 ;
-(void)setFileLoggingIsEnabled:(BOOL)arg0 ;


@end


#endif