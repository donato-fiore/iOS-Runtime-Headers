// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUNASSOCIATEDACCESSORY_H
#define HMDUNASSOCIATEDACCESSORY_H

@class HMFObject, HMAccessoryCategory, NSUUID, NSString, HMFMessageDispatcher, NSNumber, NSData;
@protocol HMFLogging, HMFMessageReceiver, NSSecureCoding, OS_dispatch_queue;


#import "HMDAccessoryAdvertisement.h"

@interface HMDUnassociatedAccessory : HMFObject <HMFLogging, HMFMessageReceiver, NSSecureCoding>

 {
    os_unfair_recursive_lock_s _lock;
}


@property (retain, nonatomic) HMDAccessoryAdvertisement *accessoryAdvertisement; // ivar: _accessoryAdvertisement
@property (readonly) NSInteger associationOptions; // ivar: _associationOptions
@property (retain) HMAccessoryCategory *category; // ivar: _category
@property (copy) NSUUID *commissioningID; // ivar: _commissioningID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly, getter=isKnownToSystemCommissioner) BOOL knownToSystemCommissioner;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy) NSNumber *nodeID; // ivar: _nodeID
@property (copy) NSNumber *productID; // ivar: _productID
@property (readonly, getter=isReachable) BOOL reachable;
@property (readonly, copy) NSData *rootPublicKey; // ivar: _rootPublicKey
@property (copy) NSString *serialNumber; // ivar: _serialNumber
@property (readonly) Class superclass;
@property (readonly) BOOL supportsCHIP;
@property (readonly) NSUInteger transportTypes;
@property (copy, setter=setUUID:) NSUUID *uuid; // ivar: _uuid
@property (copy) NSNumber *vendorID; // ivar: _vendorID


+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)otherAccessoryCategory;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(id)descriptionWithPointer:(BOOL)arg0 additionalDescription:(id)arg1 ;
-(id)dumpDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 category:(id)arg2 messageDispatcher:(id)arg3 ;
-(id)logIdentifier;
-(id)messageDestination;
-(id)shortDescription;
-(void)_handleIdentify:(id)arg0 ;
-(void)_registerForMessages;
-(void)associateWithAccessoryAdvertisement:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)identifyWithCompletionHandler:(id)arg0 ;
-(void)updateCategoryWithCategoryIdentifier:(id)arg0 ;


@end


#endif