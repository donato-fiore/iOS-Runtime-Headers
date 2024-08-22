// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCLIPLAYOUT_H
#define PXSTORYCLIPLAYOUT_H

@class NSTimer, NSString, NSIndexSet, NSProgress;
@protocol PXGDisplayAssetSource, PXChangeObserver, PXGStringSource, PXGSolidColorSource, PXStoryDiagnosticHUDContentProvider, PXStoryClip, PXDisplayAsset, PXStoryStyleDescriptor, PXStoryResource;


#import "PXGLayout.h"
#import "PXStoryHUDViewConfiguration.h"
#import "PXStoryAnimationController.h"
#import "PXGRegionMaskEffect.h"
#import "PXStoryTiltedEdgeInsetsAnimation.h"
#import "PXGColorGradingEffect.h"
#import "PXStoryColorNormalizationAdjustment.h"
#import "PXStoryColorNormalizationEffect.h"
#import "PXGCombinedEffect.h"
#import "PXStoryTextResourceInfo.h"
#import "PXStoryRectAnimation.h"
#import "PXStoryModel.h"
#import "PXStorySmartGradientAdjustment.h"
#import "PXGTextLegibilityEffect.h"
#import "PXGDisplayAssetVideoPresentationController.h"

@interface PXStoryClipLayout : PXGLayout <PXGDisplayAssetSource, PXChangeObserver, PXGStringSource, PXGSolidColorSource, PXStoryDiagnosticHUDContentProvider>

 {
    ? _updateFlags;
    unsigned int _contentSpriteIndex;
    unsigned int _diagnosticHUDSpriteIndex;
    unsigned int _primaryDividerSpriteIndex;
    unsigned int _secondaryDividerSpriteIndex;
    unsigned char _contentVersion;
    NSInteger _resourceKind;
    CGFloat _resourceContentAspectRatio;
    unsigned char _HUDContentVersion;
    BOOL _isFeedThumbnail;
}


