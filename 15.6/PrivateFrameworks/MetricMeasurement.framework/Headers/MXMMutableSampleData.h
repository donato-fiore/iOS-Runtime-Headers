// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXMMUTABLESAMPLEDATA_H
#define MXMMUTABLESAMPLEDATA_H



#import "MXMSampleData.h"

@interface MXMMutableSampleData : MXMSampleData



-(id)appendDoubleValue:(CGFloat)arg0 tag:(id)arg1 timestamp:(NSUInteger)arg2 ;
-(id)appendFloatValue:(float)arg0 tag:(id)arg1 timestamp:(NSUInteger)arg2 ;
-(id)appendIntValue:(int)arg0 tag:(id)arg1 timestamp:(NSUInteger)arg2 ;
-(id)appendIntegerValue:(NSInteger)arg0 tag:(id)arg1 timestamp:(NSUInteger)arg2 ;
-(id)appendSample:(id)arg0 ;
-(id)appendUnsignedIntValue:(unsigned int)arg0 tag:(id)arg1 timestamp:(NSUInteger)arg2 ;
-(id)appendUnsignedIntegerValue:(NSUInteger)arg0 tag:(id)arg1 timestamp:(NSUInteger)arg2 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataMatchingFilter:(id)arg0 ;
-(void)appendAttribute:(id)arg0 ;
-(void)appendAttributes:(id)arg0 ;
-(void)appendData:(id)arg0 ;
-(void)appendSet:(id)arg0 ;


@end


#endif