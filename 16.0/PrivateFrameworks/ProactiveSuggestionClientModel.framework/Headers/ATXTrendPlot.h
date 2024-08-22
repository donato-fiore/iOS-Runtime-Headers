// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXTRENDPLOT_H
#define ATXTRENDPLOT_H

@class NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface ATXTrendPlot : NSObject

@property (readonly, nonatomic) NSArray *bins; // ivar: _bins
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSInteger granularity; // ivar: _granularity
@property (readonly, nonatomic) NSDate *startDate;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXTrendPlot:(id)arg0 ;
-(NSUInteger)_binIndexForDate:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dateComponentsForGranularity:(NSInteger)arg0 ;
-(id)binAtDate:(id)arg0 ;
-(id)init;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 granularity:(NSInteger)arg2 binInitialDataProvider:(id)arg3 ;


@end


#endif