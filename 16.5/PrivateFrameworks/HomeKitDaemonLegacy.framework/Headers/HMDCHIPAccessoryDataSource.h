// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCHIPACCESSORYDATASOURCE_H
#define HMDCHIPACCESSORYDATASOURCE_H

@class HMFObject, NSData, NSString, NSNumber, NSSet;
@protocol HMMTRDeviceStorageDataSource;


#import "HMDHAPAccessory.h"

@interface HMDCHIPAccessoryDataSource : HMFObject <HMMTRDeviceStorageDataSource>



@property (weak) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly, copy, nonatomic) NSData *attributeDatabase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *nodeID; // ivar: _nodeID
@property (readonly, copy, nonatomic) NSSet *pairings;
@property (readonly, copy, nonatomic) NSNumber *productID;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSNumber *vendorID;


+(id)logCategory;
-(id)initWithNodeID:(id)arg0 accessory:(id)arg1 ;
-(id)logIdentifier;
// -(void)_updateAccessoryModelWithLabel:(id)arg0 completion:(id)arg1 block:(unk)arg2  ;
-(void)updateAttributeDatabase:(id)arg0 completion:(id)arg1 ;
-(void)updateNodeID:(id)arg0 completion:(id)arg1 ;
-(void)updatePairings:(id)arg0 completion:(id)arg1 ;
-(void)updateProductID:(id)arg0 completion:(id)arg1 ;
-(void)updateVendorID:(id)arg0 completion:(id)arg1 ;
-(void)updateVendorID:(id)arg0 productID:(id)arg1 completion:(id)arg2 ;


@end


#endif