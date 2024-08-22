// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFORYOUSUGGESTIONGADGETCONTENTVIEW_H
#define PXFORYOUSUGGESTIONGADGETCONTENTVIEW_H

@class UIView, SLAttributionView, NSString, UIImage, NSError, SLHighlight, UILabel;
@protocol PXPhotoLibraryUIChangeObserver, PXSettingsKeyObserver, PXFocusInfoProvider, PXDisplayAsset, PXDisplaySuggestion;


#import "PXDisplayAssetUIView.h"
#import "PXUIAssetBadgeView.h"
#import "PXFocusInfo.h"
#import "PXGadgetSpec.h"
#import "PXUIMediaProvider.h"
#import "PXRoundedCornerOverlayView.h"

@interface PXForYouSuggestionGadgetContentView : UIView <PXPhotoLibraryUIChangeObserver, PXSettingsKeyObserver, PXFocusInfoProvider>

 {
    ? _updateFlags;
    BOOL _forceAssetContentReload;
}


@property (nonatomic) BOOL assetContentHidden; // ivar: _assetContentHidden
@property (readonly, nonatomic) CGRect assetContentsRect;
@property (retain, nonatomic) PXDisplayAssetUIView *assetView; // ivar: _assetView
@property (retain, nonatomic) SLAttributionView *attributionView; // ivar: _attributionView
@property (nonatomic) NSUInteger badgeTypes; // ivar: _badgeTypes
@property (retain, nonatomic) PXUIAssetBadgeView *badgeView; // ivar: _badgeView
@property (nonatomic) BOOL blursDegradedContent; // ivar: _blursDegradedContent
@property (copy, nonatomic) NSString *caption; // ivar: _caption
@property (readonly, nonatomic) UIImage *currentAssetImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) PXFocusInfo *focusInfo;
@property (copy, nonatomic) id *focusInfoChangeHandler; // ivar: _focusInfoChangeHandler
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SLHighlight *highlight; // ivar: _highlight
@property (readonly, nonatomic) BOOL isDisplayingFullQualityContent;
@property (retain, nonatomic) NSObject<PXDisplayAsset> *keyAsset; // ivar: _keyAsset
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) PXRoundedCornerOverlayView *roundedOverlayView; // ivar: _roundedOverlayView
@property (nonatomic) BOOL shouldShowSyndicationAttributionView; // ivar: _shouldShowSyndicationAttributionView
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) NSObject<PXDisplaySuggestion> *suggestion; // ivar: _suggestion
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(CGFloat)scaledSuggestionBaselineDistance;
+(CGFloat)scaledTitleBaselineDistance;
+(CGFloat)scaledTitleWithSuggestionBaselineDistance;
+(id)_gaussianBlurFilter;
+(id)darkPlaceholderFilters;
+(id)lightPlaceholderFilters;
+(struct CGSize )sizeThatFits:(struct CGSize )arg0 withSuggestion:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ;
+(void)preloadResources;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)previewAssetView;
-(id)syndicationReplyActionFromAttributionView;
-(struct CGRect )_assetFrameInBounds:(struct CGRect )arg0 ;
-(struct CGRect )assetContentBoundsInCoordinateSpace:(id)arg0 ;
-(struct CGSize )_calculateLayoutWithInputSize:(struct CGSize )arg0 apply:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_handleChangedAsset:(id)arg0 ;
-(void)_updateAssetView;
-(void)_updateAssetViewAnimatedContentEnabled;
-(void)_updateAssetViewPlaceholderFilters;
-(void)_updateAttributionView;
-(void)_updateBadgeContents;
-(void)_updateBadgeViews;
-(void)_updateIfNeeded;
-(void)_updateRoundedCornerOverlayView;
-(void)_updateTitleFont;
-(void)_updateTitleLabelVisibility;
-(void)dealloc;
-(void)layoutSubviews;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif