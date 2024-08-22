// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUKEYFRAMESEQUENCEDOUBLE4_H
#define NUKEYFRAMESEQUENCEDOUBLE4_H



#import "NUKeyframeSequence.h"

@interface NUKeyframeSequenceDouble4 : NUKeyframeSequence {
    ? _scale;
    ? _bias;
    ? _values;
}




-(id)debugQuickLookObject;
-(id)initWithInterpolation:(NSInteger)arg0 count:(NSUInteger)arg1 times:(struct ? *)arg2 values;
-(id)initWithKeyframeSequence:(id)arg0 values;
-(id)sampleAtTime;
-(id)sparseSequence;
-(id)tangentOfKeyframeAtIndex;
-(id)valueOfKeyframeAtIndex;
-(void)_compressAndStoreValues:(*NSUInteger)arg0 count;
-(void)dealloc;


@end


#endif