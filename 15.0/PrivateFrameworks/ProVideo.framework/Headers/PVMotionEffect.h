// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVMOTIONEFFECT_H
#define PVMOTIONEFFECT_H

@class NSMutableArray, NSURL, NSString, NSNumber, NSMutableSet, NSMutableDictionary, NSLock;


#import "PVEffect.h"
#import "PVMotionEffectTransformComponent.h"
#import "PVMotionEffectTextComponent.h"
#import "PVMotionEffectTranscriptionComponent.h"
#import "PVMotionEffectHitAreaComponent.h"
#import "PVMotionEffectTimelineComponent.h"

@interface PVMotionEffect : PVEffect {
    *void _documentInfo;
    NSMutableArray *_motionComponents;
    CGFloat _effectOutputAspect;
    CGFloat _playableAspectRatio;
    int _playableContentMode;
    BOOL _hasPlayableAspectOverride;
    NSURL *_projectURL;
    NSString *_projectPath;
    NSString *_projectPathOverride;
    unsigned int _groupIDToCache;
    unsigned int _previousGroupIDToCache;
    BOOL _cachedRenderDirty;
    NSNumber *_supportsExtendedRangeInputs;
    NSNumber *_stillImageInverseToneMapOperator;
    NSMutableSet *_parameterKeysThatInvalidateCache;
    NSMutableDictionary *_parametersThatInvalidateCache;
    NSMutableDictionary *_cachedPublishedParams;
    NSLock *_documentLock;
    atomic<PVDocumentLoadStatus> _docLoadStatus;
    BOOL _lastRenderWasHDR;
    PVMotionEffectTransformComponent *_transformComponent;
    PVMotionEffectTextComponent *_textComponent;
    PVMotionEffectTranscriptionComponent *_transcriptionComponent;
    PVMotionEffectHitAreaComponent *_hitAreaComponent;
    PVMotionEffectTimelineComponent *_timelineComponent;
}


@property (readonly, weak, nonatomic) PVMotionEffectHitAreaComponent *hitAreaComponent;
@property (readonly, weak, nonatomic) PVMotionEffectTextComponent *textComponent;
@property (readonly, weak, nonatomic) PVMotionEffectTimelineComponent *timelineComponent;
@property (readonly, weak, nonatomic) PVMotionEffectTranscriptionComponent *transcriptionComponent;
@property (readonly, weak, nonatomic) PVMotionEffectTransformComponent *transformComponent;


