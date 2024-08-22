// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIPERSONDATASOURCEDISK_H
#define HMIPERSONDATASOURCEDISK_H

@class HMFObject, NSString, NSUUID, NSURL;
@protocol HMIPersonManagerDataSource, HMFLogging, OS_dispatch_queue;



@interface HMIPersonDataSourceDisk : HMFObject <HMIPersonManagerDataSource, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly) NSURL *sourceURL; // ivar: _sourceURL
@property (readonly) NSUUID *sourceUUID; // ivar: _sourceUUID
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)getStoragePath;
+(id)logCategory;
-(id)initWithHomeUUID:(id)arg0 sourceUUID:(id)arg1 error:(*id)arg2 ;
-(void)addFaceprints:(id)arg0 completion:(id)arg1 ;
-(void)fetchAllFaceprintsWithCompletion:(id)arg0 ;
-(void)fetchAllPersonFaceCropsWithCompletion:(id)arg0 ;
-(void)fetchAllPersonsWithCompletion:(id)arg0 ;
-(void)fetchFaceCropsForPersonsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchPersonsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)performCloudPullWithCompletion:(id)arg0 ;


@end


#endif