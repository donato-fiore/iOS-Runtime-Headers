// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUKEYFRAMESEQUENCEMATRIXFLOAT33_H
#define NUKEYFRAMESEQUENCEMATRIXFLOAT33_H



#import "NUKeyframeSequence.h"

@interface NUKeyframeSequenceMatrixFloat33 : NUKeyframeSequence {
    *? _values;
}




-(id)initWithCount:(NSUInteger)arg0 times:(struct ? *)arg1 values:(struct ? *)arg2 ;
-(struct ? )sampleAtTime:(struct ? )arg0 ;
-(struct ? )valueOfKeyframeAtIndex:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif