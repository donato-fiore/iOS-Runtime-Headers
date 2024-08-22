// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCURATEDLIBRARYSECTIONHEADERLAYOUT_H
#define PXCURATEDLIBRARYSECTIONHEADERLAYOUT_H

@class NSArray, NSMutableIndexSet, NSAttributedString, NSString, NSDictionary, NSSet;
@protocol PXGTitleSubtitleSource, PXGViewSource, PXGNamedImageSource, PXChangeObserver, PXLibrarySummaryOutputPresenter, OS_dispatch_queue;


#import "PXGLayout.h"
#import "PXNumberAnimator.h"
#import "PXAssetCollectionReference.h"
#import "PXCuratedLibraryActionPerformer.h"
#import "PXTitleSubtitleLabelSpec.h"
#import "PXCuratedLibrarySectionHeaderLayoutSpec.h"
#import "PXCuratedLibraryEllipsisButtonActionPerformer.h"
#import "PXCuratedLibraryFilterActionPerformer.h"
#import "PXGLayoutGuide.h"

@interface PXCuratedLibrarySectionHeaderLayout : PXGLayout <PXGTitleSubtitleSource, PXGViewSource, PXGNamedImageSource, PXChangeObserver, PXLibrarySummaryOutputPresenter>

 {
    ? _updateFlags;
    unsigned short _textVersion;
    unsigned short _ellipsisButtonVersion;
    unsigned short _filterButtonVersion;
    unsigned short _filterIndicatorButtonVersion;
    unsigned short _selectionTitleVersion;
    unsigned short _selectButtonVersion;
    unsigned short _cancelButtonVersion;
    unsigned short _toggleAspectFitButtonVersion;
    unsigned short _zoomInButtonVersion;
    unsigned short _zoomOutButtonVersion;
    unsigned short _controlStackButtonVersion;
    unsigned short _showSidebarButtonVersion;
    NSArray *_itemIdentifierBySpriteIndex;
    BOOL _presentedVisibility;
    BOOL _presentedTitleVisibility;
    NSMutableIndexSet *_axSpriteIndexes;
    unsigned short _gradientResizableCapInsetsIndex;
    CGSize _cachedSizeByButtonIdentifier;
    CGSize _cachedExternalTrailingButtonsSize;
    CGSize _cachedExternalLeadingButtonsSize;
    CGSize _cachedExternalTopButtonsSize;
    CGSize _cachedLongestPossibleSelectionTitleSize;
    NSInteger _asyncDateGeneration;
    NSObject<OS_dispatch_queue> *_asyncDateQueue;
}


