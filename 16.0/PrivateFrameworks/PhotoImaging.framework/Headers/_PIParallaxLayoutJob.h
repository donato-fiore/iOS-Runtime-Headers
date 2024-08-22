// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PIPARALLAXLAYOUTJOB_H
#define _PIPARALLAXLAYOUTJOB_H

@class NURenderJob, PFParallaxLayout, CIImage;
@protocol PFParallaxLayoutConfiguration, PFParallaxAssetRegions;


#import "PIParallaxLayoutRequest.h"

@interface _PIParallaxLayoutJob : NURenderJob

@property (nonatomic) BOOL clockOverlapAcceptable; // ivar: _clockOverlapAcceptable
@property (nonatomic) float confidenceMapScore; // ivar: _confidenceMapScore
@property (nonatomic) float confidencePureBackground; // ivar: _confidencePureBackground
@property (nonatomic) float confidencePureForeground; // ivar: _confidencePureForeground
@property (nonatomic) float cropScore; // ivar: _cropScore
@property (nonatomic) float faceLocalConfidence; // ivar: _faceLocalConfidence
@property (nonatomic) BOOL facePositionAcceptable; // ivar: _facePositionAcceptable
@property (nonatomic) float faceSize; // ivar: _faceSize
@property (nonatomic) float groundedScore; // ivar: _groundedScore
@property (retain, nonatomic) PFParallaxLayout *layout; // ivar: _layout
@property (retain, nonatomic) NSObject<PFParallaxLayoutConfiguration> *layoutConfiguration; // ivar: _layoutConfiguration
@property (retain, nonatomic) NSObject<PFParallaxAssetRegions> *layoutRegions; // ivar: _layoutRegions
@property (readonly, nonatomic) PIParallaxLayoutRequest *layoutRequest;
@property (nonatomic) float layoutScore; // ivar: _layoutScore
@property (nonatomic) float localConfidenceScore; // ivar: _localConfidenceScore
@property (nonatomic) float mattePureBackground; // ivar: _mattePureBackground
@property (nonatomic) float mattePureForeground; // ivar: _mattePureForeground
@property (nonatomic) BOOL metadataClockOverlapAcceptable; // ivar: _metadataClockOverlapAcceptable
@property (nonatomic) float nFaces; // ivar: _nFaces
@property (nonatomic) float parallaxScore; // ivar: _parallaxScore
@property (nonatomic) float resolutionRatio; // ivar: _resolutionRatio
@property (nonatomic) NSUInteger segmentationClassification; // ivar: _segmentationClassification
@property (retain, nonatomic) CIImage *segmentationConfidenceMapImage; // ivar: _segmentationConfidenceMapImage
@property (retain, nonatomic) CIImage *segmentationMatteImage; // ivar: _segmentationMatteImage
@property (nonatomic) float segmentationScore; // ivar: _segmentationScore


-(BOOL)complete:(*id)arg0 ;
-(BOOL)prepare:(*id)arg0 ;
-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(BOOL)wantsRenderStage;
-(id)initWithParallaxLayoutRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)result;
-(id)scalePolicy;


@end


#endif