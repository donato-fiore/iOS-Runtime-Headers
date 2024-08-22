// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIHOMEPERSONDATASOURCEDISK_H
#define HMIHOMEPERSONDATASOURCEDISK_H

@class NSString;
@protocol HMIHomePersonManagerDataSource;


#import "HMIPersonDataSourceDisk.h"

@interface HMIHomePersonDataSourceDisk : HMIPersonDataSourceDisk <HMIHomePersonManagerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(void)addFaceCrops:(id)arg0 completion:(id)arg1 ;
-(void)addPersonFaceCrops:(id)arg0 completion:(id)arg1 ;
-(void)addPersons:(id)arg0 completion:(id)arg1 ;
-(void)fetchAllUnassociatedFaceCropsWithCompletion:(id)arg0 ;
-(void)fetchSettingsWithCompletion:(id)arg0 ;
-(void)removeFaceCropsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)removeFaceprintsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)removePersonsWithUUIDs:(id)arg0 completion:(id)arg1 ;


@end


#endif