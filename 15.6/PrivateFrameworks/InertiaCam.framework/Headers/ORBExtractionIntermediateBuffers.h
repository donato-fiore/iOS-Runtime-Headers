// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ORBEXTRACTIONINTERMEDIATEBUFFERS_H
#define ORBEXTRACTIONINTERMEDIATEBUFFERS_H

@class MPSKernel, NSArray;
@protocol MTLTexture, MTLBuffer;

#import <Foundation/Foundation.h>


@interface ORBExtractionIntermediateBuffers : NSObject

@property (retain) NSObject<MTLTexture> *boxBlurredTexture_R8Uint; // ivar: _boxBlurredTexture_R8Uint
@property (retain) NSObject<MTLTexture> *boxBlurredTexture_RGBA8Uint; // ivar: _boxBlurredTexture_RGBA8Uint
@property (retain) NSObject<MTLBuffer> *compactKeypointsAndResponsesBuffer; // ivar: _compactKeypointsAndResponsesBuffer
@property (retain) NSObject<MTLBuffer> *compactKeypointsBuffer; // ivar: _compactKeypointsBuffer
@property (retain) NSObject<MTLBuffer> *countOfKeypointsPerRegion; // ivar: _countOfKeypointsPerRegion
@property unsigned int countOfRectRegions; // ivar: _countOfRectRegions
@property (retain) NSObject<MTLBuffer> *cumulativeCountOfKeypointsPerRegion; // ivar: _cumulativeCountOfKeypointsPerRegion
@property (retain) NSObject<MTLBuffer> *descriptorBuffer; // ivar: _descriptorBuffer
@property (retain) NSObject<MTLTexture> *gaussianBlurredTexture_R8Uint; // ivar: _gaussianBlurredTexture_R8Uint
@property (retain) NSObject<MTLTexture> *gaussianBlurredTexture_R8Unorm; // ivar: _gaussianBlurredTexture_R8Unorm
@property (retain) NSObject<MTLTexture> *gaussianBlurredTexture_RGBA8Uint; // ivar: _gaussianBlurredTexture_RGBA8Uint
@property (retain) NSObject<MTLBuffer> *histogramsBuffer; // ivar: _histogramsBuffer
@property (retain) NSObject<MTLBuffer> *keypointCountBuffer; // ivar: _keypointCountBuffer
@property NSUInteger maxDescriptorCount; // ivar: _maxDescriptorCount
@property int maxKeypointsPerRegion; // ivar: _maxKeypointsPerRegion
@property unsigned int maxRegionHeight; // ivar: _maxRegionHeight
@property (retain) MPSKernel *mpsFindKeypoints; // ivar: _mpsFindKeypoints
@property (retain) MPSKernel *mpsHistogram; // ivar: _mpsHistogram
@property (retain) NSObject<MTLBuffer> *mpsRegionStrideBuffer; // ivar: _mpsRegionStrideBuffer
@property (retain) NSObject<MTLBuffer> *rectRegionCount; // ivar: _rectRegionCount
@property (copy) NSArray *rectRegions; // ivar: _rectRegions
@property (retain) NSObject<MTLBuffer> *rectRegionsBuffer; // ivar: _rectRegionsBuffer
@property (retain) NSObject<MTLBuffer> *rectRegionsDesiredKeypoints; // ivar: _rectRegionsDesiredKeypoints
@property (retain) NSObject<MTLBuffer> *refinedKeypointsBuffer; // ivar: _refinedKeypointsBuffer
@property (retain) NSObject<MTLBuffer> *refinementIntermediatesBuffer; // ivar: _refinementIntermediatesBuffer
@property (retain) NSObject<MTLBuffer> *responseBuffer; // ivar: _responseBuffer
@property (retain) NSObject<MTLTexture> *responseTexture; // ivar: _responseTexture
@property (retain) NSObject<MTLTexture> *suppressedResponseTexture_R8Uint; // ivar: _suppressedResponseTexture_R8Uint
@property (retain) NSObject<MTLTexture> *suppressedResponseTexture_R8Unorm; // ivar: _suppressedResponseTexture_R8Unorm
@property (retain) NSObject<MTLTexture> *suppressedResponseTexture_RGBA8Uint; // ivar: _suppressedResponseTexture_RGBA8Uint
@property (retain) NSObject<MTLBuffer> *thresholdRangeBuffer; // ivar: _thresholdRangeBuffer
@property (retain) NSObject<MTLBuffer> *thresholdsBuffer; // ivar: _thresholdsBuffer
@property (retain) NSObject<MTLBuffer> *truncatedRegionsBuffer; // ivar: _truncatedRegionsBuffer


-(id)initWithDevice:(id)arg0 templateImage:(struct __CVBuffer *)arg1 rectRegions:(id)arg2 maxKeypointsPerRegion:(int)arg3 minKeypointResponseThreshold:(float)arg4 ;
-(void)_reinitializeIntermediateBuffersWithDevice:(id)arg0 templateImage:(struct __CVBuffer *)arg1 rectRegions:(id)arg2 maxKeypointsPerRegion:(int)arg3 minKeypointResponseThreshold:(float)arg4 ;


@end


#endif