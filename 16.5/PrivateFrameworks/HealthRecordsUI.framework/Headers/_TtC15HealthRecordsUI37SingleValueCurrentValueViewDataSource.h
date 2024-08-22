// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15HEALTHRECORDSUI37SINGLEVALUECURRENTVALUEVIEWDATASOURCE_H
#define _TTC15HEALTHRECORDSUI37SINGLEVALUECURRENTVALUEVIEWDATASOURCE_H

@class HKCurrentValueViewDataSource;
@protocol HKCurrentValueViewDataSourceDelegate;



@interface _TtC15HealthRecordsUI37SingleValueCurrentValueViewDataSource : HKCurrentValueViewDataSource <HKCurrentValueViewDataSourceDelegate>

 {
    ? lastCachedNumberOfChartPoints;
}




-(id)init;
-(id)initWithDateCache:(id)arg0 displayCategoryController:(id)arg1 healthStore:(id)arg2 selectedRangeFormatter:(id)arg3 ;
-(id)titleFor:(id)arg0 ;
-(void)updateDataSourceWithGraphView:(id)arg0 displayType:(id)arg1 timeScope:(NSInteger)arg2 ;


@end


#endif