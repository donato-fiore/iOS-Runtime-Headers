// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVEFFECT_H
#define PVEFFECT_H

@class NSString, NSMutableDictionary, NSLock, NSMutableArray, NSDictionary;
@protocol PVEffectHitArea, PVEffectTimeline, PVEffectTransformable, PVEffectTimedProperties, PVEffectTextual, PVEffectTranscript, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PVEffectTimedPropertiesComponent.h"

@interface PVEffect : NSObject <PVEffectHitArea, PVEffectTimeline, PVEffectTransformable, PVEffectTimedProperties, PVEffectTextual, PVEffectTranscript, NSSecureCoding, NSCopying>

 {
    NSString *_effectID;
    NSString *_effectType;
    NSString *_displayName;
    NSMutableDictionary *_inspectableProperties;
    NSLock *_inspectablePropertiesLock;
    *void _loadCount;
    NSMutableArray *_components;
    PVEffectTimedPropertiesComponent *_timedPropertiesComponent;
}


@property (nonatomic) BOOL conformToInputAspect; // ivar: _conformToInputAspect
@property (retain, nonatomic) NSDictionary *contentProperties; // ivar: _contentProperties
@property (retain, nonatomic) NSMutableDictionary *effectParameters; // ivar: _effectParameters
@property (nonatomic) ? effectRange; // ivar: _effectRange
@property (nonatomic) BOOL forceDisableBuildAnimation;
@property (nonatomic) BOOL forceDisableLoop;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (copy, nonatomic) NSDictionary *inspectableProperties;
@property (nonatomic) BOOL isInInteractiveMode; // ivar: _isInInteractiveMode
@property (nonatomic) BOOL isPreview; // ivar: _isPreview
@property (nonatomic) BOOL isRecording; // ivar: _isRecording
@property (nonatomic) ? loopTimeOverride;
@property (nonatomic) BOOL loopTimeOverrideEnabled;
@property (nonatomic) BOOL shouldDisableFadeOut; // ivar: _shouldDisableFadeOut
@property (nonatomic) BOOL useLocalLoopTime;


