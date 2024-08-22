// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKREMOTECARDIOFITNESSDATASOURCE_H
#define HKREMOTECARDIOFITNESSDATASOURCE_H



#import "HKQuantityTypeDataSource.h"

@interface HKRemoteCardioFitnessDataSource : HKQuantityTypeDataSource



-(id)_cardioFitnessUserInfoCreationBlockWithAge:(SEL)arg0 biologicalSex:(NSInteger)arg1 ;
-(id)_userInfoBlockWithUnitController:(SEL)arg0 displayType:(id)arg1 ;
-(id)chartPointsFromQueryData:(id)arg0 dataIsFromRemoteSource:(BOOL)arg1 ;
-(id)initWithUnitController:(id)arg0 displayType:(id)arg1 healthStore:(id)arg2 ;
-(id)queryDataForStartDate:(SEL)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 healthStore:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif