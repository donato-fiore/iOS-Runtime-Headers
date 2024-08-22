// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKENUMERATEDVALUEDATASOURCE_H
#define HKENUMERATEDVALUEDATASOURCE_H

@class NSArray;


#import "HKHealthQueryChartCacheDataSource.h"

@interface HKEnumeratedValueDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) NSArray *enumeratedValueOrder; // ivar: _enumeratedValueOrder
@property (copy, nonatomic) id *userInfoCreationBlock; // ivar: _userInfoCreationBlock


-(id)_enumeratedValuesToIndices:(id)arg0 mapping:(id)arg1 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDescription;
-(void)_handleSamples:(id)arg0 blockStart:(id)arg1 blockEnd:(id)arg2 intervalComponents:(id)arg3 completion:(id)arg4 ;


@end


#endif