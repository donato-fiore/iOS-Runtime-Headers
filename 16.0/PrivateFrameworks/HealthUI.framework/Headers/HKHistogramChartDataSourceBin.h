// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHISTOGRAMCHARTDATASOURCEBIN_H
#define HKHISTOGRAMCHARTDATASOURCEBIN_H

@class NSMutableArray, NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface HKHistogramChartDataSourceBin : NSObject {
    NSMutableArray *_backingValues;
}


@property (readonly, nonatomic) NSNumber *averageValue;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSNumber *maximumValue;
@property (readonly, nonatomic) NSNumber *minimumValue;
@property (readonly, copy, nonatomic) NSArray *sortedValues;
@property (readonly, nonatomic) NSNumber *sumValue;
@property (readonly, copy, nonatomic) NSArray *values;


-(id)init;
-(id)initWithValues:(id)arg0 ;
-(void)addValue:(id)arg0 ;


@end


#endif