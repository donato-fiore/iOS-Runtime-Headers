// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUSENDERIDENTITYCAPABILITIES_H
#define TUSENDERIDENTITYCAPABILITIES_H

@class NSUUID, NSString, NSData, NSURL;

#import <Foundation/Foundation.h>

#import "TUCallCapabilitiesXPCClient.h"
#import "TUSenderIdentityCapabilitiesState.h"
#import "TUCTCapabilityInfo.h"

@interface TUSenderIdentityCapabilities : NSObject

@property (readonly, nonatomic) BOOL canAttemptEmergencyCallsWithoutCellularConnection;
@property (readonly, nonatomic) BOOL canAttemptTelephonyCallsWithoutCellularConnection;
@property (readonly, nonatomic) TUCallCapabilitiesXPCClient *client; // ivar: _client
@property (readonly, nonatomic, getter=isCSCallingCurrentlyAvailable) BOOL csCallingCurrentlyAvailable;
@property (readonly, nonatomic, getter=isEmergencyWiFiCallingCurrentlyAvailable) BOOL emergencyWiFiCallingCurrentlyAvailable;
@property (readonly, copy, nonatomic) NSUUID *senderIdentityUUID; // ivar: _senderIdentityUUID
@property (readonly, copy, nonatomic) TUSenderIdentityCapabilitiesState *state; // ivar: _state
@property (readonly, nonatomic) BOOL supportsEmergencyWiFiCalling;
@property (readonly, nonatomic) BOOL supportsSimultaneousVoiceAndData;
@property (readonly, nonatomic) BOOL supportsThumperCalling;
@property (readonly, nonatomic) BOOL supportsThumperCallingOverCellularData;
@property (readonly, nonatomic) BOOL supportsVoLTECalling;
@property (readonly, nonatomic) BOOL supportsWiFiCalling;
@property (readonly, nonatomic) BOOL supportsWiFiCallingRoaming;
@property (readonly, nonatomic, getter=isThumperCallingAllowedForCurrentDevice) BOOL thumperCallingAllowedForCurrentDevice;
@property (readonly, nonatomic, getter=isThumperCallingAllowedOnDefaultPairedSecondaryDevice) BOOL thumperCallingAllowedOnDefaultPairedSecondaryDevice;
@property (readonly, nonatomic) TUCTCapabilityInfo *thumperCallingCapabilityInfo;
@property (readonly, nonatomic, getter=isThumperCallingCurrentlyAvailable) BOOL thumperCallingCurrentlyAvailable;
@property (readonly, nonatomic, getter=isThumperCallingEnabled) BOOL thumperCallingEnabled;
@property (copy, nonatomic) NSString *thumperCallingLocalDeviceID; // ivar: _thumperCallingLocalDeviceID
@property (readonly, copy, nonatomic) NSData *thumperCallingProvisioningPostData;
@property (readonly, nonatomic) int thumperCallingProvisioningStatus;
@property (readonly, copy, nonatomic) NSURL *thumperCallingProvisioningURL;
@property (readonly, nonatomic, getter=isThumperCallingProvisioningURLInvalid) BOOL thumperCallingProvisioningURLInvalid;
@property (readonly, nonatomic) TUCTCapabilityInfo *voLTECallingCapabilityInfo;
@property (readonly, nonatomic, getter=isVoLTECallingCurrentlyAvailable) BOOL voLTECallingCurrentlyAvailable;
@property (readonly, nonatomic, getter=isVoLTECallingEnabled) BOOL voLTECallingEnabled;
@property (readonly, nonatomic) TUCTCapabilityInfo *wiFiCallingCapabilityInfo;
@property (readonly, nonatomic, getter=isWiFiCallingCurrentlyAvailable) BOOL wiFiCallingCurrentlyAvailable;
@property (readonly, nonatomic, getter=isWiFiCallingEnabled) BOOL wiFiCallingEnabled;
@property (readonly, copy, nonatomic) NSData *wiFiCallingProvisioningPostData;
@property (readonly, nonatomic) int wiFiCallingProvisioningStatus;
@property (readonly, copy, nonatomic) NSURL *wiFiCallingProvisioningURL;
@property (readonly, nonatomic, getter=isWiFiCallingProvisioningURLInvalid) BOOL wiFiCallingProvisioningURLInvalid;
@property (readonly, nonatomic, getter=isWiFiCallingRoamingEnabled) BOOL wiFiCallingRoamingEnabled;


-(BOOL)isThumperCallingAllowedOnSecondaryDeviceWithID:(id)arg0 ;
-(id)debugDescription;
-(id)initWithSenderIdentityUUID:(id)arg0 state:(id)arg1 client:(id)arg2 ;
-(void)_sendNotificationsAndCallbacksComparingToOldSenderIdentityCapabilities:(id)arg0 ;
-(void)cancelPinRequestFromPrimaryDeviceForThumperCalling;
-(void)invalidateAndRefreshThumperCallingProvisioningURL;
-(void)invalidateAndRefreshWiFiCallingProvisioningURL;
-(void)requestPinFromPrimaryDeviceForThumperCalling;
-(void)setThumperCallingAllowed:(BOOL)arg0 onSecondaryDeviceWithID:(id)arg1 ;


@end


#endif