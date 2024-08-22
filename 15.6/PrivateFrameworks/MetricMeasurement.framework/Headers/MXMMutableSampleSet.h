// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXMMUTABLESAMPLESET_H
#define MXMMUTABLESAMPLESET_H



#import "MXMSampleSet.h"

@interface MXMMutableSampleSet : MXMSampleSet



-(void)appendAttribute:(id)arg0 ;
-(void)appendDoubleValue:(CGFloat)arg0 timestamp:(NSUInteger)arg1 ;
-(void)appendFloatValue:(float)arg0 timestamp:(NSUInteger)arg1 ;
-(void)appendIntValue:(int)arg0 timestamp:(NSUInteger)arg1 ;
-(void)appendIntegerValue:(NSInteger)arg0 timestamp:(NSUInteger)arg1 ;
-(void)appendSample:(id)arg0 ;
-(void)appendSet:(id)arg0 ;
-(void)appendUnsignedIntValue:(unsigned int)arg0 timestamp:(NSUInteger)arg1 ;
-(void)appendUnsignedIntegerValue:(NSUInteger)arg0 timestamp:(NSUInteger)arg1 ;


@end


#endif