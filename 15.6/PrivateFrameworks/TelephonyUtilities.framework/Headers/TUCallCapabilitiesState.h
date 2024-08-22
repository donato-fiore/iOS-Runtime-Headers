// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUCALLCAPABILITIESSTATE_H
#define TUCALLCAPABILITIESSTATE_H

@class NSArray, NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying;

#import <Foundation/Foundation.h>

#import "TUCloudCallingDevice.h"

@interface TUCallCapabilitiesState : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>



@property (nonatomic) BOOL accountsMatchForSecondaryCalling; // ivar: _accountsMatchForSecondaryCalling
@property (nonatomic) BOOL accountsSupportSecondaryCalling; // ivar: _accountsSupportSecondaryCalling
@property (copy, nonatomic) NSArray *cloudCallingDevices; // ivar: _cloudCallingDevices
@property (nonatomic, getter=areCTCapabilitiesValid) BOOL ctCapabilitiesValid; // ivar: _ctCapabilitiesValid
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TUCloudCallingDevice *defaultPairedDevice;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEmergencyCallbackModeEnabled) BOOL emergencyCallbackModeEnabled; // ivar: _emergencyCallbackModeEnabled
@property (nonatomic, getter=isEmergencyCallbackPossible) BOOL emergencyCallbackPossible; // ivar: _emergencyCallbackPossible
@property (nonatomic, getter=isFaceTimeAudioAvailable) BOOL faceTimeAudioAvailable; // ivar: _faceTimeAudioAvailable
@property (nonatomic, getter=isFaceTimeVideoAvailable) BOOL faceTimeVideoAvailable; // ivar: _faceTimeVideoAvailable
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *outgoingRelayCallerID; // ivar: _outgoingRelayCallerID
@property (nonatomic) int relayCallingAvailability; // ivar: _relayCallingAvailability
@property (copy, nonatomic) NSDictionary *relayCallingDisabledForDeviceID; // ivar: _relayCallingDisabledForDeviceID
@property (nonatomic, getter=isRelayCallingEnabled) BOOL relayCallingEnabled; // ivar: _relayCallingEnabled
@property (nonatomic, getter=areRelayCallingFeaturesEnabled) BOOL relayCallingFeaturesEnabled; // ivar: _relayCallingFeaturesEnabled
@property (copy, nonatomic) NSDictionary *senderIdentityCapabilitiesStateByUUID; // ivar: _senderIdentityCapabilitiesStateByUUID
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsBasebandCalling; // ivar: _supportsBasebandCalling
@property (nonatomic) BOOL supportsCellularData; // ivar: _supportsCellularData
@property (nonatomic) BOOL supportsDisplayingFaceTimeAudioCalls; // ivar: _supportsDisplayingFaceTimeAudioCalls
@property (nonatomic) BOOL supportsDisplayingFaceTimeVideoCalls; // ivar: _supportsDisplayingFaceTimeVideoCalls
@property (nonatomic) BOOL supportsDisplayingTelephonyCalls; // ivar: _supportsDisplayingTelephonyCalls
@property (nonatomic) BOOL supportsFaceTimeAudioRelayCalling; // ivar: _supportsFaceTimeAudioRelayCalling
@property (nonatomic) BOOL supportsFaceTimeVideoRelayCalling; // ivar: _supportsFaceTimeVideoRelayCalling
@property (nonatomic) BOOL supportsPrimaryCalling; // ivar: _supportsPrimaryCalling
@property (nonatomic) BOOL supportsRelayCalling; // ivar: _supportsRelayCalling
@property (nonatomic) BOOL supportsTelephonyRelayCalling; // ivar: _supportsTelephonyRelayCalling


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)publiclyAccessibleCopy;
-(id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif