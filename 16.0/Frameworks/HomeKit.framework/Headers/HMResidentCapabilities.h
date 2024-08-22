// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMRESIDENTCAPABILITIES_H
#define HMRESIDENTCAPABILITIES_H

@class NSString;
@protocol HMResidentCapabilities;

#import <Foundation/Foundation.h>


@interface HMResidentCapabilities : NSObject <HMResidentCapabilities>



@property (readonly, nonatomic) _HMResidentCapabilitiesStruct capabilities; // ivar: _capabilities
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isResidentCapable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAccessCodes;
@property (readonly, nonatomic) BOOL supportsAnnounce;
@property (readonly, nonatomic) BOOL supportsCHIP;
@property (readonly, nonatomic) BOOL supportsCameraActivityZones;
@property (readonly, nonatomic) BOOL supportsCameraPackageDetection;
@property (readonly, nonatomic) BOOL supportsCameraRecording;
@property (readonly, nonatomic) BOOL supportsCameraRecordingReachabilityNotifications;
@property (readonly, nonatomic) BOOL supportsCameraSignificantEventNotifications;
@property (readonly, nonatomic) BOOL supportsFaceClassification;
@property (readonly, nonatomic) BOOL supportsFirmwareUpdate;
@property (readonly, nonatomic) BOOL supportsHomeHub;
@property (readonly, nonatomic) BOOL supportsLockNotificationContext;
@property (readonly, nonatomic) BOOL supportsMediaActions;
@property (readonly, nonatomic) BOOL supportsNaturalLighting;
@property (readonly, nonatomic) BOOL supportsResidentFirmwareUpdate;
@property (readonly, nonatomic) BOOL supportsResidentFirstAccessoryCommunication;
@property (readonly, nonatomic) BOOL supportsRouterManagement;
@property (readonly, nonatomic) BOOL supportsShortcutActions;
@property (readonly, nonatomic) BOOL supportsSiriEndpointSetup;
@property (readonly, nonatomic) BOOL supportsThreadBorderRouter;
@property (readonly, nonatomic) BOOL supportsThreadNetworkCredentialSharing;
@property (readonly, nonatomic) BOOL supportsUnifiedMediaNotifications;
@property (readonly, nonatomic) BOOL supportsWakeOnLAN;
@property (readonly, nonatomic) BOOL supportsWalletKey;
@property (readonly, nonatomic) NSString *tag; // ivar: _tag


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLocalEqual:(id)arg0 ;
-(id)initWithProtoCapabilities:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithTagUUID:(id)arg0 capabilities:(struct _HMResidentCapabilitiesStruct )arg1 ;
-(id)pbCapabilities;


@end


#endif