@property (readonly, nonatomic) PXStoryHUDViewConfiguration *HUDConfiguration; // ivar: _HUDConfiguration
@property (retain, nonatomic) NSTimer *HUDTimer; // ivar: _HUDTimer
@property (readonly, nonatomic) PXStoryAnimationController *animationController;
@property (nonatomic) NSUInteger assetPresentationStyles; // ivar: _assetPresentationStyles
@property (nonatomic) ? autoplayTimeRange; // ivar: _autoplayTimeRange
@property (retain, nonatomic) PXGRegionMaskEffect *bottomEdgeMaskEffect; // ivar: _bottomEdgeMaskEffect
@property (nonatomic) BOOL canAspectFitContent; // ivar: _canAspectFitContent
@property (nonatomic) BOOL canShowColorNormalizedContent; // ivar: _canShowColorNormalizedContent
@property (nonatomic) BOOL canShowDynamicContent; // ivar: _canShowDynamicContent
@property (nonatomic) BOOL canShowHUD; // ivar: _canShowHUD
@property (nonatomic) BOOL canShowTextLegibilityEffect; // ivar: _canShowTextLegibilityEffect
@property (retain, nonatomic) NSObject<PXStoryClip> *clip; // ivar: _clip
@property (nonatomic) ? clipTimeRange; // ivar: _clipTimeRange
@property (retain, nonatomic) PXStoryTiltedEdgeInsetsAnimation *clippingAnimation; // ivar: _clippingAnimation
@property (nonatomic) UIEdgeInsets clippingInsets; // ivar: _clippingInsets
@property (nonatomic) NSInteger colorGradeKind; // ivar: _colorGradeKind
@property (retain, nonatomic) PXGColorGradingEffect *colorGradingEffect; // ivar: _colorGradingEffect
@property (retain, nonatomic) PXStoryColorNormalizationAdjustment *colorNormalizationAdjustment; // ivar: _colorNormalizationAdjustment
@property (retain, nonatomic) PXStoryColorNormalizationEffect *colorNormalizationEffect; // ivar: _colorNormalizationEffect
@property (retain, nonatomic) PXGCombinedEffect *combinedEffect; // ivar: _combinedEffect
@property (nonatomic) float contentAlpha; // ivar: _contentAlpha
@property (nonatomic) CGRect contentBounds; // ivar: _contentBounds
@property (nonatomic) ? contentEdgeInsets; // ivar: _contentEdgeInsets
@property (nonatomic) BOOL contentPrefersPresentationTypeView; // ivar: _contentPrefersPresentationTypeView
@property (nonatomic) float contentScale; // ivar: _contentScale
@property (readonly, nonatomic) ? contentSpriteEntity;
@property (readonly, nonatomic) CGRect contentSpriteNormalizedFrameOverride; // ivar: _contentSpriteNormalizedFrameOverride
@property (readonly, nonatomic) NSInteger contentSpriteNormalizedFrameOverrideCoordinateSystem; // ivar: _contentSpriteNormalizedFrameOverrideCoordinateSystem
@property (nonatomic) ? contentsRectOverride; // ivar: _contentsRectOverride
@property (nonatomic) CGAffineTransform contentsRectTransform; // ivar: _contentsRectTransform
@property (nonatomic) ? cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) float currentAudioVolume; // ivar: _currentAudioVolume
@property (retain, nonatomic) PXStoryTextResourceInfo *currentTextResourceInfo; // ivar: _currentTextResourceInfo
@property (nonatomic) NSInteger customColorGradeKind; // ivar: _customColorGradeKind
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableClippingAnimation; // ivar: _disableClippingAnimation
@property (retain, nonatomic) NSObject<PXDisplayAsset> *displayAsset; // ivar: _displayAsset
@property (nonatomic) CGSize displayedTimelineOriginalSize; // ivar: _displayedTimelineOriginalSize
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPlayheadInAudioTimeRange; // ivar: _isPlayheadInAudioTimeRange
@property (readonly, nonatomic) BOOL isPlayheadInVideoTimeRange; // ivar: _isPlayheadInVideoTimeRange
@property (nonatomic) BOOL isReadyForAutoplay; // ivar: _isReadyForAutoplay
@property (nonatomic) BOOL isSegmentVisible; // ivar: _isSegmentVisible
@property (retain, nonatomic) PXStoryRectAnimation *kenBurnsAnimation; // ivar: _kenBurnsAnimation
@property (retain, nonatomic) PXGRegionMaskEffect *leftEdgeClippingMaskEffect; // ivar: _leftEdgeClippingMaskEffect
@property (retain, nonatomic) PXGRegionMaskEffect *leftEdgeMaskEffect; // ivar: _leftEdgeMaskEffect
@property (nonatomic) CGRect manualContentsRect; // ivar: _manualContentsRect
@property (nonatomic) CGFloat manualContentsRectAmount; // ivar: _manualContentsRectAmount
@property (retain, nonatomic) PXStoryModel *model; // ivar: _model
@property (retain, nonatomic) id *musicDuckingToken; // ivar: _musicDuckingToken
@property (nonatomic) NSInteger offsetFromCurrentSegment; // ivar: _offsetFromCurrentSegment
@property (retain, nonatomic) NSObject<PXStoryStyleDescriptor> *overrideStyleInfo; // ivar: _overrideStyleInfo
@property (nonatomic) ? preferredPresentedContentsRect; // ivar: _preferredPresentedContentsRect
@property (nonatomic) ? presentedContentsRect; // ivar: _presentedContentsRect
@property (nonatomic) CGSize presentedKenBurnsAnimationContentSize; // ivar: _presentedKenBurnsAnimationContentSize
@property (nonatomic) ? presentedKenBurnsAnimationCurrentRect; // ivar: _presentedKenBurnsAnimationCurrentRect
@property (nonatomic) CGFloat primaryDividerAlpha; // ivar: _primaryDividerAlpha
@property (nonatomic) CGRect primaryDividerBounds; // ivar: _primaryDividerBounds
@property (nonatomic) CGSize primaryDividerScale; // ivar: _primaryDividerScale
@property (nonatomic) CGFloat relativeZPositionAboveLegibilityGradients; // ivar: _relativeZPositionAboveLegibilityGradients
@property (retain, nonatomic) NSObject<PXStoryResource> *resource; // ivar: _resource
@property (retain, nonatomic) PXGRegionMaskEffect *rightEdgeClippingMaskEffect; // ivar: _rightEdgeClippingMaskEffect
@property (retain, nonatomic) PXGRegionMaskEffect *rightEdgeMaskEffect; // ivar: _rightEdgeMaskEffect
@property (nonatomic) CGFloat secondaryDividerAlpha; // ivar: _secondaryDividerAlpha
@property (nonatomic) CGRect secondaryDividerBounds; // ivar: _secondaryDividerBounds
@property (nonatomic) CGSize secondaryDividerScale; // ivar: _secondaryDividerScale
@property (copy, nonatomic) NSIndexSet *segmentIdentifiers; // ivar: _segmentIdentifiers
@property (nonatomic) BOOL shouldAspectFitContent; // ivar: _shouldAspectFitContent
@property (nonatomic) BOOL shouldAutoplay; // ivar: _shouldAutoplay
@property (retain, nonatomic) PXStorySmartGradientAdjustment *smartGradientAdjustment; // ivar: _smartGradientAdjustment
@property (readonly) Class superclass;
@property (retain, nonatomic) NSProgress *textFrameProgress; // ivar: _textFrameProgress
@property (retain, nonatomic) PXGTextLegibilityEffect *textLegibilityEffect; // ivar: _textLegibilityEffect
@property (nonatomic) CGSize textResourceContentSize; // ivar: _textResourceContentSize
@property (nonatomic) unsigned char textResourceContentVersion; // ivar: _textResourceContentVersion
@property (nonatomic) CGRect textResourceSpriteFrame; // ivar: _textResourceSpriteFrame
@property (weak, nonatomic) PXGLayout *timelineLayout; // ivar: _timelineLayout
@property (retain, nonatomic) PXGRegionMaskEffect *topEdgeMaskEffect; // ivar: _topEdgeMaskEffect
@property (nonatomic) BOOL useContentBoundsForContentEdgeInsets; // ivar: _useContentBoundsForContentEdgeInsets
@property (retain, nonatomic) PXGDisplayAssetVideoPresentationController *videoPresentationController; // ivar: _videoPresentationController
@property (nonatomic) BOOL wantsHUD; // ivar: _wantsHUD
@property (readonly, nonatomic) BOOL wasPlayheadMovedManually; // ivar: _wasPlayheadMovedManually


