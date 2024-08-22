// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLPXINITIALHYSTERESISNUMBERFILTER_H
#define QLPXINITIALHYSTERESISNUMBERFILTER_H



#import "QLPXNumberFilter.h"

@interface QLPXInitialHysteresisNumberFilter : QLPXNumberFilter {
    BOOL _didReachThreshold;
    CGFloat _offset;
}


@property (nonatomic) CGFloat hysteresis; // ivar: _hysteresis
@property (readonly, nonatomic) CGFloat outputDerivative;


-(CGFloat)updatedOutput;


@end


#endif