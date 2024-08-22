// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUICHARTDATAGROUP_H
#define FIUICHARTDATAGROUP_H

@class NSArray, NSString;
@protocol FIUIChartDataSetDataSource, FIUIChartDataGroupDataSource;

#import <Foundation/Foundation.h>


@interface FIUIChartDataGroup : NSObject <FIUIChartDataSetDataSource>



@property (retain, nonatomic) NSArray *dataSets; // ivar: _dataSets
@property (weak, nonatomic) NSObject<FIUIChartDataGroupDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_numberOfDataPointsInSetAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)_numberOfDataSets;
-(NSUInteger)numberOfDataPointsForDataSet:(id)arg0 ;
-(NSUInteger)numberOfDataSets;
-(id)_dataSetAtIndexCreateIfNecessary:(NSUInteger)arg0 ;
-(id)_labelsForSetAtIndex:(NSUInteger)arg0 ;
-(id)_pointForSetAtIndex:(NSUInteger)arg0 pointIndex:(NSUInteger)arg1 ;
-(id)dataSet:(id)arg0 chartPointForIndex:(NSUInteger)arg1 ;
-(id)dataSetAtIndex:(NSUInteger)arg0 ;
-(id)labelsForSet:(id)arg0 ;
-(id)maxXValue;
-(id)maxYValue;
-(id)minXValue;
-(id)minYValue;
-(void)reloadData;


@end


#endif