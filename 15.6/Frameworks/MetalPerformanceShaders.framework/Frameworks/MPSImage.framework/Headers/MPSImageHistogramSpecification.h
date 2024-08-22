// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSIMAGEHISTOGRAMSPECIFICATION_H
#define MPSIMAGEHISTOGRAMSPECIFICATION_H

@protocol MTLBuffer;


#import "MPSUnaryImageKernel.h"

@interface MPSImageHistogramSpecification : MPSUnaryImageKernel {
    NSUInteger histogramEntries;
    BOOL histogramAlpha;
    ? minPixelValue;
    ? maxPixelValue;
    BOOL optimized256BinsUseCase;
    id<MTLBuffer> *specificationBuffer;
    BOOL encodeTransform;
}


@property (readonly, nonatomic) ? histogramInfo;


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 histogramInfo:(struct ? *)arg1 ;
-(void)dealloc;
-(void)encodeTransformToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 sourceHistogram:(id)arg2 sourceHistogramOffset:(NSUInteger)arg3 desiredHistogram:(id)arg4 desiredHistogramOffset:(NSUInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif