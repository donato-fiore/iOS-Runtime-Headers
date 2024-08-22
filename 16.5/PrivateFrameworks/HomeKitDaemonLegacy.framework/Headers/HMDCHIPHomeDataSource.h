// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCHIPHOMEDATASOURCE_H
#define HMDCHIPHOMEDATASOURCE_H

@class HMFObject, NSSet, NSString, NSNumber, NSData, NSDictionary;
@protocol HMMTRFabricStorageDataSource;


#import "HMDHome.h"

@interface HMDCHIPHomeDataSource : HMFObject <HMMTRFabricStorageDataSource>



@property (readonly, copy, nonatomic) NSSet *allNodeIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *fabricID; // ivar: _fabricID
@property (readonly, copy, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (readonly) NSUInteger hash;
@property (weak) HMDHome *home; // ivar: _home
@property (readonly, copy, nonatomic) NSData *intermediateCertificate;
@property (readonly, copy, nonatomic) NSDictionary *keyValueStore;
@property (readonly, copy, nonatomic) NSNumber *lastNodeID;
@property (readonly, copy, nonatomic) NSData *operationalCertificate;
@property (readonly, copy, nonatomic) NSData *rootCertificate;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithFabricID:(id)arg0 fabricIndex:(id)arg1 home:(id)arg2 ;
-(id)logIdentifier;
-(id)storageDataSourceForDeviceWithNodeID:(id)arg0 ;
// -(void)_updateHomeModelWithLabel:(id)arg0 completion:(id)arg1 block:(unk)arg2  ;
-(void)updateFabricID:(id)arg0 completion:(id)arg1 ;
-(void)updateFabricIndex:(id)arg0 completion:(id)arg1 ;
-(void)updateIntermediateCertificate:(id)arg0 completion:(id)arg1 ;
-(void)updateKeyValueStore:(id)arg0 completion:(id)arg1 ;
-(void)updateLastNodeID:(id)arg0 completion:(id)arg1 ;
-(void)updateOperationalCertificate:(id)arg0 completion:(id)arg1 ;
-(void)updateRootCertificate:(id)arg0 completion:(id)arg1 ;


@end


#endif