// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARRAWSCENEUNDERSTANDINGDATA_H
#define ARRAWSCENEUNDERSTANDINGDATA_H

@class NSString;
@protocol ARResultData;

#import <Foundation/Foundation.h>

#import "ARCamera.h"

@interface ARRawSceneUnderstandingData : NSObject <ARResultData>

 {
    *void _resultsRef;
}


@property (nonatomic) *__CVBuffer capturedImage; // ivar: _capturedImage
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) *__CVBuffer depthBuffer; // ivar: _depthBuffer
@property (nonatomic) *__CVBuffer depthConfidenceBuffer; // ivar: _depthConfidenceBuffer
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) *__CVBuffer normalsBuffer; // ivar: _normalsBuffer
@property (readonly, nonatomic) *void sceneUnderstandingResultRef;
@property (nonatomic) *__CVBuffer semanticSegmentationBuffer; // ivar: _semanticSegmentationBuffer
@property (nonatomic) *__CVBuffer semanticSegmentationBufferSampledForDepth; // ivar: _semanticSegmentationBufferSampledForDepth
@property (nonatomic) *__CVBuffer semanticSegmentationConfidenceBuffer; // ivar: _semanticSegmentationConfidenceBuffer
@property (nonatomic) *__CVBuffer semanticSegmentationConfidenceBufferSampledForDepth; // ivar: _semanticSegmentationConfidenceBufferSampledForDepth
@property (nonatomic) *__CVBuffer semanticSegmentationUncertaintyBuffer; // ivar: _semanticSegmentationUncertaintyBuffer
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) ARCamera *ultraWideCamera; // ivar: ultraWideCamera
@property (retain, nonatomic) ARCamera *wideCamera; // ivar: wideCamera


-(void)dealloc;


@end


#endif