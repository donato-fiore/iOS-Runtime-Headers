// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNBUILD_H
#define KNBUILD_H

@class TSPObject, NSUUID, NSString, TSDDrawableInfo, NSArray, NSMutableDictionary, TSDEditableBezierPathSource, TSUColor, TSDBezierPathSource, NSSet;
@protocol NSCopying, TSKTransformableObject, KNInspectableAnimation, TSKModel;


#import "KNBuildAttributes.h"
#import "KNAnimationInfo.h"
#import "KNAnimationPluginMenu.h"
#import "KNBuildChunk.h"
#import "KNAbstractSlide.h"

@interface KNBuild : TSPObject <NSCopying, TSKTransformableObject, KNInspectableAnimation, TSKModel>

 {
    NSUUID *_drawableId;
    NSString *_delivery;
    KNBuildAttributes *_attributes;
    int _chunkIDSeed;
    TSDDrawableInfo *_drawable;
    NSArray *_cachedChunks;
    _NSRange _cachedActiveChunkRange;
    BOOL _cachedActiveChunkRangeIsValid;
    NSMutableDictionary *_buildChunkIDMap;
}


@property (readonly, nonatomic) NSUInteger actionAcceleration;
@property (readonly, nonatomic) TSDEditableBezierPathSource *actionMotionPathSource;
@property (readonly, nonatomic) CGFloat actionOpacity;
@property (readonly, nonatomic) CGFloat actionRotationAngle;
@property (readonly, nonatomic) NSUInteger actionRotationDirection;
@property (readonly, nonatomic) CGFloat actionScale;
@property (readonly, nonatomic) _NSRange activeChunkRange;
@property (readonly, nonatomic) NSString *animationFilter;
@property (readonly, nonatomic) KNAnimationInfo *animationInfo;
@property (readonly, nonatomic) NSInteger animationType;
@property (copy, nonatomic) KNBuildAttributes *attributes;
@property (readonly, nonatomic) BOOL canEditAnimations;
@property (readonly, nonatomic) NSUInteger chunkCount;
@property (readonly, nonatomic) NSArray *chunks;
@property (readonly, nonatomic) TSUColor *color;
@property (readonly, nonatomic) float custom3DChartRotation;
@property (readonly, nonatomic) NSInteger customAccelerationOption;
@property (readonly, nonatomic) BOOL customAlignToPath;
@property (readonly, nonatomic) BOOL customBounce;
@property (readonly, nonatomic) BOOL customCursor;
@property (readonly, nonatomic) BOOL customDecay;
@property (readonly, nonatomic) NSUInteger customDeliveryOption;
@property (readonly, nonatomic) CGFloat customDetail;
@property (readonly, nonatomic) TSDBezierPathSource *customEffectTimingCurve1;
@property (readonly, nonatomic) TSDBezierPathSource *customEffectTimingCurve2;
@property (readonly, nonatomic) TSDBezierPathSource *customEffectTimingCurve3;
@property (readonly, nonatomic) NSString *customEffectTimingCurveThemeName1;
@property (readonly, nonatomic) NSString *customEffectTimingCurveThemeName2;
@property (readonly, nonatomic) NSString *customEffectTimingCurveThemeName3;
@property (readonly, nonatomic) BOOL customIncludeEndpoints;
@property (readonly, nonatomic) NSUInteger customJiggleIntensity;
@property (readonly, nonatomic) BOOL customMotionBlur;
@property (readonly, nonatomic) NSUInteger customRepeatCount;
@property (readonly, nonatomic) NSUInteger customScale;
@property (readonly, nonatomic) CGFloat customScaleAmount;
@property (readonly, nonatomic) BOOL customShine;
@property (readonly, nonatomic) NSInteger customTextDelivery;
@property (readonly, nonatomic) CGFloat customTravelDistance;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *delivery;
@property (readonly, nonatomic) NSUInteger deliveryStyle;
@property (readonly, nonatomic) NSString *deliveryWithoutDowngrading;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger direction;
@property (readonly, nonatomic) KNAnimationPluginMenu *directionMenu;
@property (readonly, nonatomic) NSUInteger directionType;
@property (readonly, nonatomic) BOOL downgradesDelivery;
@property (retain, nonatomic) TSDDrawableInfo *drawable;
@property (readonly, nonatomic) CGFloat durationDefaultForInitialChunk;
@property (readonly, nonatomic) NSString *effect;
@property (readonly, nonatomic) NSUInteger endOffset;
@property (readonly, nonatomic) NSUInteger expectedChunkCount;
@property (readonly, nonatomic) NSUInteger firstActiveChunkIndexInBuild;
@property (readonly, nonatomic) KNBuildChunk *firstChunk;
@property (readonly, nonatomic) NSUInteger firstChunkIndexOnSlide;
@property (readonly, nonatomic) BOOL hasComplement;
@property (readonly, nonatomic) BOOL hasInactiveChunks;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int i_chunkIDSeed;
@property (readonly, nonatomic) TSDDrawableInfo *i_drawable;
@property (readonly, nonatomic) NSUUID *i_drawableId;
@property (readonly, nonatomic) BOOL i_isFullyFormedBuild;
@property (readonly, nonatomic) NSSet *inspectableAttributes;
@property (readonly, nonatomic) BOOL isActionBuild;
@property (readonly, nonatomic) BOOL isActionMotionBuild;
@property (readonly, nonatomic) BOOL isContentBuild;
@property (readonly, nonatomic) BOOL isEmphasisBuild;
@property (readonly, nonatomic) BOOL isOnSlide;
@property (readonly, nonatomic) NSUInteger lastActiveChunkIndexInBuild;
@property (readonly, nonatomic) NSUInteger lastChunkIndexOnSlide;
@property (readonly, nonatomic) NSString *localizedEffect;
@property (readonly, nonatomic) NSInteger randomNumberSeed;
@property (weak, nonatomic) KNAbstractSlide *slide; // ivar: _slide
@property (readonly, nonatomic) NSUInteger startOffset;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supports3DChartRotationAngle;
@property (readonly, nonatomic) BOOL supportsActionRotationAngle;
@property (readonly, nonatomic) BOOL supportsActionRotationDirection;
@property (readonly, nonatomic) BOOL supportsActionScale;
@property (readonly, nonatomic) BOOL supportsAlignToPath;
@property (readonly, nonatomic) BOOL supportsBounce;
@property (readonly, nonatomic) BOOL supportsCursor;
@property (readonly, nonatomic) BOOL supportsCustomDetail;
@property (readonly, nonatomic) BOOL supportsCustomEffectTimingCurve1;
@property (readonly, nonatomic) BOOL supportsCustomEffectTimingCurve2;
@property (readonly, nonatomic) BOOL supportsCustomEffectTimingCurve3;
@property (readonly, nonatomic) BOOL supportsCustomRepeats;
@property (readonly, nonatomic) BOOL supportsCustomScale;
@property (readonly, nonatomic) BOOL supportsCustomTextDelivery;
@property (readonly, nonatomic) BOOL supportsDecay;
@property (readonly, nonatomic) BOOL supportsDelivery;
@property (readonly, nonatomic) BOOL supportsDirection;
@property (readonly, nonatomic) BOOL supportsDuration;
@property (readonly, nonatomic) BOOL supportsIncludeEndpoints;
@property (readonly, nonatomic) BOOL supportsJiggleIntensity;
@property (readonly, nonatomic) BOOL supportsOpacity;
@property (readonly, nonatomic) BOOL supportsRandomNumberSeedInspection;
@property (readonly, nonatomic) BOOL supportsScaleAmount;
@property (readonly, nonatomic) BOOL supportsShine;
@property (readonly, nonatomic) BOOL supportsTravelDistance;
@property (readonly, nonatomic) NSString *title;


+(BOOL)needsObjectUUID;
+(BOOL)p_shouldExcludeAnimationName:(id)arg0 forDrawable:(id)arg1 ;
+(id)buildWithEffect:(id)arg0 animationType:(NSInteger)arg1 drawable:(id)arg2 slide:(id)arg3 ;
+(id)menuAnimationInfosForDrawableInfo:(id)arg0 animationType:(NSInteger)arg1 ;
+(id)p_drawableFromInfo:(id)arg0 ;
+(id)supportedAnimationInfosForDrawableInfo:(id)arg0 animationType:(NSInteger)arg1 ;
+(void)i_repairBuildToDrawableReferencesFromUUIDsForBuilds:(id)arg0 drawables:(id)arg1 ;
-(BOOL)isComplementOfBuild:(id)arg0 ;
-(BOOL)p_hasComplementInBuilds:(id)arg0 ;
-(BOOL)p_isDeliveryLocalized:(id)arg0 forNonNilDrawable:(id)arg1 ;
-(BOOL)p_supportsCustomEffectTimingCurveForLayoutStyles:(id)arg0 ;
-(BOOL)p_supportsCustomTextDeliveryOptionsForAttributes:(id)arg0 ;
-(BOOL)supportsAcceleration;
-(BOOL)supportsCustomCursor;
-(NSUInteger)endChunkIndexFromEndOffset:(NSUInteger)arg0 ;
-(id)chunkForIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deliveriesLocalized:(BOOL)arg0 ;
-(id)i_buildChunkForChunkIdentifier:(id)arg0 ;
-(id)i_drawableForArchiving:(BOOL)arg0 ;
-(id)i_drawableOnSlide:(id)arg0 ;
-(id)initWithSlide:(id)arg0 effect:(id)arg1 buildType:(NSInteger)arg2 context:(id)arg3 ;
-(id)p_buildChunkIDMap;
-(id)p_chunkAtIndex:(NSUInteger)arg0 ;
-(id)p_chunkTitleByTruncatingTitle:(id)arg0 toLength:(NSUInteger)arg1 ;
-(struct _NSRange )p_calculateActiveChunkRange;
-(void)didInitFromSOS;
-(void)i_deregisterBuildChunkWithChunkIdentifier:(id)arg0 ;
-(void)i_generateAndApplyNewChunkIdentifierToChunk:(id)arg0 ;
-(void)i_invalidateChunkCache;
-(void)i_registerBuildChunkIdentifierForChunk:(id)arg0 ;
-(void)i_resetChunkIDSeed;
-(void)i_rollbackChunkIDSeedForChunk:(id)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif