// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMSETUPACCESSORYDESCRIPTION_H
#define HMSETUPACCESSORYDESCRIPTION_H

@class NSString, NSUUID, NSURL, NSArray, NSError, NSDictionary, NSData;
@protocol HMFObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMAccessory.h"
#import "HMAccessoryCategory.h"
#import "HMAccessoryOwnershipToken.h"
#import "HMSetupAccessoryPayload.h"

@interface HMSetupAccessoryDescription : NSObject <HMFObject, NSCopying, NSSecureCoding>



@property (weak, nonatomic) HMAccessory *accessoryBeingReplaced; // ivar: _accessoryBeingReplaced
@property (copy, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (copy, nonatomic) NSString *accessoryServerIdentifier; // ivar: _accessoryServerIdentifier
@property (copy, nonatomic) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (nonatomic) BOOL addAndSetupAccessories; // ivar: _addAndSetupAccessories
@property (copy, nonatomic) NSUUID *addRequestIdentifier; // ivar: _addRequestIdentifier
@property (copy, nonatomic) NSURL *appBundleURL; // ivar: _appBundleURL
@property (copy, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSError *cancellationReason; // ivar: _cancellationReason
@property (retain, nonatomic) HMAccessoryCategory *category; // ivar: _category
@property (nonatomic) NSUInteger certificationStatus; // ivar: _certificationStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL doNetworkScan; // ivar: _doNetworkScan
@property (nonatomic, getter=isEntitledForHomeKitSPI) BOOL entitledForHomeKitSPI; // ivar: _entitledForHomeKitSPI
@property (nonatomic, getter=isEntitledForThirdPartyMatterSetupPayload) BOOL entitledForThirdPartyMatterSetupPayload; // ivar: _entitledForThirdPartyMatterSetupPayload
@property (nonatomic, getter=isEntitledForThirdPartySetupAccessoryPayload) BOOL entitledForThirdPartySetupAccessoryPayload; // ivar: _entitledForThirdPartySetupAccessoryPayload
@property (readonly, nonatomic) BOOL hasAddRequest;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *homeUUID; // ivar: _homeUUID
@property (copy, nonatomic) NSURL *installationGuideURL; // ivar: _installationGuideURL
@property (copy, nonatomic) NSString *manufacturerName; // ivar: _manufacturerName
@property (copy, nonatomic) NSString *marketingName; // ivar: _marketingName
@property (copy, nonatomic) HMAccessoryOwnershipToken *ownershipToken; // ivar: _ownershipToken
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (retain, nonatomic) HMSetupAccessoryPayload *setupAccessoryPayload; // ivar: _setupAccessoryPayload
@property (copy, nonatomic) NSData *setupAuthToken; // ivar: _setupAuthToken
@property (copy, nonatomic) NSUUID *setupAuthTokenUUID; // ivar: _setupAuthTokenUUID
@property (copy, nonatomic) NSString *setupCode; // ivar: _setupCode
@property (readonly, copy, nonatomic) NSString *setupID;
@property (nonatomic, getter=isSetupInitiatedByOtherMatterEcosystem) BOOL setupInitiatedByOtherMatterEcosystem; // ivar: _setupInitiatedByOtherMatterEcosystem
@property (readonly, copy) NSString *shortDescription;
@property (copy, nonatomic) NSString *storeID; // ivar: _storeID
@property (copy, nonatomic) NSString *suggestedAccessoryName; // ivar: _suggestedAccessoryName
@property (copy, nonatomic) NSUUID *suggestedRoomUUID; // ivar: _suggestedRoomUUID
@property (readonly, copy, nonatomic) NSUUID *suggestedRoomUniqueIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsBTLE;
@property (readonly, nonatomic) BOOL supportsIP;
@property (readonly, nonatomic) BOOL supportsWAC;
@property (nonatomic) BOOL userConsentedForReplace; // ivar: _userConsentedForReplace


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initToSetupAccessoriesWithSetupAccessoryPayload:(id)arg0 appID:(id)arg1 homeName:(id)arg2 homeUUID:(id)arg3 trustedOrigin:(BOOL)arg4 ownershipToken:(id)arg5 ;
-(id)initWithAccessoryUUID:(id)arg0 accessoryName:(id)arg1 appID:(id)arg2 homeName:(id)arg3 homeUUID:(id)arg4 trustedOrigin:(BOOL)arg5 ;
-(id)initWithAccessoryUUID:(id)arg0 accessoryName:(id)arg1 appID:(id)arg2 homeUUID:(id)arg3 ;
-(id)initWithAddRequestIdentifier:(id)arg0 accessoryName:(id)arg1 accessoryCategory:(id)arg2 setupAccessoryPayload:(id)arg3 appID:(id)arg4 ownershipToken:(id)arg5 ;
-(id)initWithAppIdentifier:(id)arg0 homeUUID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithSetupAccessoryPayload:(id)arg0 appID:(id)arg1 homeUUID:(id)arg2 ownershipToken:(id)arg3 ;
-(id)initWithStagedCHIPAccessoryPairingIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateAccessoryCategory:(id)arg0 ;
-(void)updateAccessoryName:(id)arg0 ;
-(void)updateAppIdentifier:(id)arg0 ;
-(void)updateOwnershipToken:(id)arg0 ;
-(void)updateWithAccessory:(id)arg0 ;
-(void)updateWithAuthToken:(id)arg0 uuid:(id)arg1 ;
-(void)updateWithSetupAccessoryPayload:(id)arg0 ;


@end


#endif