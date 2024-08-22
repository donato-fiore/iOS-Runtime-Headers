// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDEASYCONFIGCOMPLETED_H
#define AWDEASYCONFIGCOMPLETED_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface AWDEasyConfigCompleted : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL adminPasswordSet; // ivar: _adminPasswordSet
@property (nonatomic) unsigned int channelOfDestinationAP; // ivar: _channelOfDestinationAP
@property (nonatomic) unsigned int channelOfSWAP; // ivar: _channelOfSWAP
@property (nonatomic) BOOL destinationNetworkPSKInKeychain; // ivar: _destinationNetworkPSKInKeychain
@property (nonatomic) BOOL destinationNetworkRecommendationUsed; // ivar: _destinationNetworkRecommendationUsed
@property (retain, nonatomic) NSString *eaBundleSeedID; // ivar: _eaBundleSeedID
@property (retain, nonatomic) NSString *eaFirmwareRevision; // ivar: _eaFirmwareRevision
@property (retain, nonatomic) NSString *eaHardwareRevision; // ivar: _eaHardwareRevision
@property (retain, nonatomic) NSString *eaManufacturerName; // ivar: _eaManufacturerName
@property (retain, nonatomic) NSString *eaModelName; // ivar: _eaModelName
@property (retain, nonatomic) NSMutableArray *eaProtocolStrings; // ivar: _eaProtocolStrings
@property (nonatomic) int easyConfigStoppedReasonError; // ivar: _easyConfigStoppedReasonError
@property (nonatomic) unsigned int enterSetupCodeMs; // ivar: _enterSetupCodeMs
@property (nonatomic) BOOL hasAdminPasswordSet;
@property (nonatomic) BOOL hasChannelOfDestinationAP;
@property (nonatomic) BOOL hasChannelOfSWAP;
@property (nonatomic) BOOL hasDestinationNetworkPSKInKeychain;
@property (nonatomic) BOOL hasDestinationNetworkRecommendationUsed;
@property (readonly, nonatomic) BOOL hasEaBundleSeedID;
@property (readonly, nonatomic) BOOL hasEaFirmwareRevision;
@property (readonly, nonatomic) BOOL hasEaHardwareRevision;
@property (readonly, nonatomic) BOOL hasEaManufacturerName;
@property (readonly, nonatomic) BOOL hasEaModelName;
@property (nonatomic) BOOL hasEasyConfigStoppedReasonError;
@property (nonatomic) BOOL hasEnterSetupCodeMs;
@property (nonatomic) BOOL hasHitJoiningDestinationAPTimeout;
@property (nonatomic) BOOL hasHitJoiningTargetSWAPTimeout;
@property (nonatomic) BOOL hasPauseAfterApply;
@property (nonatomic) BOOL hasPlayPasswordSet;
@property (nonatomic) BOOL hasRssiOfDestinationAP;
@property (nonatomic) BOOL hasRssiOfSWAP;
@property (nonatomic) BOOL hasSecondsToApplyConfig;
@property (nonatomic) BOOL hasSecondsToCompleteFullConfig;
@property (nonatomic) BOOL hasSecondsToCompleteMFiSAPAuth;
@property (nonatomic) BOOL hasSecondsToCompletePostConfigCheck;
@property (nonatomic) BOOL hasSecondsToFindPostConfigDevice;
@property (nonatomic) BOOL hasSecondsToFindPreConfigDevice;
@property (nonatomic) BOOL hasSecondsToGetLinkUpOnDestination;
@property (nonatomic) BOOL hasSecondsToGetLinkUpOnSWAP;
@property (nonatomic) BOOL hasSnrOfDestinationAP;
@property (nonatomic) BOOL hasSnrOfSWAP;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUserChangedFriendlyName;
@property (nonatomic) BOOL hasWifiJoinDestinationAPError;
@property (nonatomic) BOOL hasWifiJoinSWAPError;
@property (nonatomic) BOOL hitJoiningDestinationAPTimeout; // ivar: _hitJoiningDestinationAPTimeout
@property (nonatomic) BOOL hitJoiningTargetSWAPTimeout; // ivar: _hitJoiningTargetSWAPTimeout
@property (nonatomic) BOOL pauseAfterApply; // ivar: _pauseAfterApply
@property (nonatomic) BOOL playPasswordSet; // ivar: _playPasswordSet
@property (nonatomic) int rssiOfDestinationAP; // ivar: _rssiOfDestinationAP
@property (nonatomic) int rssiOfSWAP; // ivar: _rssiOfSWAP
@property (nonatomic) float secondsToApplyConfig; // ivar: _secondsToApplyConfig
@property (nonatomic) float secondsToCompleteFullConfig; // ivar: _secondsToCompleteFullConfig
@property (nonatomic) float secondsToCompleteMFiSAPAuth; // ivar: _secondsToCompleteMFiSAPAuth
@property (nonatomic) float secondsToCompletePostConfigCheck; // ivar: _secondsToCompletePostConfigCheck
@property (nonatomic) float secondsToFindPostConfigDevice; // ivar: _secondsToFindPostConfigDevice
@property (nonatomic) float secondsToFindPreConfigDevice; // ivar: _secondsToFindPreConfigDevice
@property (nonatomic) float secondsToGetLinkUpOnDestination; // ivar: _secondsToGetLinkUpOnDestination
@property (nonatomic) float secondsToGetLinkUpOnSWAP; // ivar: _secondsToGetLinkUpOnSWAP
@property (nonatomic) unsigned int snrOfDestinationAP; // ivar: _snrOfDestinationAP
@property (nonatomic) unsigned int snrOfSWAP; // ivar: _snrOfSWAP
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) BOOL userChangedFriendlyName; // ivar: _userChangedFriendlyName
@property (nonatomic) int wifiJoinDestinationAPError; // ivar: _wifiJoinDestinationAPError
@property (nonatomic) int wifiJoinSWAPError; // ivar: _wifiJoinSWAPError


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eaProtocolStringsAtIndex:(NSUInteger)arg0 ;
-(void)addEaProtocolStrings:(id)arg0 ;
-(void)clearEaProtocolStrings;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif