// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKFIXEDVALUEDATESPANDATASOURCE_H
#define HKFIXEDVALUEDATESPANDATASOURCE_H

@protocol HKDateRangeDataSourceDelegate;


#import "HKDateRangeDataSource.h"
#import "HKChartSummaryTrendModel.h"

@interface HKFixedValueDateSpanDataSource : HKDateRangeDataSource <HKDateRangeDataSourceDelegate>



@property (readonly, copy, nonatomic) id *fixedValueScalingBlock; // ivar: _fixedValueScalingBlock
@property (readonly, copy, nonatomic) id *preferredUnitBlock; // ivar: _preferredUnitBlock
@property (readonly, nonatomic) HKChartSummaryTrendModel *trendModel; // ivar: _trendModel


-(BOOL)_insideRange:(id)arg0 trendSpan:(id)arg1 ;
-(id)cachedBlockForPath:(struct ? )arg0 context:(id)arg1 ;
-(id)dataForDateRange:(id)arg0 timeScope:(NSInteger)arg1 ;
// -(id)initWithTrendModel:(id)arg0 preferredUnitBlock:(id)arg1 fixedValueScalingBlock:(unk)arg2  ;
-(void)_setPreferredUnitForBlock:(id)arg0 unit:(id)arg1 ;
-(void)setUpdateDelegate:(id)arg0 ;


@end


#endif