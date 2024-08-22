// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMPROTORESIDENTCAPABILITIES_H
#define HMPROTORESIDENTCAPABILITIES_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HMProtoResidentCapabilities : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasSupports32d3d60dfb651cd70e55;
@property (nonatomic) BOOL hasSupportsAccessCodes;
@property (nonatomic) BOOL hasSupportsAnnounce;
@property (nonatomic) BOOL hasSupportsCHIP;
@property (nonatomic) BOOL hasSupportsCameraActivityZones;
@property (nonatomic) BOOL hasSupportsCameraPackageDetection;
@property (nonatomic) BOOL hasSupportsCameraRecording;
@property (nonatomic) BOOL hasSupportsCameraRecordingReachabilityNotifications;
@property (nonatomic) BOOL hasSupportsCameraSignificantEventNotifications;
@property (nonatomic) BOOL hasSupportsCustomMediaApplicationDestination;
@property (nonatomic) BOOL hasSupportsFaceClassification;
@property (nonatomic) BOOL hasSupportsFirmwareUpdate;
@property (nonatomic) BOOL hasSupportsHomeHub;
@property (nonatomic) BOOL hasSupportsLockNotificationContext;
@property (nonatomic) BOOL hasSupportsMediaActions;
@property (nonatomic) BOOL hasSupportsNaturalLighting;
@property (nonatomic) BOOL hasSupportsResidentFirmwareUpdate;
@property (nonatomic) BOOL hasSupportsResidentFirstAccessoryCommunication;
@property (nonatomic) BOOL hasSupportsRouterManagement;
@property (nonatomic) BOOL hasSupportsShortcutActions;
@property (nonatomic) BOOL hasSupportsSiriEndpointSetup;
@property (nonatomic) BOOL hasSupportsThreadBorderRouter;
@property (nonatomic) BOOL hasSupportsUnifiedMediaNotifications;
@property (nonatomic) BOOL hasSupportsWakeOnLAN;
@property (nonatomic) BOOL hasSupportsWalletKey;
@property (readonly, nonatomic) BOOL hasTag;
@property (nonatomic) BOOL supports32d3d60dfb651cd70e55; // ivar: _supports32d3d60dfb651cd70e55
@property (nonatomic) BOOL supportsAccessCodes; // ivar: _supportsAccessCodes
@property (nonatomic) BOOL supportsAnnounce; // ivar: _supportsAnnounce
@property (nonatomic) BOOL supportsCHIP; // ivar: _supportsCHIP
@property (nonatomic) BOOL supportsCameraActivityZones; // ivar: _supportsCameraActivityZones
@property (nonatomic) BOOL supportsCameraPackageDetection; // ivar: _supportsCameraPackageDetection
@property (nonatomic) BOOL supportsCameraRecording; // ivar: _supportsCameraRecording
@property (nonatomic) BOOL supportsCameraRecordingReachabilityNotifications; // ivar: _supportsCameraRecordingReachabilityNotifications
@property (nonatomic) BOOL supportsCameraSignificantEventNotifications; // ivar: _supportsCameraSignificantEventNotifications
@property (nonatomic) BOOL supportsCustomMediaApplicationDestination; // ivar: _supportsCustomMediaApplicationDestination
@property (nonatomic) BOOL supportsFaceClassification; // ivar: _supportsFaceClassification
@property (nonatomic) BOOL supportsFirmwareUpdate; // ivar: _supportsFirmwareUpdate
@property (nonatomic) BOOL supportsHomeHub; // ivar: _supportsHomeHub
@property (nonatomic) BOOL supportsLockNotificationContext; // ivar: _supportsLockNotificationContext
@property (nonatomic) BOOL supportsMediaActions; // ivar: _supportsMediaActions
@property (nonatomic) BOOL supportsNaturalLighting; // ivar: _supportsNaturalLighting
@property (nonatomic) BOOL supportsResidentFirmwareUpdate; // ivar: _supportsResidentFirmwareUpdate
@property (nonatomic) BOOL supportsResidentFirstAccessoryCommunication; // ivar: _supportsResidentFirstAccessoryCommunication
@property (nonatomic) BOOL supportsRouterManagement; // ivar: _supportsRouterManagement
@property (nonatomic) BOOL supportsShortcutActions; // ivar: _supportsShortcutActions
@property (nonatomic) BOOL supportsSiriEndpointSetup; // ivar: _supportsSiriEndpointSetup
@property (nonatomic) BOOL supportsThreadBorderRouter; // ivar: _supportsThreadBorderRouter
@property (nonatomic) BOOL supportsUnifiedMediaNotifications; // ivar: _supportsUnifiedMediaNotifications
@property (nonatomic) BOOL supportsWakeOnLAN; // ivar: _supportsWakeOnLAN
@property (nonatomic) BOOL supportsWalletKey; // ivar: _supportsWalletKey
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