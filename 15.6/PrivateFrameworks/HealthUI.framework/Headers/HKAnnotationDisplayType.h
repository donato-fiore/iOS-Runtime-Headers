// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKANNOTATIONDISPLAYTYPE_H
#define HKANNOTATIONDISPLAYTYPE_H

@class NSArray;


#import "HKInteractiveChartDisplayType.h"

@interface HKAnnotationDisplayType : HKInteractiveChartDisplayType

@property (readonly, nonatomic) NSArray *trendChartPoints; // ivar: _trendChartPoints


-(id)initWithDateInterval:(id)arg0 trendData:(id)arg1 ;


@end


#endif