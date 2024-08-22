// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDUNASSOCIATEDAPPLEMEDIAACCESSORY_H
#define HMDUNASSOCIATEDAPPLEMEDIAACCESSORY_H

@class NSString, HMFSoftwareVersion;
@protocol HMFLogging;


#import "HMDUnassociatedMediaAccessory.h"
#import "HMDDevice.h"
#import "HMDHomeKitVersion.h"
#import "HMDCapabilityFlags.h"

@interface HMDUnassociatedAppleMediaAccessory : HMDUnassociatedMediaAccessory <HMFLogging>



@property (nonatomic, getter=isCurrentAccessory) BOOL currentAccessory; // ivar: _currentAccessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) HMDDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly) HMDHomeKitVersion *minimumRequiredPairingSoftwareVersion; // ivar: _minimumRequiredPairingSoftwareVersion
@property (copy) NSString *model; // ivar: _model
@property (readonly) NSInteger productColor; // ivar: _productColor
@property (readonly) HMDCapabilityFlags *requiredPairingCapabilities; // ivar: _requiredPairingCapabilities
@property (copy) NSString *serialNumber; // ivar: _serialNumber
@property (copy) HMFSoftwareVersion *softwareVersion; // ivar: _softwareVersion
@property (readonly) Class superclass;
@property NSUInteger supportedStereoPairVersions; // ivar: _supportedStereoPairVersions
@property NSUInteger variant; // ivar: _variant


+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)modelForChangeType:(NSUInteger)arg0 uuid:(id)arg1 parentUUID:(id)arg2 ;
+(id)namespace;
-(BOOL)canPairGivenCapabilities:(NSUInteger)arg0 ;
-(id)addTransactionForHome:(id)arg0 configurationAppIdentifier:(id)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg0 additionalDescription:(id)arg1 ;
-(id)dumpDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 category:(id)arg2 productColor:(NSInteger)arg3 messageDispatcher:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 category:(id)arg2 requiredPairingCapabilities:(NSUInteger)arg3 minimumPairingSoftware:(id)arg4 productColor:(NSInteger)arg5 messageDispatcher:(id)arg6 ;
-(id)logIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif