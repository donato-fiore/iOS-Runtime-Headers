// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCOUNTHANDLE_H
#define HMDACCOUNTHANDLE_H

@class HMFObject, IDSURI, Protocol, CKUserIdentityLookupInfo, CNContact, NSString, NSUUID;
@protocol HMFLogging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, HMCBacked, HMDRemoteAddressable, NSCopying, NSSecureCoding;



@interface HMDAccountHandle : HMFObject <HMFLogging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, HMCBacked, HMDRemoteAddressable, NSCopying, NSSecureCoding>



@property (readonly, copy) IDSURI *URI; // ivar: _URI
@property (readonly) NSObject<NSCopying> *backingModelKey;
@property (readonly) Protocol *backingModelType;
@property (readonly, copy) CKUserIdentityLookupInfo *cloudKitLookupInfo;
@property (readonly, copy) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, getter=isLocal) BOOL local; // ivar: _local
@property (getter=isLocallyTracked) BOOL locallyTracked; // ivar: _locallyTracked
@property (readonly) Class modelClass;
@property (readonly, copy, nonatomic) NSUUID *modelIdentifier; // ivar: _modelIdentifier
@property (copy, nonatomic) NSUUID *modelParentIdentifier; // ivar: _modelParentIdentifier
@property (readonly) Class superclass;
@property (readonly) NSInteger type;
@property (readonly, copy) NSString *value;


+(BOOL)supportsSecureCoding;
+(id)accountHandleForDestination:(id)arg0 ;
+(id)logCategory;
-(BOOL)isBackingStorageEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)updateBackingModel:(id)arg0 error:(*id)arg1 ;
-(id)attributeDescriptions;
-(id)backingStoreObjectsWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBackingModel:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectModel:(id)arg0 ;
-(id)initWithURI:(id)arg0 ;
-(id)initWithURI:(id)arg0 local:(BOOL)arg1 ;
-(id)logIdentifier;
-(id)modelBackedObjects;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)remoteDestinationString;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif