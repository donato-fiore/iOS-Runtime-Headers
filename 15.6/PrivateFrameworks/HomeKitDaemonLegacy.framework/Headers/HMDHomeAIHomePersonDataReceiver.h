// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMEAIHOMEPERSONDATARECEIVER_H
#define HMDHOMEAIHOMEPERSONDATARECEIVER_H

@class NSString, HMIHomePersonManager;
@protocol HMFLogging, HMIHomePersonManagerDataSource;


#import "HMDHomeAIPersonDataReceiver.h"

@interface HMDHomeAIHomePersonDataReceiver : HMDHomeAIPersonDataReceiver <HMFLogging, HMIHomePersonManagerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMIHomePersonManager *homePersonManager; // ivar: _homePersonManager
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithHomePersonManager:(id)arg0 workQueue:(id)arg1 ;
-(id)initWithPersonManagerUUID:(id)arg0 homeUUID:(id)arg1 workQueue:(id)arg2 ;
-(id)logIdentifier;
-(void)addFaceCrops:(id)arg0 completion:(id)arg1 ;
-(void)addFaceprints:(id)arg0 completion:(id)arg1 ;
-(void)addPersonFaceCrops:(id)arg0 completion:(id)arg1 ;
-(void)addPersons:(id)arg0 completion:(id)arg1 ;
-(void)fetchAllUnassociatedFaceCropsWithCompletion:(id)arg0 ;
-(void)fetchSettingsWithCompletion:(id)arg0 ;
-(void)handleFaceMisclassificationForFaceCropData:(id)arg0 personUUID:(id)arg1 ;
-(void)handleUpdatedSettings:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)handleUpdatedUnassociatedFaceCrop:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)removeFaceCropsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)removeFaceprintsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)removePersonsWithUUIDs:(id)arg0 completion:(id)arg1 ;


@end


#endif