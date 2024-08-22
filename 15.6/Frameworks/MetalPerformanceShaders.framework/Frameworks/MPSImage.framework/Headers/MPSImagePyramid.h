// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSIMAGEPYRAMID_H
#define MPSIMAGEPYRAMID_H

@protocol MTLBuffer;


#import "MPSUnaryImageKernel.h"

@interface MPSImagePyramid : MPSUnaryImageKernel {
    id<MTLBuffer> *wtBuffer;
    id<MTLBuffer> *wtBufferh;
    *float wtArray;
    *unsigned short wtArrayh;
    BOOL separable;
}


@property (readonly, nonatomic) NSUInteger kernelHeight; // ivar: _fHeight
@property (readonly, nonatomic) NSUInteger kernelWidth; // ivar: _fWidth


-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 centerWeight:(float)arg1 ;
-(id)initWithDevice:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 weights:(*float)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif