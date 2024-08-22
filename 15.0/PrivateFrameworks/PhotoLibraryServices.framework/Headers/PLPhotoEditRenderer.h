// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPHOTOEDITRENDERER_H
#define PLPHOTOEDITRENDERER_H

@class NSDictionary, NUPriority, NUBufferRenderClient, NURenderContext, NUComposition, PICompositionController;

#import <Foundation/Foundation.h>

#import "PLEditSource.h"

@interface PLPhotoEditRenderer : NSObject {
    NSDictionary *__smartToneAdjustments;
    CGFloat _smartToneLevelInCachedAdjustments;
    NSDictionary *_smartToneStatisticsInCachedAdjustments;
    NSDictionary *__smartColorAdjustments;
    CGFloat _smartColorLevelInCachedAdjustments;
    NSDictionary *_smartColorStatisticsInCachedAdjustments;
    NSDictionary *__smartBWAdjustments;
    CGFloat _smartBWLevelInCachedAdjustments;
    NUPriority *_priority;
    NUBufferRenderClient *_renderClient;
    NURenderContext *_videoRenderContext;
    NURenderContext *_geometryContext;
    NURenderContext *_smartToneAutoCalculatorContext;
}


@property (readonly, retain, nonatomic) NUComposition *composition;
@property (retain, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (readonly, retain, nonatomic) PLEditSource *editSource; // ivar: _editSource
@property (retain, nonatomic) PLEditSource *overcaptureEditSource; // ivar: _overcaptureEditSource
@property (readonly, nonatomic) CGFloat smartBWBaseGrain;
@property (readonly, nonatomic) CGFloat smartBWBaseHue;
@property (readonly, nonatomic) CGFloat smartBWBaseNeutralGamma;
@property (readonly, nonatomic) CGFloat smartBWBaseStrength;
@property (readonly, nonatomic) CGFloat smartBWBaseTone;
@property (readonly, nonatomic) CGFloat smartColorBaseCast;
@property (readonly, nonatomic) CGFloat smartColorBaseContrast;
@property (readonly, nonatomic) CGFloat smartColorBaseSaturation;
@property (nonatomic) NSInteger smartFiltersCubeSize; // ivar: _smartFiltersCubeSize
@property (readonly, nonatomic) CGFloat smartToneBaseBlackPoint;
@property (readonly, nonatomic) CGFloat smartToneBaseBrightness;
@property (readonly, nonatomic) CGFloat smartToneBaseContrast;
@property (readonly, nonatomic) CGFloat smartToneBaseExposure;
@property (readonly, nonatomic) CGFloat smartToneBaseHighlights;
@property (readonly, nonatomic) CGFloat smartToneBaseLocalLight;
@property (readonly, nonatomic) CGFloat smartToneBaseShadows;


+(BOOL)currentDeviceShouldAllowLocalLight;
+(id)compositionWithController:(id)arg0 source:(id)arg1 ;
+(id)compositionWithController:(id)arg0 source:(id)arg1 overcaptureSource:(id)arg2 ;
+(id)newImageDataFromCGImage:(struct CGImage *)arg0 withCompressionQuality:(CGFloat)arg1 metadataSourceImageURL:(id)arg2 preserveRegionsInMetadata:(BOOL)arg3 ;
+(id)rendererForVideoURL:(id)arg0 overcaptureVideoURL:(id)arg1 livePhotoStillURL:(id)arg2 adjustmentData:(id)arg3 formatIdentifier:(id)arg4 formatVersion:(id)arg5 ;
+(void)configureNeutrinoCacheDirectoryIfNeeded;
+(void)updateComposition:(id)arg0 fromPortraitMetadata:(id)arg1 ;
+(void)updateCompositionController:(id)arg0 fromPortraitMetadata:(id)arg1 ;
-(CGFloat)_smartBWLevelWithAttributeKey:(id)arg0 settingKey:(id)arg1 ;
-(CGFloat)_smartColorLevelWithAttributeKey:(id)arg0 settingKey:(id)arg1 ;
-(CGFloat)_smartToneLevelWithAttributeKey:(id)arg0 settingKey:(id)arg1 ;
-(id)_smartBWAdjustments;
-(id)_smartColorAdjustments;
-(id)_smartToneAdjustments;
-(id)exportVideoToURL:(id)arg0 preset:(id)arg1 livePhotoPairingIdentifier:(id)arg2 completion:(id)arg3 ;
-(id)getGeometryForComposition:(id)arg0 ;
-(id)getGeometryForComposition:(id)arg0 pipelineFilters:(id)arg1 ;
-(id)initWithEditSource:(id)arg0 overcaptureEditSource:(id)arg1 ;
-(id)initWithEditSource:(id)arg0 overcaptureEditSource:(id)arg1 renderPriority:(NSInteger)arg2 ;
-(id)newExporter;
-(id)newImageExporterOptions;
-(id)newVideoExporterOptions;
// -(void)applySourceChangesToComposition:(id)arg0 source:(id)arg1 withBlock:(id)arg2 executeSynchronously:(unk)arg3 completionBlock:(BOOL)arg4  ;
// -(void)applySourceChangesToCompositionAsynchronously:(id)arg0 source:(id)arg1 withBlock:(id)arg2 completionBlock:(unk)arg3  ;
-(void)applySourceChangesToCompositionSynchronously:(id)arg0 source:(id)arg1 withBlock:(id)arg2 ;
-(void)calculateLongExposureFusionParametersWithCompletionHandler:(id)arg0 ;
-(void)cancelAllRenders;
-(void)generateJPEGImageDataWithCompressionQuality:(CGFloat)arg0 livePhotoPairingIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)renderImageWithTargetSize:(struct CGSize )arg0 contentMode:(NSInteger)arg1 name:(id)arg2 completion:(id)arg3 ;
-(void)renderImageWithTargetSize:(struct CGSize )arg0 contentMode:(NSInteger)arg1 renderMode:(NSInteger)arg2 name:(id)arg3 completion:(id)arg4 ;
-(void)renderImageWithTargetSize:(struct CGSize )arg0 contentMode:(NSInteger)arg1 renderMode:(NSInteger)arg2 renderTime:(struct ? )arg3 name:(id)arg4 completion:(id)arg5 ;
-(void)renderVideoWithTargetSize:(struct CGSize )arg0 contentMode:(NSInteger)arg1 name:(id)arg2 completion:(id)arg3 ;
-(void)renderVideoWithTargetSize:(struct CGSize )arg0 name:(id)arg1 completion:(id)arg2 ;


@end


#endif