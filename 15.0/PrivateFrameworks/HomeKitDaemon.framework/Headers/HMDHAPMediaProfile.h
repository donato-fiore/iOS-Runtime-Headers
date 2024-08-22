// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHAPMEDIAPROFILE_H
#define HMDHAPMEDIAPROFILE_H

@class NSString;


#import "HMDMediaProfile.h"

@interface HMDHAPMediaProfile : HMDMediaProfile

@property NSInteger airPlayEnable; // ivar: _airPlayEnable
@property (readonly) NSString *clientIdentifier; // ivar: _clientIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)_updateAudioControl:(id)arg0 ;
-(BOOL)_updatePlayback:(id)arg0 ;
-(BOOL)_updateRefreshPlayback:(id)arg0 ;
-(NSUInteger)capability;
-(id)_allCharacteristicsToMonitor;
-(id)_mediaSessionStateFromProfile;
-(id)_smartSpeakerAirPlayEnableCharacteristic;
-(id)_smartSpeakerAirPlayEnableReadRequest;
-(id)_smartSpeakerCurrentMediaStateCharacteristic;
-(id)_smartSpeakerCurrentMediaStateReadRequest;
-(id)_smartSpeakerMutedCharacteristic;
-(id)_smartSpeakerMutedReadRequest;
-(id)_smartSpeakerMutedWriteRequestWithMuted:(id)arg0 ;
-(id)_smartSpeakerService;
-(id)_smartSpeakerTargetMediaStateCharacteristic;
-(id)_smartSpeakerTargetMediaStateWriteRequestWithPlaybackState:(id)arg0 ;
-(id)_smartSpeakerVolumeCharacteristic;
-(id)_smartSpeakerVolumeReadRequest;
-(id)_smartSpeakerVolumeWriteRequestWithVolumePercentage:(id)arg0 ;
-(id)initWithMediaServices:(id)arg0 ;
-(id)playStateWriteRequestWithPlaybackState:(NSInteger)arg0 ;
-(id)volumeWriteRequestWithVolumePercentage:(id)arg0 ;
-(void)_disableCharacteristicNotifications;
-(void)_handleCharacteristicChanges:(id)arg0 ;
-(void)_notifyProfileSettingsUpdated:(id)arg0 ;
-(void)_setCharacteristicNotifications:(BOOL)arg0 ;
-(void)_updateCharacteristicChanges;
-(void)_updateCurrentMediaState:(id)arg0 volumePercentage:(id)arg1 muted:(id)arg2 enable:(id)arg3 message:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleAccessoryConnected:(id)arg0 ;
-(void)handleCharacteristicsUpdated:(id)arg0 ;
-(void)handleHomeCharacteristicValuesChanged:(id)arg0 ;
-(void)handlePrimaryResidentChanged:(id)arg0 ;
-(void)handleResidentAdded:(id)arg0 ;
-(void)registerForNotifications;
-(void)setEnable:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif