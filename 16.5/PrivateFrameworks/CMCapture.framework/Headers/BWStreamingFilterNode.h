// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTREAMINGFILTERNODE_H
#define BWSTREAMINGFILTERNODE_H

@class NSArray, NSString;
@protocol BWRendererResourceProvider, BWDetectedFacesFilterDelegate, BWSemanticStyleSceneObserver, OS_dispatch_queue;


#import "BWNode.h"
#import "BWRenderList.h"
#import "BWRenderListAnimator.h"
#import "FigCaptureSemanticStyle.h"
#import "BWFencedAnimationQueue.h"
#import "FigCaptureSemanticStyleSet.h"
#import "BWSemanticStyleColorCubeCache.h"
#import "BWStreamingCVAFilterRenderer.h"
#import "BWStreamingRaytracingSDOFRenderer.h"
#import "BWRenderListProcessor.h"
#import "BWColorLookupCache.h"
#import "BWFigVideoCaptureDevice.h"

@interface BWStreamingFilterNode : BWNode <BWRendererResourceProvider, BWDetectedFacesFilterDelegate, BWSemanticStyleSceneObserver>

 {
    BOOL _preparedToBecomeLive;
    BOOL _streamingSegmentationFromInferenceEngine;
    BOOL _semanticStylePersonSegmentationEnabled;
    BOOL _depthDataDeliveryEnabled;
    BOOL _focusBlurMapDeliveryEnabled;
    BOOL _depthFromMonocularNetworkEnabled;
    BOOL _metadataProcessingEnabled;
    BOOL _attachesInputPixelBufferAfterRendering;
    BOOL _studioAndContourRenderingEnabled;
    BOOL _stageRenderingEnabled;
    BOOL _cinematicVideoEnabled;
    os_unfair_lock_s _renderListLock;
    BWRenderList *_currentRenderList;
    BWRenderListAnimator *_currentAnimator;
    BWRenderList *_nextRenderList;
    BWRenderList *_mostRecentRenderListRequested;
    BWRenderListAnimator *_nextAnimator;
    os_unfair_lock_s _filterChangeLock;
    NSArray *_filters;
    BOOL _semanticStyleRenderingEnabled;
    FigCaptureSemanticStyle *_semanticStyle;
    BOOL _semanticStyleRenderingSuspended;
    os_unfair_lock_s _semanticStyleSceneLock;
    int _semanticStyleSceneType;
    BWFencedAnimationQueue *_fencedAnimationQueue;
    BOOL _multipleSemanticStylesEnabled;
    *opaqueCMSampleBuffer _lastSampleBuffer;
    ? _lastRenderedPTS;
    os_unfair_lock_s _lastSampleBufferLock;
    NSArray *_semanticStyleFiltersAndRegionArray;
    FigCaptureSemanticStyleSet *_currentSemanticStyleSet;
    CGRect _primaryCaptureRect;
    CGRect _fullScreenRectangle;
    os_unfair_lock_s _semanticStyleSetLock;
    BWSemanticStyleColorCubeCache *_colorCubeCache;
    float _pickerComparisonMaxCubeStrength;
    BOOL _maskVisualizationEnabled;
    BWStreamingCVAFilterRenderer *_streamingCVAFilterRenderer;
    float _simulatedAperture;
    float _portraitLightingEffectStrength;
    BWStreamingRaytracingSDOFRenderer *_streamingRaytracingSDOFRenderer;
    BWRenderListProcessor *_renderListProcessor;
    BWColorLookupCache *_colorLookupCache;
    NSObject<OS_dispatch_queue> *_processorPreparationQueue;
    BWFigVideoCaptureDevice *_captureDevice;
    BOOL _receivedInitialFixedPointDisparityBuffer;
    BOOL _receivedOccludedFixedPointDisparityBuffer;
    BOOL _mixColorCubesInGammaDomain;
    BOOL _portraitPreviewForegroundBlurEnabled;
}


@property (nonatomic) BOOL attachesInputPixelBufferAfterRendering;
@property (readonly) BWColorLookupCache *colorLookupCache;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDepthDataDeliveryEnabled) BOOL depthDataDeliveryEnabled;
@property (nonatomic, getter=isDepthFromMonocularNetworkEnabled) BOOL depthFromMonocularNetworkEnabled;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) NSArray *filters;
@property (nonatomic, getter=isFocusBlurMapDeliveryEnabled) BOOL focusBlurMapDeliveryEnabled;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMetadataProcessingEnabled) BOOL metadataProcessingEnabled;
@property float portraitLightingEffectStrength;
@property (readonly, nonatomic, getter=isRenderingSemanticStyle) BOOL renderingSemanticStyle;
@property (readonly, nonatomic, getter=isRenderingSemanticStyleSet) BOOL renderingSemanticStyleSet; // ivar: _renderingSemanticStyleSet
@property (readonly, retain, nonatomic) FigCaptureSemanticStyle *semanticStyle;
@property (nonatomic, getter=isSemanticStylePersonSegmentationEnabled) BOOL semanticStylePersonSegmentationEnabled;
@property (readonly, nonatomic, getter=isSemanticStyleRenderingEnabled) BOOL semanticStyleRenderingEnabled;
@property (readonly, nonatomic, getter=isSemanticStyleRenderingSuspended) BOOL semanticStyleRenderingSuspended;
@property (readonly, nonatomic) int semanticStyleSceneType;
@property float simulatedAperture;
@property (nonatomic) BOOL stageRenderingEnabled;
@property (nonatomic, getter=isStreamingSegmentationFromInferenceEngine) BOOL streamingSegmentationFromInferenceEngine;
@property (nonatomic) BOOL studioAndContourRenderingEnabled;
@property (readonly) Class superclass;


+(void)initialize;
-(id)initWithCaptureDevice:(id)arg0 maxLossyCompressionLevel:(int)arg1 semanticStyleRenderingEnabled:(BOOL)arg2 cinematicVideoEnabled:(BOOL)arg3 portraitPreviewForegroundBlurEnabled:(BOOL)arg4 ;
-(id)nodeSubType;
-(id)nodeType;
-(id)provideColorLookupCache;
-(id)provideCoreImageFilterRenderer;
-(id)provideMetalFilterRenderer;
-(id)provideStillImageMetalBlurMapRenderer;
-(id)provideStillImageMetalSDOFRenderer;
-(id)provideStreamingSDOFFilterRenderer;
-(void)changeToFilters:(id)arg0 animated:(BOOL)arg1 ;
-(void)changeToFilters:(id)arg0 semanticStyle:(id)arg1 animated:(BOOL)arg2 ;
-(void)changeToSemanticStyle:(id)arg0 animated:(BOOL)arg1 ;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)filterDetectedFacesInSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)prepareForRenderingWithPreparedPixelBufferPool;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)semanticStyleSceneTypeDidChange:(int)arg0 ;


@end


#endif