+(BOOL)effectIDIsNone:(id)arg0 ;
+(BOOL)effectIDIsRegistered:(id)arg0 ;
+(BOOL)isAllCapsFromAttributes:(id)arg0 ;
+(BOOL)isInteractiveMode;
+(BOOL)isVideoForEffectID:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(CGFloat)baselineOffsetFromAttributedString:(id)arg0 ;
+(CGFloat)textHeightFromAttributedString:(id)arg0 defaultAttributes:(id)arg1 ;
+(CGFloat)textHeightFromAttributedString:(id)arg0 defaultAttributes:(id)arg1 scale:(CGFloat)arg2 ;
+(CGFloat)xOffsetForTextTrackingFromAttributedString:(id)arg0 ;
+(Class)classForEffectID:(id)arg0 ;
+(NSInteger)verticalAlignmentFromAttributedString:(id)arg0 defaultAttributes:(id)arg1 ;
+(id)_effectRegistry;
+(id)_effectRegistryForLookup;
+(id)_registeredEffectClasses;
+(id)_registryEntryForEffectID:(id)arg0 ;
+(id)allRegisteredEffectIDs;
+(id)attributeForName:(id)arg0 fromAttributedString:(id)arg1 defaultAttributes:(id)arg2 ;
+(id)categoryForEffectID:(id)arg0 ;
+(id)defaultVideoTransitionEffectID;
+(id)descriptionForEffectID:(id)arg0 ;
+(id)displayNameForEffectID:(id)arg0 ;
+(id)displayNameForEffectType:(id)arg0 ;
+(id)effectTypeForEffectID:(id)arg0 ;
+(id)firstRegisteredEffectIDContainingSubstring:(id)arg0 ;
+(id)newEffectWithData:(id)arg0 ;
+(id)newEffectWithID:(id)arg0 ;
+(id)newEffectWithURL:(id)arg0 ;
+(id)propertiesForEffect:(id)arg0 ;
+(id)registeredEffectIDsForClass:(Class)arg0 ;
+(id)registeredEffectIDsForEffectType:(id)arg0 ;
+(id)registeredEffectIDsForEffectTypes:(id)arg0 ;
+(id)shadowFromAttributedString:(id)arg0 defaultAttributes:(id)arg1 ;
+(id)themeForEffectID:(id)arg0 ;
+(id)userVisibleEffectIDs;
+(void)_registerBuiltInEffects;
+(void)_registerEffectsInBundle:(id)arg0 atPath:(id)arg1 ;
+(void)appFinishedLaunching:(id)arg0 ;
+(void)cleanupEffectsCache;
+(void)cleanupEffectsSingletons;
+(void)clearPreviewStats;
+(void)deferEffectRegistrationForClass:(Class)arg0 ;
+(void)ensureEffectsRegistered;
+(void)handleApplicationDidReceiveMemoryWarning;
+(void)handleApplicationWillTerminate;
+(void)handleCleanupEffectsCache;
+(void)initEffectRegistry;
+(void)initEffectRegistryWithHostDelegate:(id)arg0 ;
+(void)modifyAttributedStringByAdjustingFont:(id)arg0 toFitSize:(struct CGSize )arg1 ;
+(void)modifyAttributedStringByAdjustingFontSize:(id)arg0 scale:(CGFloat)arg1 ;
+(void)modifyAttributedStringByAdjustingForNegativeLineSpacing:(id)arg0 ;
+(void)modifyAttributedStringByAdjustingForNegativeLineSpacing:(id)arg0 scale:(CGFloat)arg1 ;
+(void)modifyAttributedStringByAdjustingKerning:(id)arg0 attributes:(id)arg1 range:(struct _NSRange )arg2 scale:(CGFloat)arg3 ;
+(void)modifyAttributedStringByAdjustingOutline:(id)arg0 attributes:(id)arg1 range:(struct _NSRange )arg2 ;
+(void)modifyAttributedStringByAdjustingOutline:(id)arg0 attributes:(id)arg1 range:(struct _NSRange )arg2 scale:(CGFloat)arg3 ;
+(void)modifyAttributedStringByAdjustingShadow:(id)arg0 effectTransform:(id)arg1 ;
+(void)modifyAttributedStringByAdjustingShadow:(id)arg0 scale:(CGFloat)arg1 rotation:(CGFloat)arg2 ;
+(void)modifyAttributedStringByApplyingSubstituteFont:(id)arg0 attributes:(id)arg1 range:(struct _NSRange )arg2 ;
+(void)noteApplicationDidReceiveMemoryWarning;
+(void)noteApplicationWillTerminate;
+(void)registerEffectClass:(Class)arg0 forEffectID:(id)arg1 withProperties:(id)arg2 ;
+(void)registerEffects;
+(void)runDeferredRegistration;
+(void)setInteractiveMode:(BOOL)arg0 ;
+(void)willTerminate:(id)arg0 ;
-(BOOL)applyTimedPropertiesForTime:(struct ? )arg0 ;
-(BOOL)bounds:(struct CGRect *)arg0 atTime:(struct ? )arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 includeMasks:(BOOL)arg4 ;
-(BOOL)hasAllNecessaryResources;
-(BOOL)hasBuiltInEnvironment;
-(BOOL)hasTimedPropertiesDelegate:(id)arg0 ;
-(BOOL)hasTimedPropertiesDelegates;
-(BOOL)isCameraOverrideEnabled;
-(BOOL)isReady;
-(BOOL)isTextFlipped;
-(BOOL)isTitleCard;
-(BOOL)isTranscription;
-(BOOL)loadEffect;
-(BOOL)loadResources;
-(BOOL)resourcesAreReady;
-(BOOL)supportsExtendedRangeInputs;
-(BOOL)supportsFlippingText;
-(BOOL)supportsOrientation;
-(BOOL)transcriptionHitTest:(struct CGPoint )arg0 time:(struct ? )arg1 ;
-(BOOL)usesDefaultChannelDataEncoding;
-(BOOL)writeDefaultChannels;
-(CGFloat)timelineDurationInSeconds;
-(CGFloat)timelineFrameRate;
-(CGFloat)topLevelOpacity;
-(float)proxyRenderScale;
-(id)cameraProjection;
-(id)cameraTransform;
-(id)categoryName;
-(id)contentBundle;
-(id)contentPropertyForKey:(id)arg0 ;
-(id)contentRegistryProperties;
-(id)contentRegistryPropertyForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultAttributedString:(NSUInteger)arg0 ;
-(id)description;
-(id)descriptionOfInspectableProperties;
-(id)displayName;
-(id)effectDescription;
-(id)effectID;
-(id)effectType;
-(id)hitAreaPointsAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeDropShadow:(BOOL)arg2 scale:(struct CGPoint )arg3 viewSize:(struct CGSize )arg4 viewOrigin:(int)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentID:(id)arg0 andDictionary:(id)arg1 ;
-(id)initWithEffectID:(id)arg0 ;
-(id)inspectablePropertyForKey:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)posterFrameMarker;
-(id)textEditingBounds:(struct ? )arg0 ;
-(id)textEditingBoundsAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 useParagraphBounds:(BOOL)arg2 includeDropShadow:(BOOL)arg3 includeMasks:(BOOL)arg4 ;
-(id)textTransformsAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeTransformAnimation:(BOOL)arg2 viewSize:(struct CGSize )arg3 viewOrigin:(int)arg4 ;
-(id)textTransformsAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 viewSize:(struct CGSize )arg2 viewOrigin:(int)arg3 ;
-(id)timedPropertiesDelegates;
-(id)timelineMarkers;
-(id)timelineMarkersOfType:(int)arg0 ;
-(id)transformAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeTransformAnimation:(BOOL)arg2 viewSize:(struct CGSize )arg3 viewOrigin:(int)arg4 ;
-(id)transformAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 viewSize:(struct CGSize )arg2 viewOrigin:(int)arg3 ;
-(id)userContextForTimedPropertiesDelegate:(id)arg0 ;
-(int)orientation;
-(int)origin;
-(struct ? )componentTimeFromTimelineTime:(struct ? )arg0 ;
-(struct ? )componentTimeRangeFromTimelineTimeRange:(struct ? )arg0 ;
-(struct ? )timelineDuration;
-(struct ? )timelineFrameDuration;
-(struct ? )timelineLastFrame;
-(struct ? )timelineTimeFromComponentTime:(struct ? )arg0 ;
-(struct ? )timelineTimeRangeFromComponentTimeRange:(struct ? )arg0 ;
-(struct ? )transcriptionDuration;
-(struct CGRect )outputROI;
-(struct CGSize )outputSize;
-(struct HGRef<HGNode> )hgNodeForTime:(struct ? )arg0 inputs:(*void)arg1 renderer:(*void)arg2 igContext:(struct HGRef<PVInstructionGraphContext> )arg3 ;
-(struct HGRef<HGNode> )previewHGNodeForTime:(struct ? )arg0 inputHGNode:(struct HGRef<HGNode> )arg1 outputSize:(struct CGSize )arg2 renderer:(*void)arg3 ;
-(struct PVCGPointQuad )cornersAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeDropShadow:(BOOL)arg2 scale:(struct CGPoint )arg3 viewSize:(struct CGSize )arg4 viewOrigin:(int)arg5 ;
-(struct PVCGPointQuad )textCornersAtTime:(struct ? )arg0 index:(NSUInteger)arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 scale:(struct CGPoint )arg4 viewSize:(struct CGSize )arg5 viewOrigin:(int)arg6 ;
-(unsigned int)timelineDurationInFrames;
-(void)_configureComponents;
-(void)_copyWithZone:(struct _NSZone *)arg0 into:(id)arg1 ;
-(void)_decodeFromCoder:(id)arg0 into:(id)arg1 ;
-(void)_postInit:(id)arg0 ;
-(void)addEntriesToInspectableProperties:(id)arg0 ;
-(void)addTimedPropertiesDelegate:(id)arg0 userContext:(id)arg1 ;
-(void)applyInspectableProperties;
-(void)assertInspectablePropertiesAreLocked;
-(void)assertInspectablePropertiesAreUnlocked;
-(void)beginEditingTextAtIndex:(unsigned int)arg0 ;
-(void)beginTextEditing;
-(void)clearTranscription;
-(void)dealloc;
-(void)disableCameraOverride;
-(void)enableCameraOverride:(id)arg0 projection:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endEditingTextAtIndex:(unsigned int)arg0 ;
-(void)endTextEditing;
-(void)loadEffectOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)loadResourcesOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)releaseEffect;
-(void)releaseResources;
-(void)removeAllTimedPropertiesDelegates;
-(void)removeTimedPropertiesDelegate:(id)arg0 ;
-(void)resetToDefaultTranscriptionForLocaleID:(id)arg0 ;
-(void)runWithInspectableProperties:(id)arg0 ;
-(void)setInspectableProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setTopLevelGroupTransform:(id)arg0 ;
-(void)setTranscriptionText:(id)arg0 ;
-(void)setTransform:(id)arg0 ;
-(void)updateInspectableProperties;
-(void)updateInspectableProperties:(id)arg0 ;
-(void)updateLiveTitlePickerLoopTime:(BOOL)arg0 ;


@end


#endif