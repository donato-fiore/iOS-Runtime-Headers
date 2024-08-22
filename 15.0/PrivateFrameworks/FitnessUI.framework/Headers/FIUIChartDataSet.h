// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUICHARTDATASET_H
#define FIUICHARTDATASET_H

@class NSArray;
@protocol FIUIChartDataSetDataSource;

#import <Foundation/Foundation.h>


@interface FIUIChartDataSet : NSObject {
    NSArray *_points;
    NSArray *_labels;
}


@property (weak, nonatomic) NSObject<FIUIChartDataSetDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) NSInteger tag; // ivar: _tag


-(id)description;
-(id)labelsForSet;
-(id)maxXValue;
-(id)maxYValue;
-(id)minXValue;
-(id)minYValue;
-(id)points;
-(void)reloadData;


@end


#endif