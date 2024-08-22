// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCOUNT_H
#define HMDACCOUNT_H

@class HMFObject, HMFUnfairLock, NSSet, NSMutableSet, NSString, CNContact, NSArray, NSUUID;
@protocol HMFLogging, HMFMerging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, NSFastEnumeration, NSSecureCoding, OS_dispatch_queue, HMDAccountManager;


#import "HMDDevice.h"
#import "HMDAccountIdentifier.h"
#import "HMDAccountHandle.h"

@interface HMDAccount : HMFObject <HMFLogging, HMFMerging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, NSFastEnumeration, NSSecureCoding>

 {
    NSObject<OS_dispatch_queue> *_queue;
    HMFUnfairLock *_lock;
    NSSet *_handles;
    NSMutableSet *_devices;
    NSString *_appleAccountSenderCorrelationIdentifier;
}


@property (readonly, getter=isAuthenticated) BOOL authenticated;
@property (readonly, copy) CNContact *contact;
@property (readonly, getter=isCurrentAccount) BOOL currentAccount;
@property (readonly) HMDDevice *currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *devices;
@property (readonly, copy) NSArray *handles;
@property (readonly) NSUInteger hash;
@property (readonly, copy) HMDAccountIdentifier *identifier; // ivar: _identifier
@property (readonly, copy) NSArray *identities;
@property (weak) NSObject<HMDAccountManager> *manager; // ivar: _manager
@property (readonly) Class modelClass;
@property (readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property (readonly, copy, nonatomic) NSUUID *modelParentIdentifier;
@property (readonly, copy) NSString *name;
@property (readonly, nonatomic, getter=isPresentInContacts) BOOL presentInContacts;
@property (readonly, copy) HMDAccountHandle *primaryHandle;
@property (copy) NSString *senderCorrelationIdentifier;
@property (readonly) BOOL shouldCache;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)accountWithHandle:(id)arg0 ;
+(id)logCategory;
-(BOOL)hasFamilyMember:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccount:(id)arg0 ;
-(BOOL)isRelatedToAccount:(id)arg0 ;
-(BOOL)mergeObject:(id)arg0 ;
-(BOOL)shouldMergeObject:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)accountHandleWithModelIdentifier:(id)arg0 ;
-(id)appleAccountSenderCorrelationIdentifier;
-(id)attributeDescriptions;
-(id)backingStoreObjectsWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)currentDeviceModelsWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)deviceForHandle:(id)arg0 ;
-(id)deviceForIdentifier:(id)arg0 ;
-(id)deviceWithModelIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 handles:(id)arg1 devices:(id)arg2 ;
-(id)initWithObjectModel:(id)arg0 ;
-(id)logIdentifier;
-(id)modelBackedObjects;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)shortDescription;
-(void)addDevice:(id)arg0 ;
-(void)addHandle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)isPresentInFamilyCircleWithCompletion:(id)arg0 ;
-(void)removeDevice:(id)arg0 ;
-(void)removeHandle:(id)arg0 ;
-(void)setAppleAccountSenderCorrelationIdentifier:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif