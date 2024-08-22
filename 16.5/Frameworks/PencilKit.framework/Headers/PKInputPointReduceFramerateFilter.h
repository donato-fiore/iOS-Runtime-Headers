// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINPUTPOINTREDUCEFRAMERATEFILTER_H
#define PKINPUTPOINTREDUCEFRAMERATEFILTER_H



#import "PKInputPointBaseFilter.h"

@interface PKInputPointReduceFramerateFilter : PKInputPointBaseFilter {
    NSUInteger _coalescingCounter;
    NSInteger _numPointsToCoalesce;
}




-(void)addInputPoint:(struct ? )arg0 ;


@end


#endif