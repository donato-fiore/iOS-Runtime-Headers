// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIEXTERNALPERSONDATASOURCEHOMEKIT_H
#define HMIEXTERNALPERSONDATASOURCEHOMEKIT_H

@class HMFObject, NSString, HMPhotosPersonManager;
@protocol HMIExternalPersonManagerDataSource, HMFLogging, OS_dispatch_queue;



@interface HMIExternalPersonDataSourceHomeKit : HMFObject <HMIExternalPersonManagerDataSource, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) HMPhotosPersonManager *photosPersonManager; // ivar: _photosPersonManager
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithHMPhotosPersonManager:(id)arg0 ;
-(id)logIdentifier;
-(void)addFaceprints:(id)arg0 completion:(id)arg1 ;
-(void)fetchAllFaceprintsWithCompletion:(id)arg0 ;
-(void)fetchAllPersonFaceCropsWithCompletion:(id)arg0 ;
-(void)fetchAllPersonsWithCompletion:(id)arg0 ;
-(void)fetchFaceCropsForPersonsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchPersonsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchSettingsWithCompletion:(id)arg0 ;
-(void)performCloudPullWithCompletion:(id)arg0 ;
-(void)removeFaceprintsWithUUIDs:(id)arg0 completion:(id)arg1 ;


@end


#endif