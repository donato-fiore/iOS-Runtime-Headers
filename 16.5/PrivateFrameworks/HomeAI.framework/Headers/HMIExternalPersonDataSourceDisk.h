// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIEXTERNALPERSONDATASOURCEDISK_H
#define HMIEXTERNALPERSONDATASOURCEDISK_H

@class NSString;
@protocol HMIExternalPersonManagerDataSource;


#import "HMIPersonDataSourceDisk.h"

@interface HMIExternalPersonDataSourceDisk : HMIPersonDataSourceDisk <HMIExternalPersonManagerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(void)addPerson:(id)arg0 completion:(id)arg1 ;
-(void)addPersonFaceCrops:(id)arg0 completion:(id)arg1 ;
-(void)fetchSettingsWithCompletion:(id)arg0 ;


@end


#endif