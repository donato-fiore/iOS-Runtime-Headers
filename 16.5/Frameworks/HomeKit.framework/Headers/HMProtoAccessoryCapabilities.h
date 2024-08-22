// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMPROTOACCESSORYCAPABILITIES_H
#define HMPROTOACCESSORYCAPABILITIES_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HMProtoAccessoryCapabilities : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasSupports2c25465bb0b47366;
@property (nonatomic) BOOL hasSupports89024c1cadcb8b00;
@property (nonatomic) BOOL hasSupports90bb069d6bx54e7;
@property (nonatomic) BOOL hasSupportsAnnounce;
@property (nonatomic) BOOL hasSupportsAssistantAccessControl;
@property (nonatomic) BOOL hasSupportsAudioReturnChannel;
@property (nonatomic) BOOL hasSupportsCaptiveNetworks;
@property (nonatomic) BOOL hasSupportsCloudDataSync;
@property (nonatomic) BOOL hasSupportsCompanionInitiatedRestart;
@property (nonatomic) BOOL hasSupportsCoordinationDoorbellChime;
@property (nonatomic) BOOL hasSupportsDeviceSetup;
@property (nonatomic) BOOL hasSupportsDoorbellChime;
@property (nonatomic) BOOL hasSupportsHomeHub;
@property (nonatomic) BOOL hasSupportsHomeInvitation;
@property (nonatomic) BOOL hasSupportsHomeLevelAnalyticsAndImprovementSetting;
@property (nonatomic) BOOL hasSupportsHomeLevelLocationServiceSetting;
@property (nonatomic) BOOL hasSupportsKeyTransferClient;
@property (nonatomic) BOOL hasSupportsKeyTransferServer;
@property (nonatomic) BOOL hasSupportsKeychainSync;
@property (nonatomic) BOOL hasSupportsManagedConfigurationProfile;
@property (nonatomic) BOOL hasSupportsMediaActions;
@property (nonatomic) BOOL hasSupportsMessagedHomePodSettings;
@property (nonatomic) BOOL hasSupportsMultiUser;
@property (nonatomic) BOOL hasSupportsMusicAlarm;
@property (nonatomic) BOOL hasSupportsPreferredMediaUser;
@property (nonatomic) BOOL hasSupportsStandaloneMode;
@property (nonatomic) BOOL hasSupportsTargetControl;
@property (nonatomic) BOOL hasSupportsThirdPartyMusic;
@property (nonatomic) BOOL hasSupportsThreadBorderRouter;
@property (nonatomic) BOOL hasSupportsUserMediaSettings;
@property (nonatomic) BOOL hasSupportsWholeHouseAudio;
@property (nonatomic) BOOL hasSupportsf9cc0d9d6aa54e7;
@property (readonly, nonatomic) BOOL hasTag;
@property (nonatomic) BOOL supports2c25465bb0b47366; // ivar: _supports2c25465bb0b47366
@property (nonatomic) BOOL supports89024c1cadcb8b00; // ivar: _supports89024c1cadcb8b00
@property (nonatomic) BOOL supports90bb069d6bx54e7; // ivar: _supports90bb069d6bx54e7
@property (nonatomic) BOOL supportsAnnounce; // ivar: _supportsAnnounce
@property (nonatomic) BOOL supportsAssistantAccessControl; // ivar: _supportsAssistantAccessControl
@property (nonatomic) BOOL supportsAudioReturnChannel; // ivar: _supportsAudioReturnChannel
@property (nonatomic) BOOL supportsCaptiveNetworks; // ivar: _supportsCaptiveNetworks
@property (nonatomic) BOOL supportsCloudDataSync; // ivar: _supportsCloudDataSync
@property (nonatomic) BOOL supportsCompanionInitiatedRestart; // ivar: _supportsCompanionInitiatedRestart
@property (nonatomic) BOOL supportsCoordinationDoorbellChime; // ivar: _supportsCoordinationDoorbellChime
@property (nonatomic) BOOL supportsDeviceSetup; // ivar: _supportsDeviceSetup
@property (nonatomic) BOOL supportsDoorbellChime; // ivar: _supportsDoorbellChime
@property (nonatomic) BOOL supportsHomeHub; // ivar: _supportsHomeHub
@property (nonatomic) BOOL supportsHomeInvitation; // ivar: _supportsHomeInvitation
@property (nonatomic) BOOL supportsHomeLevelAnalyticsAndImprovementSetting; // ivar: _supportsHomeLevelAnalyticsAndImprovementSetting
@property (nonatomic) BOOL supportsHomeLevelLocationServiceSetting; // ivar: _supportsHomeLevelLocationServiceSetting
@property (nonatomic) BOOL supportsKeyTransferClient; // ivar: _supportsKeyTransferClient
@property (nonatomic) BOOL supportsKeyTransferServer; // ivar: _supportsKeyTransferServer
@property (nonatomic) BOOL supportsKeychainSync; // ivar: _supportsKeychainSync
@property (nonatomic) BOOL supportsManagedConfigurationProfile; // ivar: _supportsManagedConfigurationProfile
@property (nonatomic) BOOL supportsMediaActions; // ivar: _supportsMediaActions
@property (nonatomic) BOOL supportsMessagedHomePodSettings; // ivar: _supportsMessagedHomePodSettings
@property (nonatomic) BOOL supportsMultiUser; // ivar: _supportsMultiUser
@property (nonatomic) BOOL supportsMusicAlarm; // ivar: _supportsMusicAlarm
@property (nonatomic) BOOL supportsPreferredMediaUser; // ivar: _supportsPreferredMediaUser
@property (nonatomic) BOOL supportsStandaloneMode; // ivar: _supportsStandaloneMode
@property (nonatomic) BOOL supportsTargetControl; // ivar: _supportsTargetControl
@property (nonatomic) BOOL supportsThirdPartyMusic; // ivar: _supportsThirdPartyMusic
@property (nonatomic) BOOL supportsThreadBorderRouter; // ivar: _supportsThreadBorderRouter
@property (nonatomic) BOOL supportsUserMediaSettings; // ivar: _supportsUserMediaSettings
@property (nonatomic) BOOL supportsWholeHouseAudio; // ivar: _supportsWholeHouseAudio
@property (nonatomic) BOOL supportsf9cc0d9d6aa54e7; // ivar: _supportsf9cc0d9d6aa54e7
@property (retain, nonatomic) NSString *tag; // ivar: _tag


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif