// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSIMAGECANNY_H
#define MPSIMAGECANNY_H

@protocol MTLBuffer;


#import "MPSUnaryImageKernel.h"
#import "MPSImageGaussianBlur.h"

@interface MPSImageCanny : MPSUnaryImageKernel {
    float _colVec;
    unsigned short _canny_window;
    MPSImageGaussianBlur *gaussKernel;
    id<MTLBuffer> *_indirectDispatchBufferArgs;
}


@property (readonly, nonatomic) *float colorTransform;
@property (nonatomic) float highThreshold; // ivar: hThresh
@property (nonatomic) float lowThreshold; // ivar: lThresh
@property (nonatomic) float maxEdgeTracingIterations; // ivar: _maxEdgeTracingIterations
@property (readonly, nonatomic) float sigma;
@property (nonatomic) BOOL useFastMode; // ivar: _useFastMode


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 linearToGrayScaleTransform:(*float)arg1 sigma:(float)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif