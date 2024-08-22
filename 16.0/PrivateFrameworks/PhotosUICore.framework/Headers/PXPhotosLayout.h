// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSLAYOUT_H
#define PXPHOTOSLAYOUT_H

@class PXGLayout<PXPhotosSectionedLayoutHeader>, NSString, UIView, NSDictionary;
@protocol PXChangeObserver, PXPhotosSectionHeaderLayoutProviderInvalidationDelegate, PXGStringSource, PXGNamedImageSource, PXPhotosLayoutDelegate, PXPhotosSectionBodyLayoutProvider, PXPhotosSectionHeaderLayoutProvider;


#import "PXGStackLayout.h"
#import "PXNumberAnimator.h"
#import "PXPhotosSectionedLayout.h"
#import "PXGSingleViewLayout.h"
#import "PXPhotosLayoutSpecManager.h"
#import "PXPhotosViewModel.h"

@interface PXPhotosLayout : PXGStackLayout <PXChangeObserver, PXPhotosSectionHeaderLayoutProviderInvalidationDelegate, PXGStringSource, PXGNamedImageSource>

 {
    ? _updateFlags;
    ? _postUpdateFlags;
    BOOL _isUpdatingSublayouts;
    unsigned short _headerTitleVersion;
    unsigned short _backgroundGradientResizableCapInsetsIndex;
    PXNumberAnimator *_alternateAppearanceMixAnimator;
    BOOL _managesHeaderSprites;
    BOOL _presentedVisibility;
    PXPhotosSectionedLayout *_sectionedLayout;
    BOOL _footerHasAppearedInitially;
    PXNumberAnimator *_headerFooterAlphaAnimator;
    PXGLayout<PXPhotosSectionedLayoutHeader> *_topHeaderLayout;
    PXGSingleViewLayout *_headerLayout;
    PXGSingleViewLayout *_footerLayout;
    ? _headerProviderRespondsTo;
}


@property (nonatomic) BOOL alignsHeaderTitleWithLayoutMargins; // ivar: _alignsHeaderTitleWithLayoutMargins
@property (nonatomic) CGFloat backgroundGradientAdditionalCoverage; // ivar: _backgroundGradientAdditionalCoverage
@property (nonatomic) CGFloat backgroundSpriteHeight; // ivar: _backgroundSpriteHeight
@property (readonly, nonatomic) PXFloatRange bottomCollapsibleArea;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXPhotosLayoutDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *headerSubtitle; // ivar: _headerSubtitle
@property (copy, nonatomic) NSDictionary *headerSubtitleOverBackgroundAttributes; // ivar: _headerSubtitleOverBackgroundAttributes
@property (copy, nonatomic) NSDictionary *headerSubtitleOverContentAttributes; // ivar: _headerSubtitleOverContentAttributes
@property (copy, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (nonatomic) CGFloat headerTitleBaselineToBottom; // ivar: _headerTitleBaselineToBottom
@property (readonly, nonatomic) NSInteger headerTitleDrawingOptions; // ivar: _headerTitleDrawingOptions
@property (nonatomic) CGPoint headerTitleOrigin; // ivar: _headerTitleOrigin
@property (copy, nonatomic) NSDictionary *headerTitleOverBackgroundAttributes; // ivar: _headerTitleOverBackgroundAttributes
@property (copy, nonatomic) NSDictionary *headerTitleOverContentAttributes; // ivar: _headerTitleOverContentAttributes
@property (nonatomic) CGSize headerTitleSize; // ivar: _headerTitleSize
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (nonatomic) NSInteger pendingHideAnimationType; // ivar: _pendingHideAnimationType
@property (retain, nonatomic) NSObject<PXPhotosSectionBodyLayoutProvider> *sectionBodyProvider; // ivar: _sectionBodyProvider
@property (retain, nonatomic) NSObject<PXPhotosSectionHeaderLayoutProvider> *sectionHeaderProvider; // ivar: _sectionHeaderProvider
@property (readonly, nonatomic) PXPhotosLayoutSpecManager *specManager; // ivar: _specManager
@property (nonatomic) CGFloat statusBarHeight; // ivar: _statusBarHeight
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXFloatRange topCollapsibleArea;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel; // ivar: _viewModel
@property (nonatomic) BOOL wantsHeaderInSafeArea; // ivar: _wantsHeaderInSafeArea


-(BOOL)_shouldShowSectionedLayout;
-(BOOL)appliesAlphaToSublayouts;
-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)stringDrawingOptionsForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(NSInteger)verticalAlignmentForStringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSUInteger)fullyVisibleEdgesWithDefaultTolerance;
-(id)attributedStringForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axSpriteIndexes;
-(id)createAnchorForScrollingToInitialPosition;
-(id)createDefaultAnimationForCurrentContext;
-(id)dateIntervalFutureForContentInRect:(SEL)arg0 type:(struct CGRect )arg1 ;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)imageConfigurationAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)initWithViewModel:(id)arg0 specManager:(id)arg1 ;
-(id)locationNamesFutureForContentInRect:(SEL)arg0 ;
-(id)presentedDataSource;
-(id)presentedItemsGeometryForSection:(NSUInteger)arg0 inDataSource:(id)arg1 ;
-(id)regionOfInterestForAssetReference:(id)arg0 ;
-(id)stringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)stringAttributesAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)topmostSectionHeaderSnapshotInRect:(struct CGRect )arg0 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(struct UIEdgeInsets )additionalSafeAreaInsetsForSublayout:(id)arg0 ;
-(struct UIEdgeInsets )paddingForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(void)_informTopHeaderLayoutAboutDataSourceChange;
-(void)_invalidateContentBelowTitle;
-(void)_invalidateFooter;
-(void)_invalidateHeader;
-(void)_invalidateHeaderAttributes;
-(void)_invalidateHeaderMeasurements;
-(void)_invalidateHeaderTitle;
-(void)_invalidateLocalSprites;
-(void)_invalidateLocalSpritesAlpha;
-(void)_invalidateLocalSpritesCount;
-(void)_invalidateSectionedLayout;
-(void)_invalidateTopHeaderLayout;
-(void)_updateContentBelowTitle;
-(void)_updateFooter;
-(void)_updateHeader;
-(void)_updateHeaderAttributes;
-(void)_updateHeaderFooterAlphaAnimator;
-(void)_updateHeaderMeasurements;
-(void)_updateHeaderOrigin;
-(void)_updateHeaderTitle;
-(void)_updateLocalSprites;
-(void)_updateLocalSpritesAlpha;
-(void)_updateLocalSpritesCount;
-(void)_updateSectionedLayout;
-(void)_updateTopHeaderLayout;
-(void)didUpdate;
-(void)enumerateItemsGeometriesInRect:(struct CGRect )arg0 dataSource:(id)arg1 usingBlock:(id)arg2 ;
-(void)hideSpritesForObjectReferences:(id)arg0 ;
-(void)invalidateFooterHeight;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photosSectionHeaderLayoutInvalidateConfiguredLayouts:(id)arg0 ;
-(void)referenceSizeDidChange;
-(void)safeAreaInsetsDidChange;
-(void)screenScaleDidChange;
-(void)update;
-(void)visibleRectDidChange;
-(void)willUpdate;


@end


#endif