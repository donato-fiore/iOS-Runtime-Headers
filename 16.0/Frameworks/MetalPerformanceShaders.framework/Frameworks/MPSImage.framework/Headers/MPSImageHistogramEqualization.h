// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSIMAGEHISTOGRAMEQUALIZATION_H
#define MPSIMAGEHISTOGRAMEQUALIZATION_H

@protocol MTLBuffer;


#import "MPSUnaryImageKernel.h"

@interface MPSImageHistogramEqualization : MPSUnaryImageKernel {
    NSUInteger histogramEntries;
    BOOL histogramAlpha;
    ? minPixelValue;
    ? maxPixelValue;
    BOOL optimized256BinsUseCase;
    id<MTLBuffer> *cumulativeHistogramBuffer;
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
-(void)encodeTransformToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 histogram:(id)arg2 histogramOffset:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif