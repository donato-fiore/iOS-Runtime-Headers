// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIHOMEPERSONDATASOURCEINMEMORY_H
#define HMIHOMEPERSONDATASOURCEINMEMORY_H

@class HMFObject, NSString, NSMutableDictionary, NSSet, NSMutableSet;
@protocol HMIHomePersonManagerDataSource, OS_dispatch_queue;



@interface HMIHomePersonDataSourceInMemory : HMFObject <HMIHomePersonManagerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSMutableDictionary *personToFaceCrops; // ivar: _personToFaceCrops
@property (readonly) NSSet *removedPersonFaceCrops; // ivar: _removedPersonFaceCrops
@property (readonly) Class superclass;
@property (readonly) NSMutableSet *unassociatedFaceCrops; // ivar: _unassociatedFaceCrops
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
+(id)shortDescription;
-(id)existingFaceCropUUIDs;
-(id)existingPersonFaceCropUUIDs;
-(id)existingPersonUUIDs;
-(id)init;
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