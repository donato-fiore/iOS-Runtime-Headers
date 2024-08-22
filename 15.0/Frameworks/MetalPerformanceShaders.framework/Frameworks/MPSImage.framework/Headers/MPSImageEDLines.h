// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSIMAGEEDLINES_H
#define MPSIMAGEEDLINES_H

@class MPSKernel;


#import "MPSImageGaussianBlur.h"
#import "MPSImageConvolution.h"
#import "MPSImageAreaMax.h"

@interface MPSImageEDLines : MPSKernel {
    unsigned short _gradientNormalizationRadius;
    MPSImageGaussianBlur *gaussianBlurKernel;
    MPSImageConvolution *sobel3XHKernel;
    MPSImageConvolution *sobel3XVKernel;
    MPSImageConvolution *sobel3YVKernel;
    MPSImageConvolution *sobel3YHKernel;
    MPSImageAreaMax *gradientNormalizeAreaMaxKernel;
}


@property (nonatomic) ? clipRectSource; // ivar: _clipRectSource
@property (nonatomic) unsigned short detailRatio; // ivar: _detailRatio
@property (readonly, nonatomic) float gaussianSigma; // ivar: _gaussianSigma
@property (nonatomic) float gradientThreshold; // ivar: _gradientThreshold
@property (nonatomic) float lineErrorThreshold; // ivar: _lineErrorThreshold
@property (nonatomic) NSUInteger maxLines; // ivar: _maxLines
@property (nonatomic) float mergeLocalityThreshold; // ivar: _mergeLocalityThreshold
@property (nonatomic) unsigned short minLineLength; // ivar: _minLineLength


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 gaussianSigma:(float)arg1 minLineLength:(unsigned short)arg2 maxLines:(NSUInteger)arg3 detailRatio:(unsigned short)arg4 gradientThreshold:(float)arg5 lineErrorThreshold:(float)arg6 mergeLocalityThreshold:(float)arg7 ;
-(void)dealloc;
-(void)encodeInternalToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 endpointBuffer:(id)arg4 endpointOffset:(NSUInteger)arg5 inputExtent:(struct ? )arg6 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 endpointBuffer:(id)arg3 endpointOffset:(NSUInteger)arg4 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 endpointBuffer:(id)arg4 endpointOffset:(NSUInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif