// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKGRAPHSERIESOVERLAYDATA_H
#define HKGRAPHSERIESOVERLAYDATA_H


#import <Foundation/Foundation.h>

#import "HKGraphSeries.h"
#import "HKGraphSeriesBlockCoordinateList.h"

@interface HKGraphSeriesOverlayData : NSObject

@property (readonly, nonatomic) HKGraphSeries *graphSeries; // ivar: _graphSeries
@property (readonly, nonatomic) HKGraphSeriesBlockCoordinateList *graphSeriesCoordinates; // ivar: _graphSeriesCoordinates
@property (readonly, nonatomic) CGAffineTransform graphSeriesPointTransform; // ivar: _graphSeriesPointTransform
@property (readonly, nonatomic) CGRect graphSeriesScreenRect; // ivar: _graphSeriesScreenRect


-(id)initWithGraphSeries:(id)arg0 graphSeriesScreenRect:(struct CGRect )arg1 graphSeriesCoordinates:(id)arg2 graphSeriesPointTransform:(struct CGAffineTransform )arg3 ;


@end


#endif