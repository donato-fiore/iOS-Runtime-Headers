// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SADEVICECONFIGURATION_H
#define SADEVICECONFIGURATION_H



#import "SABaseClientBoundCommand.h"

@interface SADeviceConfiguration : SABaseClientBoundCommand

@property (nonatomic) CGFloat audioSessionActivationDelay;
@property (nonatomic) CGFloat audioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;
@property (nonatomic) BOOL hasAudioSessionActivationDelay;
@property (nonatomic) CGFloat initialInterstitialDelay;
@property (nonatomic) CGFloat initialInterstitialDelayForCarPlay;
@property (nonatomic) CGFloat initialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking;
@property (nonatomic) CGFloat mediaPlaybackVolumeThresholdForAudioSessionActivationDelay;


+(id)deviceConfiguration;
+(id)deviceConfigurationWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif