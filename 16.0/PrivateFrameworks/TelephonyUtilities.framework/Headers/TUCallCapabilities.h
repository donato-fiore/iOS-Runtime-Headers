// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCALLCAPABILITIES_H
#define TUCALLCAPABILITIES_H


#import <Foundation/Foundation.h>


@interface TUCallCapabilities : NSObject



+(BOOL)accountsMatchForSecondaryCalling;
+(BOOL)accountsSupportSecondaryCalling;
+(BOOL)areCTCapabilitiesValid;
+(BOOL)areRelayCallingFeaturesEnabled;
+(BOOL)canAttemptEmergencyCallsWithoutCellularConnection;
+(BOOL)canAttemptEmergencyCallsWithoutCellularConnectionWithUUID:(id)arg0 ;
+(BOOL)canAttemptTelephonyCallsWithoutCellularConnection;
+(BOOL)canAttemptTelephonyCallsWithoutCellularConnectionWithSenderIdentityCapabilities:(id)arg0 ;
+(BOOL)isCSCallingCurrentlyAvailable;
+(BOOL)isDirectFaceTimeAudioCallingCurrentlyAvailable;
+(BOOL)isDirectFaceTimeVideoCallingCurrentlyAvailable;
+(BOOL)isDirectTelephonyCallingCurrentlyAvailable;
+(BOOL)isEmergencyCallbackModeEnabled;
+(BOOL)isEmergencyCallbackPossible;
+(BOOL)isFaceTimeAudioAvailable;
+(BOOL)isFaceTimeVideoAvailable;
+(BOOL)isRelayCallingEnabled;
+(BOOL)isRelayCallingEnabledForDeviceWithID:(id)arg0 ;
+(BOOL)isThumperCallingAllowedForCurrentDevice;
+(BOOL)isThumperCallingAllowedOnDefaultPairedSecondaryDevice;
+(BOOL)isThumperCallingAllowedOnSecondaryDeviceWithID:(id)arg0 ;
+(BOOL)isThumperCallingCurrentlyAvailable;
+(BOOL)isThumperCallingEnabled;
+(BOOL)isVoLTECallingCurrentlyAvailable;
+(BOOL)isVoLTECallingEnabled;
+(BOOL)isWiFiCallingCurrentlyAvailable;
+(BOOL)isWiFiCallingEnabled;
+(BOOL)isWiFiCallingRoamingEnabled;
+(BOOL)supportsBasebandCalling;
+(BOOL)supportsDisplayingFaceTimeAudioCalls;
+(BOOL)supportsDisplayingFaceTimeVideoCalls;
+(BOOL)supportsDisplayingTelephonyCalls;
+(BOOL)supportsFaceTimeAudioCalls;
+(BOOL)supportsFaceTimeAudioRelayCalling;
+(BOOL)supportsFaceTimeVideoCalls;
+(BOOL)supportsFaceTimeVideoRelayCalling;
+(BOOL)supportsHostingFaceTimeAudioCalls;
+(BOOL)supportsHostingFaceTimeVideoCalls;
+(BOOL)supportsHostingTelephonyCalls;
+(BOOL)supportsPrimaryCalling;
+(BOOL)supportsRelayCalling;
+(BOOL)supportsRelayingToOtherDevices;
+(BOOL)supportsSimultaneousVoiceAndData;
+(BOOL)supportsTelephonyCalls;
+(BOOL)supportsTelephonyRelayCalling;
+(BOOL)supportsThumperCalling;
+(BOOL)supportsThumperCallingOverCellularData;
+(BOOL)supportsVoLTECalling;
+(BOOL)supportsWiFiCalling;
+(BOOL)supportsWiFiEmergencyCalling;
+(id)_senderIdentityCapabilitiesByUUID;
+(id)client;
+(id)cloudCallingDevices;
+(id)debugDescription;
+(id)outgoingRelayCallerID;
+(id)senderIdentityCapabilities;
+(id)senderIdentityCapabilitiesWithUUID:(id)arg0 ;
+(id)thumperCallingCapabilityInfo;
+(id)voLTECallingCapabilityInfo;
+(id)wiFiCallingCapabilityInfo;
+(int)faceTimeAudioCallSupport;
+(int)faceTimeVideoCallSupport;
+(int)relayCallingAvailability;
+(int)telephonyCallSupport;
+(void)_sendNotificationsAndCallbacksAfterRunningBlock:(id)arg0 ;
+(void)addDelegate:(id)arg0 queue:(id)arg1 ;
+(void)cancelPinRequestFromPrimaryDevice;
+(void)endEmergencyCallbackMode;
+(void)initializeCachedValues;
+(void)invalidateAndRefreshThumperCallingProvisioningURL;
+(void)invalidateAndRefreshWiFiCallingProvisioningURL;
+(void)removeDelegate:(id)arg0 ;
+(void)requestPinFromPrimaryDevice;
+(void)setRelayCallingEnabled:(BOOL)arg0 ;
+(void)setRelayCallingEnabled:(BOOL)arg0 forDeviceWithID:(id)arg1 ;
+(void)setThumperCallingAllowed:(BOOL)arg0 onSecondaryDeviceWithID:(id)arg1 ;
+(void)setThumperCallingAllowed:(BOOL)arg0 onSecondaryDeviceWithID:(id)arg1 forSenderIdentityWithUUID:(id)arg2 ;
+(void)setThumperCallingAllowedOnDefaultPairedSecondaryDevice:(BOOL)arg0 ;
+(void)setThumperCallingEnabled:(BOOL)arg0 ;
+(void)setVoLTECallingEnabled:(BOOL)arg0 ;
+(void)setWiFiCallingEnabled:(BOOL)arg0 ;
+(void)setWiFiCallingRoamingEnabled:(BOOL)arg0 ;


@end


#endif