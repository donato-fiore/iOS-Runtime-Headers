// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMFUNCTIONTONE_H
#define AXMFUNCTIONTONE_H



#import "AXMTone.h"

@interface AXMFunctionTone : AXMTone

@property (readonly, nonatomic) id *function; // ivar: _function
@property (readonly, nonatomic) ? xAxisDescriptor; // ivar: _xAxisDescriptor
@property (readonly, nonatomic) ? yAxisDescriptor; // ivar: _yAxisDescriptor


-(CGFloat)_xAxisValueForNormalizedPosition:(CGFloat)arg0 ;
// -(id)initWithUnivariateFunction:(id)arg0 sampleRate:(unk)arg1 envelope:(CGFloat)arg2 xAxisDescriptor:(id)arg3 yAxisDescriptor:(struct ? )arg4  ;
-(void)renderInBuffer:(*void)arg0 atFrame:(NSUInteger)arg1 ;


@end


#endif