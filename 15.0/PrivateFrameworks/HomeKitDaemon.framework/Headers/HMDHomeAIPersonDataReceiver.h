// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMEAIPERSONDATARECEIVER_H
#define HMDHOMEAIPERSONDATARECEIVER_H

@class HMFObject, NSString, HMIHomePersonManager, HMIPersonManager, HMIExternalPersonManager;
@protocol HMIPersonManagerDataSource, HMDPersonDataReceiver, HMDPersonDataSource, OS_dispatch_queue;



@interface HMDHomeAIPersonDataReceiver : HMFObject <HMIPersonManagerDataSource, HMDPersonDataReceiver>



@property (weak) NSObject<HMDPersonDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMIHomePersonManager *homePersonManager;
@property (readonly) HMIPersonManager *personManager; // ivar: _personManager
@property (readonly) HMIExternalPersonManager *photosPersonManager;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithPersonManager:(id)arg0 workQueue:(id)arg1 ;
-(void)configureWithDataSource:(id)arg0 home:(id)arg1 ;
-(void)fetchAllFaceprintsWithCompletion:(id)arg0 ;
-(void)fetchAllPersonFaceCropsWithCompletion:(id)arg0 ;
-(void)fetchAllPersonsWithCompletion:(id)arg0 ;
-(void)fetchFaceCropsForPersonsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchPersonsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)handleRemovedFaceCropWithUUID:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)handleRemovedFaceprintWithUUID:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)handleRemovedPersonWithUUID:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)handleUpdatedFaceprint:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)handleUpdatedIsCurrentDeviceAvailableResident:(BOOL)arg0 ;
-(void)handleUpdatedIsDataSyncInProgress:(BOOL)arg0 ;
-(void)handleUpdatedPerson:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)handleUpdatedPersonFaceCrop:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)performCloudPullWithCompletion:(id)arg0 ;


@end


#endif