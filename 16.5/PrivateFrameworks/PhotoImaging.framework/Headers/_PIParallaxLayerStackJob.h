// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PIPARALLAXLAYERSTACKJOB_H
#define _PIPARALLAXLAYERSTACKJOB_H

@class NURenderJob, NSMutableArray, CIImage, NSString, NSArray, PFParallaxLayout;
@protocol _PIParallaxLayerStackRenderer, PIParallaxFilterCache, NUImageBuffer, PISegmentationItem;


#import "_PIParallaxLayerStackDebugImageCollector.h"
#import "PIParallaxStyle.h"

@interface _PIParallaxLayerStackJob : NURenderJob <_PIParallaxLayerStackRenderer, PIParallaxFilterCache>

 {
    NSMutableArray *_cachedImageEntries;
}


@property (retain, nonatomic) NSObject<NUImageBuffer> *backgroundBuffer; // ivar: _backgroundBuffer
@property (retain, nonatomic) CIImage *backgroundImage; // ivar: _backgroundImage
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _PIParallaxLayerStackDebugImageCollector *debugImageCollector; // ivar: _debugImageCollector
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<NUImageBuffer> *foregroundBuffer; // ivar: _foregroundBuffer
@property (retain, nonatomic) CIImage *foregroundImage; // ivar: _foregroundImage
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *layers; // ivar: _layers
@property (retain, nonatomic) PFParallaxLayout *layout; // ivar: _layout
@property (readonly, nonatomic) NSInteger mode;
@property (readonly, nonatomic) PFParallaxLayout *requestLayout;
@property (readonly, nonatomic) NSObject<PISegmentationItem> *segmentationItem;
@property (readonly, nonatomic) PIParallaxStyle *style;
@property (readonly) Class superclass;


-(BOOL)complete:(*id)arg0 ;
-(BOOL)prepare:(*id)arg0 ;
-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(BOOL)wantsRenderStage;
-(id)backfillScalePolicy;
-(id)cacheImage:(id)arg0 key:(id)arg1 format:(id)arg2 colorSpace:(id)arg3 ;
-(id)cachedImage:(id)arg0 forKey:(id)arg1 ;
-(id)debugTintedImage:(id)arg0 isBackfill:(BOOL)arg1 ;
-(id)deviceScalePolicy;
-(id)effectiveLayout;
-(id)imageByCachingImage:(id)arg0 format:(id)arg1 colorSpace:(id)arg2 key:(id)arg3 ;
-(id)initWithParallaxLayerStackRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)layerForBuffer:(id)arg0 image:(id)arg1 zPosition:(CGFloat)arg2 identifier:(id)arg3 ;
-(id)layerStackRequest;
-(id)newRenderPipelineStateForEvaluationMode:(NSInteger)arg0 ;
-(id)newRenderedPixelBufferFromImage:(id)arg0 hasAlpha:(BOOL)arg1 colorSpace:(id)arg2 error:(*id)arg3 ;
-(id)result;
-(id)scalePolicy;


@end


#endif