// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARSEGMENTATIONDATA_H
#define ARSEGMENTATIONDATA_H

@class NSString, NSDictionary;
@protocol ARResultData, ARQATraceable;

#import <Foundation/Foundation.h>

#import "ARImageData.h"

@interface ARSegmentationData : NSObject <ARResultData, ARQATraceable>



@property (readonly, nonatomic) ? adjustedIntrinics;
@property (readonly, nonatomic) *__CVBuffer confidenceBuffer; // ivar: _confidenceBuffer
@property (nonatomic) *__CVBuffer confidenceSampledForDepth; // ivar: _confidenceSampledForDepth
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSegmentedPeople; // ivar: _hasSegmentedPeople
@property (readonly) NSUInteger hash;
@property (nonatomic) *__CVBuffer maskedSemanticsSampledForDepth; // ivar: _maskedSemanticsSampledForDepth
@property (nonatomic) *__CVBuffer normalsBuffer; // ivar: _normalsBuffer
@property (readonly, nonatomic) *__CVBuffer segmentationBuffer; // ivar: _segmentationBuffer
@property (nonatomic) *__CVBuffer semanticsSampledForDepth; // ivar: _semanticsSampledForDepth
@property (readonly, nonatomic) NSInteger source; // ivar: _source
@property (retain, nonatomic) ARImageData *sourceImageData; // ivar: _sourceImageData
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSDictionary *tracingEntry;
@property (readonly, nonatomic) *__CVBuffer uncertaintyBuffer; // ivar: _uncertaintyBuffer
@property (nonatomic) *__CVBuffer uncertaintySampledForDepth; // ivar: _uncertaintySampledForDepth


-(BOOL)resampleSemanticsToDepthCPU:(struct __CVBuffer *)arg0 depthToSemantics:(struct ? )arg1 semanticsIntrinsics:(struct ? )arg2 depthIntrinsics:(struct ? )arg3 ;
-(id)initWithTimestamp:(CGFloat)arg0 segmentationBuffer:(struct __CVBuffer *)arg1 ;
-(id)initWithTimestamp:(CGFloat)arg0 segmentationBuffer:(struct __CVBuffer *)arg1 confidenceBuffer:(struct __CVBuffer *)arg2 source:(NSInteger)arg3 ;
-(id)initWithTimestamp:(CGFloat)arg0 segmentationBuffer:(struct __CVBuffer *)arg1 confidenceBuffer:(struct __CVBuffer *)arg2 uncertaintyBuffer:(struct __CVBuffer *)arg3 source:(NSInteger)arg4 ;
-(void)dealloc;
-(void)updateTimestamp:(CGFloat)arg0 ;


@end


#endif