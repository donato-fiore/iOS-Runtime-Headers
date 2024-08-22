// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINPUTPOINTWEIGHTEDAVERAGEFILTER_H
#define PKINPUTPOINTWEIGHTEDAVERAGEFILTER_H



#import "PKInputPointBaseFilter.h"

@interface PKInputPointWeightedAverageFilter : PKInputPointBaseFilter {
    CGFloat _xyPositionSmoothingFactor;
    CGFloat _zPositionSmoothingFactor;
    CGFloat _altitudeSmoothingFactor;
    CGFloat _azimuthSmoothingFactor;
}




-(void)addInputPoint:(struct ? )arg0 ;


@end


#endif