// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIHOMEPERSONDATASOURCEHOMEKIT_H
#define HMIHOMEPERSONDATASOURCEHOMEKIT_H

@class HMFObject, NSString, HMHomePersonManager;
@protocol HMIHomePersonManagerDataSource, HMFLogging, OS_dispatch_queue;



@interface HMIHomePersonDataSourceHomeKit : HMFObject <HMIHomePersonManagerDataSource, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) HMHomePersonManager *homePersonManager; // ivar: _homePersonManager
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithHMHomePersonManager:(id)arg0 ;
-(id)logIdentifier;
-(void)addFaceCrops:(id)arg0 completion:(id)arg1 ;
-(void)addFaceprints:(id)arg0 completion:(id)arg1 ;
-(void)addPersonFaceCrops:(id)arg0 completion:(id)arg1 ;
-(void)addPersons:(id)arg0 completion:(id)arg1 ;
-(void)associateFaceCropsWithUUIDs:(id)arg0 toPersonWithUUID:(id)arg1 forSource:(NSInteger)arg2 completion:(id)arg3 ;
-(void)fetchAllFaceprintsWithCompletion:(id)arg0 ;
-(void)fetchAllPersonFaceCropsWithCompletion:(id)arg0 ;
-(void)fetchAllPersonsWithCompletion:(id)arg0 ;
-(void)fetchAllUnassociatedFaceCropsWithCompletion:(id)arg0 ;
-(void)fetchFaceCropsForPersonsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchPersonsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchSettingsWithCompletion:(id)arg0 ;
-(void)performCloudPullWithCompletion:(id)arg0 ;
-(void)removeFaceCropsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)removeFaceprintsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)removePersonsWithUUIDs:(id)arg0 completion:(id)arg1 ;


@end


#endif