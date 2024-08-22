// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDEVICE_H
#define HMDDEVICE_H

@class HMFObject, HMFNetService, NSSet, NSArray, NSString, NSUUID, HMFProductInfo, NSData;
@protocol HMFObject, HMFLogging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, HMDRemoteAddressable, HMFMerging, NSSecureCoding, HMFCancellable;


#import "HMDAccount.h"
#import "HMDDeviceCapabilities.h"
#import "HMDDeviceAddress.h"
#import "HMDHomeKitVersion.h"
#import "HMDRPIdentity.h"

@interface HMDDevice : HMFObject <HMFObject, HMFLogging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, HMDRemoteAddressable, HMFMerging, NSSecureCoding>

 {
    HMFNetService *_observedNetService;
    id<HMFCancellable> *_netServiceKVOCancellation;
    BOOL _lastKnownIsPublishingStateValue;
    hmf_unfair_data_lock_s _lock;
    NSSet *_handles;
}


@property (weak) HMDAccount *account; // ivar: _account
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (copy) HMDDeviceCapabilities *capabilities; // ivar: _capabilities
@property (getter=isCloudTracked) BOOL cloudTracked; // ivar: _cloudTracked
@property (readonly, getter=isCurrentDevice) BOOL currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDeviceAddress *deviceAddress;
@property (getter=isDirty) BOOL dirty; // ivar: _dirty
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSArray *identities;
@property (readonly, copy) NSUUID *idsIdentifier;
@property (copy, setter=setIDSIdentifierHash:) NSUUID *idsIdentifierHash; // ivar: _idsIdentifierHash
@property (retain) HMDHomeKitVersion *localOnlyVersionFromIDS; // ivar: _localOnlyVersionFromIDS
@property (getter=isLocallyTracked) BOOL locallyTracked; // ivar: _locallyTracked
@property (readonly) Class modelClass;
@property (readonly, copy, nonatomic) NSUUID *modelIdentifier; // ivar: _modelIdentifier
@property (readonly, copy, nonatomic) NSUUID *modelParentIdentifier;
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSString *privateDescription;
@property (copy) HMFProductInfo *productInfo; // ivar: _productInfo
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSData *pushToken;
@property (copy) HMDRPIdentity *rpIdentity; // ivar: _rpIdentity
@property (copy) NSUUID *sharedUserIDSIdentifier; // ivar: _sharedUserIDSIdentifier
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsHH2;
@property (readonly, copy) HMDHomeKitVersion *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)destinationForDevice:(id)arg0 service:(id)arg1 ;
+(id)deviceWithDestination:(id)arg0 ;
+(id)deviceWithHandle:(id)arg0 ;
+(id)logCategory;
-(BOOL)isBackingStorageEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPublishingOnObservedNetService;
-(BOOL)isRelatedToDevice:(id)arg0 ;
-(BOOL)isSameAccountWithDevice:(id)arg0 ;
-(BOOL)mergeObject:(id)arg0 ;
-(id)backingStoreObjectsWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)deviceForIDSService:(id)arg0 ;
-(id)globalDestination;
-(id)globalHandles;
-(id)handles;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceAddress:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 handles:(id)arg1 name:(id)arg2 productInfo:(id)arg3 version:(id)arg4 capabilities:(id)arg5 ;
-(id)initWithObjectModel:(id)arg0 ;
-(id)initWithService:(id)arg0 device:(id)arg1 ;
-(id)localHandles;
-(id)logIdentifier;
-(id)modelBackedObjects;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)remoteDestinationString;
-(void)__handleAccountHandleUpdated:(id)arg0 ;
-(void)__updateDeviceWithActions:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setHandles:(id)arg0 ;
-(void)startObservingIsPublishingForService:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)updateVersion:(id)arg0 ;
-(void)updateWithDevice:(id)arg0 ;


@end


#endif