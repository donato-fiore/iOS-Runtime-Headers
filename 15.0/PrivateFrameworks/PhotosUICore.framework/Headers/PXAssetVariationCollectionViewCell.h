// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXASSETVARIATIONCOLLECTIONVIEWCELL_H
#define PXASSETVARIATIONCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UILabel, UIView, NSProgress, NSString, NSError, UIImage, UIColor;
@protocol PXMutableAssetVariationCollectionViewCell, PXChangeObserver, PXAssetEditOperationManagerObserver;


#import "PXLoadingFailureBadgeView.h"
#import "PXRoundProgressView.h"
#import "PXAssetEditOperationManager.h"
#import "PXAssetVariationRenderProvider.h"
#import "PXAssetVariationRenderResult.h"
#import "PXWidgetSpec.h"
#import "PXAssetVariationOption.h"

@interface PXAssetVariationCollectionViewCell : UICollectionViewCell <PXMutableAssetVariationCollectionViewCell, PXChangeObserver, PXAssetEditOperationManagerObserver>

 {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    ? _needsUpdateFlags;
    UILabel *_titleLabel;
    UIView *_backgroundView;
    UIView *_variationView;
    UIView *_selectedDecorationView;
    PXLoadingFailureBadgeView *_failureView;
    PXRoundProgressView *_loadingProgressView;
}


@property (retain, nonatomic, setter=_setRenderProgress:) NSProgress *_renderProgress; // ivar: __renderProgress
@property (readonly, nonatomic) NSInteger assetVariationContentMode; // ivar: _assetVariationContentMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat distanceBetweenLastBaselineAndBottom;
@property (readonly, nonatomic) PXAssetEditOperationManager *editOperationManager; // ivar: _editOperationManager
@property (retain, nonatomic, setter=_setError:) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (readonly, nonatomic) CGFloat placeholderOverlayAlpha; // ivar: _placeholderOverlayAlpha
@property (readonly, nonatomic, getter=isPlaybackAllowed) BOOL playbackAllowed; // ivar: _playbackAllowed
@property (readonly, nonatomic) PXAssetVariationRenderProvider *renderProvider; // ivar: _renderProvider
@property (readonly, nonatomic) PXAssetVariationRenderResult *renderResult; // ivar: _renderResult
@property (readonly, nonatomic) UIColor *selectedTitleColor; // ivar: _selectedTitleColor
@property (readonly, nonatomic) PXWidgetSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *titleColor; // ivar: _titleColor
@property (readonly, nonatomic) PXAssetVariationOption *variationOption; // ivar: _variationOption


+(id)placeholderFiltersWithOverlayWhite:(CGFloat)arg0 ;
+(void)preloadResources;
-(BOOL)_needsUpdate;
-(CGFloat)distanceBetweenPreviewBottomAndLastBaseline;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)loadVariationView;
-(struct CGSize )sizeThatFitsPreviewSize:(struct CGSize )arg0 ;
-(void)_PXAssetVariationCollectionViewCellCommonInit;
-(void)_invalidateError;
-(void)_invalidateFailureView;
-(void)_invalidateProgressView;
-(void)_invalidateRenderProgress;
-(void)_invalidateSelectedView;
-(void)_invalidateTitleLabel;
-(void)_invalidateVariationView;
-(void)_setNeedsUpdate;
-(void)_updateErrorIfNeeded;
-(void)_updateFailureViewIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateProgressViewIfNeeded;
-(void)_updateRenderProgressIfNeeded;
-(void)_updateSelectedViewIfNeeded;
-(void)_updateTitleLabelIfNeeded;
-(void)_updateVariationViewIfNeeded;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performChanges:(id)arg0 ;
-(void)prepareForReuse;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateError;
-(void)updateVariationView;


@end


#endif