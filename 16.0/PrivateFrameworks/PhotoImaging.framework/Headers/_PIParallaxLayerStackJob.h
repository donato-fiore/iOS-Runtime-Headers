// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PIPARALLAXLAYERSTACKJOB_H
#define _PIPARALLAXLAYERSTACKJOB_H

@class NURenderJob, CIImage, PFParallaxLayout;
@protocol _PIParallaxLayerStackRenderer, NUImageBuffer, PISegmentationItem;


#import "_PIParallaxLayerStackDebugImageCollector.h"
#import "PIParallaxStyle.h"

@interface _PIParallaxLayerStackJob : NURenderJob <_PIParallaxLayerStackRenderer>



@property (retain, nonatomic) NSObject<NUImageBuffer> *backgroundBuffer; // ivar: _backgroundBuffer
@property (retain, nonatomic) CIImage *backgroundImage; // ivar: _backgroundImage
@property (retain, nonatomic) _PIParallaxLayerStackDebugImageCollector *debugImageCollector; // ivar: _debugImageCollector
@property (retain, nonatomic) NSObject<NUImageBuffer> *foregroundBuffer; // ivar: _foregroundBuffer
@property (retain, nonatomic) CIImage *foregroundImage; // ivar: _foregroundImage
@property (retain, nonatomic) PFParallaxLayout *layout; // ivar: _layout
@property (readonly, nonatomic) NSInteger mode;
@property (readonly, nonatomic) PFParallaxLayout *requestLayout;
@property (readonly, nonatomic) NSObject<PISegmentationItem> *segmentationItem;
@property (readonly, nonatomic) PIParallaxStyle *style;


-(BOOL)prepare:(*id)arg0 ;
-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(BOOL)wantsRenderStage;
-(id)backfillScalePolicy;
-(id)debugTintedImage:(id)arg0 isBackfill:(BOOL)arg1 ;
-(id)deviceScalePolicy;
-(id)effectiveLayout;
-(id)initWithParallaxLayerStackRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)layerForBuffer:(id)arg0 image:(id)arg1 zPosition:(CGFloat)arg2 identifier:(id)arg3 ;
-(id)newRenderPipelineStateForEvaluationMode:(NSInteger)arg0 ;
-(id)newRenderedPixelBufferFromImage:(id)arg0 hasAlpha:(BOOL)arg1 error:(*id)arg2 ;
-(id)result;
-(id)scalePolicy;


@end


#endif