@property (nonatomic) CGFloat alpha;
@property (readonly, nonatomic) PXNumberAnimator *alternateAppearanceMixAnimator; // ivar: _alternateAppearanceMixAnimator
@property (retain, nonatomic) PXAssetCollectionReference *assetCollectionReference; // ivar: _assetCollectionReference
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (nonatomic) CGFloat buttonsAlpha; // ivar: _buttonsAlpha
@property (nonatomic) CGFloat buttonsMaxY; // ivar: _buttonsMaxY
@property (nonatomic) float buttonsZIndex; // ivar: _buttonsZIndex
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *cancelButtonActionPerformer; // ivar: _cancelButtonActionPerformer
@property (nonatomic) BOOL controlStackButtonSelected; // ivar: _controlStackButtonSelected
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *defaultAttributes;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXTitleSubtitleLabelSpec *effectiveOverBackgroundTitleSubtitleLabelSpec; // ivar: _effectiveOverBackgroundTitleSubtitleLabelSpec
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *effectiveSpec; // ivar: _effectiveSpec
@property (readonly, nonatomic) PXTitleSubtitleLabelSpec *effectiveTitleSubtitleLabelSpec; // ivar: _effectiveTitleSubtitleLabelSpec
@property (retain, nonatomic) PXCuratedLibraryEllipsisButtonActionPerformer *ellipsisButtonActionPerformer; // ivar: _ellipsisButtonActionPerformer
@property (nonatomic) BOOL ellipsisButtonHighlighted; // ivar: _ellipsisButtonHighlighted
@property (readonly, nonatomic) NSDictionary *emphasizedAttributes;
@property (copy, nonatomic) NSArray *externalLeadingButtonConfigurations; // ivar: _externalLeadingButtonConfigurations
@property (copy, nonatomic) NSArray *externalTopButtonConfigurations; // ivar: _externalTopButtonConfigurations
@property (copy, nonatomic) NSArray *externalTrailingButtonConfigurations; // ivar: _externalTrailingButtonConfigurations
@property (retain, nonatomic) PXCuratedLibraryFilterActionPerformer *filterActionPerformer; // ivar: _filterActionPerformer
@property (copy, nonatomic) NSString *filterButtonCaption; // ivar: _filterButtonCaption
@property (nonatomic) BOOL filterButtonHighlighted; // ivar: _filterButtonHighlighted
@property (copy, nonatomic) NSString *filterButtonTitle; // ivar: _filterButtonTitle
@property (nonatomic) BOOL filterIndicatorButtonHighlighted; // ivar: _filterIndicatorButtonHighlighted
@property (nonatomic) CGFloat gradientAlpha; // ivar: _gradientAlpha
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lateralMargin; // ivar: _lateralMargin
@property (retain, nonatomic) PXGLayoutGuide *leadingButtonsLayoutGuide; // ivar: _leadingButtonsLayoutGuide
@property (copy, nonatomic) NSString *longestPossibleSelectionTitle; // ivar: _longestPossibleSelectionTitle
@property (nonatomic) CGFloat maxPossibleHeight; // ivar: _maxPossibleHeight
@property (nonatomic) NSInteger safeAreaBehavior; // ivar: _safeAreaBehavior
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *selectButtonActionPerformer; // ivar: _selectButtonActionPerformer
@property (copy, nonatomic) NSString *selectButtonTitle; // ivar: _selectButtonTitle
@property (copy, nonatomic) NSString *selectionTitle; // ivar: _selectionTitle
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *showSidebarButtonActionPerformer; // ivar: _showSidebarButtonActionPerformer
@property (nonatomic) BOOL showsBackgroundGradient; // ivar: _showsBackgroundGradient
@property (nonatomic) BOOL showsDebugDescription; // ivar: _showsDebugDescription
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *spec; // ivar: _spec
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) CGFloat titleAlpha; // ivar: _titleAlpha
@property (readonly, nonatomic) CGRect titleSubtitleFrame; // ivar: _titleSubtitleFrame
@property (nonatomic) CGFloat titleSubtitleLastBaseline; // ivar: _titleSubtitleLastBaseline
@property (nonatomic) CGFloat titleSubtitleTopSpacing; // ivar: _titleSubtitleTopSpacing
@property (readonly, nonatomic) NSUInteger toggleAspectFitButton;
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *toggleAspectFitButtonActionPerformer; // ivar: _toggleAspectFitButtonActionPerformer
@property (copy, nonatomic) NSSet *toggleAspectFitButtonPossibleTitles; // ivar: _toggleAspectFitButtonPossibleTitles
@property (copy, nonatomic) NSString *toggleAspectFitButtonTitle; // ivar: _toggleAspectFitButtonTitle
@property (nonatomic) NSInteger toggleAspectFitCompactButtonSymbol; // ivar: _toggleAspectFitCompactButtonSymbol
@property (nonatomic) BOOL usesCompactToggleAspectFitButton; // ivar: _usesCompactToggleAspectFitButton
@property (nonatomic) BOOL wantsDisclosureIndicator;
@property (nonatomic) BOOL wantsOverBackgroundAppearance; // ivar: _wantsOverBackgroundAppearance
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *zoomInButtonActionPerformer; // ivar: _zoomInButtonActionPerformer
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *zoomOutButtonActionPerformer; // ivar: _zoomOutButtonActionPerformer


-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)_configurationForButton:(NSUInteger)arg0 ;
-(id)_configurationForButton:(NSUInteger)arg0 overBackgroundVariant:(BOOL)arg1 ;
-(id)_effectiveTitleSubtitleLabelSpec:(id)arg0 ;
-(id)_selectionTitleLabelConfigurationWithTitle:(id)arg0 spec:(id)arg1 ;
-(id)_titleSubtitleSpecForItemIdentifier:(id)arg0 ;
-(id)axSpriteIndexes;
-(id)axSpriteIndexesInRect:(struct CGRect )arg0 ;
-(id)configurationForButton:(NSUInteger)arg0 spec:(id)arg1 ;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)imageConfigurationAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)init;
-(id)objectReferenceForSpriteIndex:(unsigned int)arg0 ;
-(id)subtitleForSpriteAtIndex:(unsigned int)arg0 ;
-(id)titleForSpriteAtIndex:(unsigned int)arg0 ;
-(id)titleSubtitleSpecForSpriteAtIndex:(unsigned int)arg0 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(struct CGSize )_sizeOfButton:(NSUInteger)arg0 ;
-(struct UIEdgeInsets )safeAreaInsetsWithCurrentBehavior;
-(unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg0 inDirection:(NSUInteger)arg1 ;
-(unsigned int)spriteIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(void)_discardAllCachedButtonSizes;
-(void)_handleAsyncDateDescription:(id)arg0 placement:(NSInteger)arg1 generation:(NSInteger)arg2 ;
-(void)_invalidateEllipsisButton;
-(void)_invalidateFilterButton;
-(void)_invalidateFilterIndicatorButton;
-(void)_updateButtonActionPerformers;
-(void)_updateEffectiveSpec;
-(void)_updateLastBaseline;
-(void)_updateSpriteTags;
-(void)_updateSprites;
-(void)_updateSpritesAlpha;
-(void)didRenderTitleAndSubtitleSpriteAtIndex:(unsigned int)arg0 layoutVersion:(NSInteger)arg1 withLastBaseline:(CGFloat)arg2 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceOptionsDidChange;
-(void)referenceSizeDidChange;
-(void)safeAreaInsetsDidChange;
-(void)screenScaleDidChange;
-(void)setVisibleRect:(struct CGRect )arg0 ;
-(void)update;
-(void)visibleRectDidChange;


@end


#endif