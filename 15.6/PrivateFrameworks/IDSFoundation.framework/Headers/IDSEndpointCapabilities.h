// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSENDPOINTCAPABILITIES_H
#define IDSENDPOINTCAPABILITIES_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSEndpointCapabilities : NSObject <NSSecureCoding>

 {
    char _supportsKeySharing;
    char _supportsHarmony;
    char _supportsFMDV2;
    char _supportsFMFenceV1;
    char _supportsLocationSharing;
    char _supportsScreenTimeV2;
    char _supportsIncomingFindMyV1;
    char _supportsSecureLocationsV1;
    char _supportsActivitySharing;
    char _supportsManateeForAppleCash;
    char _supportsRegionForAppleCash;
    char _supportsHomeKitResident;
    char _supportsMapsRoutingPathLeg;
    char _supportsBecaonSharingV2;
    char _supportsBeneficiaryInvites;
    char _supportsScreenTimeErrors;
    char _ecVersion;
    char _isC2KEquipment;
    char _showPeerErrors;
    char _nicknamesVersion;
    char _optionallyReceiveTypingIndicator;
    char _supportsInlineAttachments;
    char _supportsKeepReceipts;
    char _supportsStickersV1;
    char _supportsChatAppsV1;
    char _supportsBubbleEditingV1;
    char _supportsAcknowledgementsV1;
    char _supportsFullScreenMomentsV1;
    char _supportsFullScreenMomentsV2;
    char _supportsFullScreenMomentsV3;
    char _supportsInvisibleInkV1;
    char _supportsImpactEffectsV1;
    char _supportsUpdateAttachmentsV1;
    char _supportsAutoloopVideoV1;
    char _supportsMediaV2;
    char _supportsPhotosExtensionV1;
    char _supportsPhotosExtensionV2;
    char _supportsAudioMessagingV2;
    char _supportsAnimojiV2;
    char _supportsCertifiedDeliveryV1;
    char _supportsOriginalTimestampOrderingV1;
    char _supportsProtobufPayloadDataV2;
    char _supportsHEIFEncoding;
    char _supportsHDRVideo;
    char _prefersSDRVideo;
    char _supportsSyndicationActionsV1;
    char _supportsUWB;
    char _supportsDeliveredQuietlyAndNotifyRecipient;
    char _supportsModernGFT;
    char _supportsCo;
    char _isGreenTea;
    char _supportsGondola;
    char _doesNotSupportGFTCalls;
    char _isWebClient;
}




+(BOOL)supportsSecureCoding;
+(id)allowedCapabilities;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEndpointCapabilites:(id)arg0 ;
-(NSInteger)valueForCapability:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCapabilitiesMap:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif