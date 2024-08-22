// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLBUFFERLAYOUTDESCRIPTORINTERNAL_H
#define MTLBUFFERLAYOUTDESCRIPTORINTERNAL_H



#import "MTLBufferLayoutDescriptor.h"

@interface MTLBufferLayoutDescriptorInternal : MTLBufferLayoutDescriptor {
    NSUInteger _stride;
    NSUInteger _stepFunction;
    NSUInteger _instanceStepRate;
}




-(NSUInteger)stepFunction;
-(NSUInteger)stepRate;
-(NSUInteger)stride;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)setStepFunction:(NSUInteger)arg0 ;
-(void)setStepRate:(NSUInteger)arg0 ;
-(void)setStride:(NSUInteger)arg0 ;


@end


#endif