// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSTORYPPTMEASUREINFO_H
#define _PXSTORYPPTMEASUREINFO_H


#import <Foundation/Foundation.h>

#import "PXStatsCalculator.h"

@interface _PXStoryPPTMeasureInfo : NSObject

@property (readonly, nonatomic) NSInteger metric; // ivar: _metric
@property (readonly, nonatomic) PXStatsCalculator *statistics; // ivar: _statistics


-(id)init;
-(id)initWithMetric:(NSInteger)arg0 ;


@end


#endif