+(BOOL)shouldContinueKenBurnsAnimationFromPreviousPresentedContentSize:(struct CGSize )arg0 toCurrentContentSize:(struct CGSize )arg1 ;
-(BOOL)_isDisplayingContentOfAsset:(id)arg0 ;
-(BOOL)_isDisplayingTextResourceType:(NSInteger)arg0 ;
-(BOOL)isDisplayingSubtitle;
-(BOOL)isDisplayingTitle;
-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)_effectiveColorGradeKind;
-(NSInteger)stringDrawingOptionsForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)verticalAlignmentForStringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSUInteger)_titleKind;
-(NSUInteger)axFocusabilityForSpriteAtIndex:(unsigned int)arg0 ;
-(NSUInteger)desiredPlaceholderStyleInLayout:(id)arg0 ;
-(NSUInteger)presentationIntentForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 inLayout:(id)arg1 ;
-(NSUInteger)supportedDisplayAssetPresentationStylesInLayout:(id)arg0 ;
-(id)_effectWithClass:(Class)arg0 reusableInstance:(id)arg1 ;
-(id)_maskEffectForEdge:(unsigned int)arg0 tiltedInset:(struct ? )arg1 bounds:(struct CGRect )arg2 reusableInstance:(id)arg3 ;
-(id)_textForHUD;
-(id)adjustmentForDisplayAsset:(id)arg0 spriteIndex:(unsigned int)arg1 inLayout:(id)arg2 ;
-(id)attributedStringForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axSpriteIndexes;
-(id)axVisibleSpriteIndexes;
-(id)colorAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)diagnosticErrorsByComponentForHUDType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 displaySize:(struct CGSize )arg1 ;
-(id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 inLayout:(id)arg1 ;
-(id)drawingContextForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)init;
-(id)itemPlacementSourceIdentifier;
-(id)spriteReferenceForContentSprite;
-(id)stringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)stringAttributesAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)videoPresentationControllerForDisplayAsset:(id)arg0 spriteIndex:(unsigned int)arg1 inLayout:(id)arg2 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(struct CGRect )_denormalizeRect:(struct CGRect )arg0 coordinateSystem:(NSInteger)arg1 ;
-(struct CGRect )_normalizeRect:(struct CGRect )arg0 coordinateSystem:(NSInteger)arg1 ;
-(struct CGRect )_referenceRectForNormalizedCoordinateSystem:(NSInteger)arg0 ;
-(struct CGSize )attributedStringBoundingSizeForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(struct UIEdgeInsets )paddingForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(void)_invalidateAnimations;
-(void)_invalidateAssetPresentationStyles;
-(void)_invalidateColorGradeKind;
-(void)_invalidateColorGradingEffect;
-(void)_invalidateColorNormalizationEffect;
-(void)_invalidateCombinedEffect;
-(void)_invalidateContent;
-(void)_invalidateContentMode;
-(void)_invalidateContentStyle;
-(void)_invalidateContentVersion;
-(void)_invalidateDisplayAsset;
-(void)_invalidateEdgeMaskEffects;
-(void)_invalidateHUD;
-(void)_invalidateIsSegmentVisible;
-(void)_invalidateModelPresentedTextProperties;
-(void)_invalidateMusicDucking;
-(void)_invalidateOffsetFromCurrentSegment;
-(void)_invalidatePlayheadState;
-(void)_invalidateResource;
-(void)_invalidateSegmentIdentifiers;
-(void)_invalidateShouldAutoplay;
-(void)_invalidateSmartGradientAdjustment;
-(void)_invalidateTextLegibilityEffect;
-(void)_invalidateTextResourceSpriteFrame;
-(void)_invalidateVideoPresentationController;
-(void)_invalidateVideoPresentationControllerState;
-(void)_invalidateWantsHUD;
-(void)_updateAnimations;
-(void)_updateAssetPresentationStyles;
-(void)_updateColorGradeKind;
-(void)_updateColorGradingEffect;
-(void)_updateColorNormalizationEffect;
-(void)_updateCombinedEffect;
-(void)_updateContent;
-(void)_updateContentMode;
-(void)_updateContentStyle;
-(void)_updateDisplayAsset;
-(void)_updateEdgeMaskEffects;
-(void)_updateHUD;
-(void)_updateIsSegmentVisible;
-(void)_updateModelPresentedTextProperties;
-(void)_updateMusicDucking;
-(void)_updateOffsetFromCurrentSegment;
-(void)_updatePlayheadState;
-(void)_updateResource;
-(void)_updateSegmentIdentifiers;
-(void)_updateShouldAutoplay;
-(void)_updateSmartGradientAdjustment;
-(void)_updateTextLegibilityEffect;
-(void)_updateTextResourceSpriteFrame;
-(void)_updateVideoPresentationController;
-(void)_updateVideoPresentationControllerState;
-(void)_updateWantsHUD;
-(void)_validateVideoPlaybackState;
-(void)alphaDidChange;
-(void)contentSizeDidChange;
-(void)dealloc;
-(void)didUpdate;
-(void)entityManagerDidChange;
-(void)getDetailedPresentedPlacement:(id)arg0 forItemReference:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceDepthDidChange;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)setDetailedPlacementOverride:(id)arg0 forItemReference:(id)arg1 ;
-(void)update;
-(void)willUpdate;


@end


#endif