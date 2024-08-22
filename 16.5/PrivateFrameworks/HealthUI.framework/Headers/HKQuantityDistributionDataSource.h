// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKQUANTITYDISTRIBUTIONDATASOURCE_H
#define HKQUANTITYDISTRIBUTIONDATASOURCE_H

@class NSPredicate, HKQuantityType, NSDate;


#import "HKHealthQueryChartCacheDataSource.h"
#import "HKUnitPreferenceController.h"

@interface HKQuantityDistributionDataSource : HKHealthQueryChartCacheDataSource

@property (readonly, nonatomic) CGFloat bucketAnchor; // ivar: _bucketAnchor
@property (readonly, nonatomic) CGFloat bucketSize; // ivar: _bucketSize
@property (readonly, nonatomic) NSInteger contextStyle; // ivar: _contextStyle
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType
@property (readonly, nonatomic) NSDate *specificEndDate; // ivar: _specificEndDate
@property (readonly, nonatomic) NSDate *specificStartDate; // ivar: _specificStartDate
@property (readonly, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController
@property (readonly, nonatomic) id *userInfoCreationBlock; // ivar: _userInfoCreationBlock


+(id)bucketSizeForBloodGlucoseWithUnit:(id)arg0 ;
+(id)bucketSizeForDisplayType:(id)arg0 preferredUnit:(id)arg1 ;
+(id)bucketSizeForQuantityType:(id)arg0 preferredUnit:(id)arg1 ;
-(BOOL)supportsChartQueryDataGeneration;
-(id)_bucketDateForHistogramData:(id)arg0 ;
-(id)_dataBlockFromHistograms:(id)arg0 ;
-(id)_quickDate:(id)arg0 ;
-(id)chartPointsFromQueryData:(id)arg0 dataIsFromRemoteSource:(BOOL)arg1 ;
-(id)initWithQuantityType:(id)arg0 unitController:(id)arg1 healthStore:(id)arg2 contextStyle:(NSInteger)arg3 predicate:(id)arg4 options:(NSUInteger)arg5 baseDisplayType:(id)arg6 specificStartDate:(id)arg7 specificEndDate:(id)arg8 userInfoCreationBlock:(id)arg9 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDataForStartDate:(SEL)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 healthStore:(id)arg3 completionHandler:(id)arg4 ;
-(id)queryDescription;


@end


#endif