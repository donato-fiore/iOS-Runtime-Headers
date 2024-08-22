// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINPUTPOINTEXTRALATENCYFILTER_H
#define PKINPUTPOINTEXTRALATENCYFILTER_H



#import "PKInputPointBaseFilter.h"

@interface PKInputPointExtraLatencyFilter : PKInputPointBaseFilter {
    vector<PKInputPoint, std::allocator<PKInputPoint>> _inputPoints;
    NSInteger _numFramesExtraLatency;
}




-(void)addInputPoint:(struct ? )arg0 ;


@end


#endif