+(BOOL)replacedMappedEffectWithNewPath:(id)arg0 ;
+(id)_bundleLibPaths;
+(id)_effectPathFromID:(id)arg0 ;
+(id)_userLibPaths;
+(id)effectMap;
+(id)motionComponentClasses;
+(id)motionEffectPropertyKeyToPublishedParameterNameMap;
+(id)newEffectWithData:(id)arg0 ;
+(id)newEffectWithURL:(id)arg0 ;
+(id)publishedParameterNameToMotionEffectPropertyKeyMap;
+(void)clearPreviewStats;
+(void)extractMetadataFromContentsOfFile:(id)arg0 toCacheEntry:(id)arg1 ;
+(void)handleApplicationDidReceiveMemoryWarning;
+(void)handleApplicationWillTerminate;
+(void)handleCleanupEffectsCache;
+(void)initializeMotion;
+(void)initializeMotionInternal;
+(void)mapTemplatesInDirectory:(id)arg0 doingRescan:(BOOL)arg1 origCache:(id)arg2 newCache:(id)arg3 ;
+(void)registerEffects;
+(void)registerNoneEffectForType:(id)arg0 effectID:(id)arg1 origCache:(id)arg2 newCache:(id)arg3 ;
+(void)registerTemplateInDirectory:(id)arg0 relPath:(id)arg1 effectID:(id)arg2 doingRescan:(BOOL)arg3 origCache:(id)arg4 newCache:(id)arg5 ;
+(void)scanTemplatesInDirectory:(id)arg0 doingRescan:(BOOL)arg1 replaceMappedEffectPath:(BOOL)arg2 origCache:(id)arg3 newCache:(id)arg4 ;
-(?)disableElementWithPublishedParamdisable;
-(BOOL)bounds:(struct CGRect *)arg0 atTime:(struct ? )arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 includeMasks:(BOOL)arg4 ;
-(BOOL)didCacheInvalidatingParameterChange_NoLock:(id)arg0 key:(id)arg1 ;
-(BOOL)didSetCacheInvalidatingParameter_NoLock:(id)arg0 forKey:(id)arg1 ;
-(BOOL)forceDisableBuildAnimation;
-(BOOL)forceDisableLoop;
-(BOOL)hasAllNecessaryResources;
-(BOOL)hasBuiltInEnvironment;
-(BOOL)hasPlayableAspectOverride_NoLock;
-(BOOL)isCameraOverrideEnabled;
-(BOOL)isReady;
-(BOOL)isRenderCachingDisabled_NoLock:(struct ? )arg0 ;
-(BOOL)isSketch;
-(BOOL)isTextFlipped;
-(BOOL)isTimeDurationIndefinite;
-(BOOL)isTitleCard;
-(BOOL)isTranscription;
-(BOOL)isVisibleAtTime_NoLock:(struct ? )arg0 timedProperties:(id)arg1 defaultProperties:(id)arg2 ;
-(BOOL)loadResources;
-(BOOL)loadResources_NoLock;
-(BOOL)loopTimeOverrideEnabled;
-(BOOL)parameterInvalidatesCache_NoLock:(id)arg0 ;
-(BOOL)resourcesAreReady;
-(BOOL)supportsExtendedRangeInputs;
-(BOOL)supportsFlippingText;
-(BOOL)supportsOrientation;
-(BOOL)supportsParam:(id)arg0 ;
-(BOOL)transcriptionHitTest:(struct CGPoint )arg0 time:(struct ? )arg1 ;
-(BOOL)useLocalLoopTime;
-(CGFloat)playableAspectRatio_NoLock;
-(CGFloat)timelineDurationInSeconds;
-(CGFloat)timelineFrameRate;
-(CGFloat)topLevelOpacity;
-(id)cameraProjection;
-(id)cameraTransform;
-(id)defaultAttributedString:(NSUInteger)arg0 ;
-(id)displayName;
-(id)effectParameters;
-(id)hitAreaPointsAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeDropShadow:(BOOL)arg2 scale:(struct CGPoint )arg3 viewSize:(struct CGSize )arg4 viewOrigin:(int)arg5 ;
-(id)initWithContentID:(id)arg0 andDictionary:(id)arg1 ;
-(id)initWithEffectID:(id)arg0 ;
-(id)posterFrameMarker;
-(id)projectPath;
-(id)projectURL;
-(id)publishedParam_NoLock:(*void)arg0 forKey:(id)arg1 atTime:(struct ? )arg2 includeHidden:(BOOL)arg3 ;
-(id)publishedParams_NoLock:(*void)arg0 ;
-(id)textEditingBounds:(struct ? )arg0 ;
-(id)textEditingBoundsAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 useParagraphBounds:(BOOL)arg2 includeDropShadow:(BOOL)arg3 includeMasks:(BOOL)arg4 ;
-(id)textTransformsAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeTransformAnimation:(BOOL)arg2 viewSize:(struct CGSize )arg3 viewOrigin:(int)arg4 ;
-(id)textTransformsAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 viewSize:(struct CGSize )arg2 viewOrigin:(int)arg3 ;
-(id)timelineMarkers;
-(id)timelineMarkersOfType:(int)arg0 ;
-(id)transformAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeTransformAnimation:(BOOL)arg2 viewSize:(struct CGSize )arg3 viewOrigin:(int)arg4 ;
-(id)transformAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 viewSize:(struct CGSize )arg2 viewOrigin:(int)arg3 ;
-(int)getOSFAOption:(id)arg0 ;
-(int)orientation;
-(int)origin;
-(int)playableContentMode_NoLock;
-(int)stillImageInverseToneMapOperator:(id)arg0 ;
-(struct ? )componentTimeFromTimelineTime:(struct ? )arg0 ;
-(struct ? )componentTimeRangeFromTimelineTimeRange:(struct ? )arg0 ;
-(struct ? )loopTimeOverride;
-(struct ? )timelineDuration;
-(struct ? )timelineFrameDuration;
-(struct ? )timelineLastFrame;
-(struct ? )timelineTimeFromComponentTime:(struct ? )arg0 ;
-(struct ? )timelineTimeRangeFromComponentTimeRange:(struct ? )arg0 ;
-(struct ? )transcriptionDuration;
-(struct CGRect )outputROI;
-(struct CGRect )outputROI_NoLock:(*void)arg0 scale:(CGFloat)arg1 ;
-(struct CGSize )documentSize;
-(struct CGSize )outputSize;
-(struct HGRect )makeCropRectForDOD:(struct HGRect )arg0 renderRect:(struct CGRect )arg1 renderScale:(float)arg2 ;
-(struct HGRef<HGNode> )hgNodeForTime:(struct ? )arg0 inputs:(*void)arg1 renderer:(*void)arg2 igContext:(struct HGRef<PVInstructionGraphContext> )arg3 ;
-(struct HGRef<HGNode> )previewHGNodeForTime:(struct ? )arg0 inputHGNode:(struct HGRef<HGNode> )arg1 outputSize:(struct CGSize )arg2 renderer:(*void)arg3 ;
-(struct PVCGPointQuad )cornersAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeDropShadow:(BOOL)arg2 scale:(struct CGPoint )arg3 viewSize:(struct CGSize )arg4 viewOrigin:(int)arg5 ;
-(struct PVCGPointQuad )textCornersAtTime:(struct ? )arg0 index:(NSUInteger)arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 scale:(struct CGPoint )arg4 viewSize:(struct CGSize )arg5 viewOrigin:(int)arg6 ;
-(unsigned int)timelineDurationInFrames;
-(void)_commonInitWithProjectPathOverride:(id)arg0 ;
-(void)_configureComponents;
-(void)_documentDidUnload_NoLock;
-(void)adjustCamera:(id)arg0 ;
-(void)adjustCutawayBorder:(id)arg0 ;
-(void)adjustCutawayFadeAnimation:(id)arg0 ;
-(void)adjustCutawayInputs:(*void)arg0 splitCropRectA:(id)arg1 splitCropRectB:(id)arg2 pipRect:(id)arg3 pipScaleFactor:(id)arg4 renderScale:(float)arg5 pipNeedsCrop:(BOOL)arg6 ;
-(void)adjustKenBurnsAnimation:(id)arg0 ;
-(void)adjustPosition:(id)arg0 ;
-(void)adjustTransitionInputs:(*void)arg0 renderScale:(float)arg1 renderer:(*void)arg2 inputANeedsBackground:(BOOL)arg3 inputBNeedsBackground:(BOOL)arg4 slideCropRectA:(id)arg5 slideCropRectB:(id)arg6 ;
-(void)applyARData:(id)arg0 time:(struct ? )arg1 ;
-(void)applyInspectableProperties;
-(void)applyInspectableProperties_NoLock;
-(void)assertDocumentIsLocked;
-(void)assertDocumentIsUnlocked;
-(void)assertDocumentStatusIsError;
-(void)assertDocumentStatusIsInProgress;
-(void)assertDocumentStatusIsLoaded;
-(void)assertDocumentStatusIsLoadedOrReady;
-(void)assertDocumentStatusIsNotStarted;
-(void)assertDocumentStatusIsReady;
-(void)assertDocumentStatusIsReadyAfterLoad:(BOOL)arg0 ;
-(void)beginEditingTextAtIndex:(unsigned int)arg0 ;
-(void)beginTextEditing;
-(void)buildDropZoneIdMap_NoLock;
-(void)clearTranscription;
-(void)dealloc;
-(void)deleteTemporalInspectableProperties;
-(void)disableBackgroundMovie:(BOOL)arg0 ;
-(void)disableCameraOverride;
-(void)enableCameraOverride:(id)arg0 projection:(id)arg1 ;
-(void)endEditingTextAtIndex:(unsigned int)arg0 ;
-(void)endTextEditing;
-(void)loadDocument_NoLock;
-(void)loadEffectInternal_NoLock;
-(void)releaseResources;
-(void)resetToDefaultTranscriptionForLocaleID:(id)arg0 ;
-(void)runEnsuringDocumentReadyAndLockingDocument:(id)arg0 ;
-(void)runEnsuringDocumentReady_NoLock:(id)arg0 ;
-(void)runWithDocument_NoLock:(id)arg0 ;
-(void)setEffectOutputAspectWithProperties_NoLock:(id)arg0 allProperties:(id)arg1 ;
-(void)setEffectOutputAspect_NoLock:(CGFloat)arg0 playableAspect:(CGFloat)arg1 playableContentMode:(int)arg2 ;
-(void)setEffectParameters:(id)arg0 ;
-(void)setForceDisableBuildAnimation:(BOOL)arg0 ;
-(void)setForceDisableLoop:(BOOL)arg0 ;
-(void)setIsFrontFacingCamera:(BOOL)arg0 ;
-(void)setLoopTimeOverride:(struct ? )arg0 ;
-(void)setLoopTimeOverrideEnabled:(BOOL)arg0 ;
-(void)setMaskPoints:(id)arg0 ;
-(void)setNodeIDToCache:(unsigned int)arg0 ;
-(void)setQuaternion:(CGFloat)arg0 ;
-(void)setRollRadians:(CGFloat)arg0 ;
-(void)setSketchStrokes:(id)arg0 ;
-(void)setTopLevelGroupTransform:(id)arg0 ;
-(void)setTopLevelOpacity:(CGFloat)arg0 ;
-(void)setTranscriptionText:(id)arg0 ;
-(void)setTransform:(id)arg0 ;
-(void)setUseLocalLoopTime:(BOOL)arg0 ;
-(void)setupPublishedParameters:(id)arg0 ;
-(void)setupTransitionParameters:(id)arg0 ;
-(void)updateInspectableProperties;
-(void)updateInspectableProperties:(id)arg0 ;
-(void)updateInspectableProperties_NoLock:(id)arg0 componentTime:(struct ? )arg1 ;
-(void)updateSketchAnimation:(id)arg0 defaultProperties:(id)arg1 time:(struct ? )arg2 ;


@end


#endif