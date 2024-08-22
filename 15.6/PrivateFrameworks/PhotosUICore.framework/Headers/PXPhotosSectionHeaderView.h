// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOSSECTIONHEADERVIEW_H
#define PXPHOTOSSECTIONHEADERVIEW_H

@class UICollectionReusableView, UILabel, UIImageView, UIVisualEffectView, UIView, NSString, UIImage, NSDate, NSArray;
@protocol PXGReusableView, PXPhotosSectionHeaderViewDelegate, NSCopying;


#import "PXCuratedLibraryOverlayButton.h"
#import "PXCuratedLibrarySectionHeaderLayoutSpec.h"

@interface PXPhotosSectionHeaderView : UICollectionReusableView <PXGReusableView>

 {
    UILabel *_titleLabel;
    UILabel *_locationsLabel;
    UILabel *_separatorLabel;
    UILabel *_dateLabel;
    UIImageView *_disclosureIconView;
    PXCuratedLibraryOverlayButton *_actionButton;
    BOOL _highlightViewVisible;
    BOOL _inLayoutTransition;
    BOOL _performingBatchDateDependentUpdate;
    BOOL _dateDependentPropertiesDidChange;
    UIVisualEffectView *_visualEffectView;
    UIImageView *_backgroundImageView;
    UIView *_highlightView;
    BOOL _useYearOnlyForDefaultTitle;
}


@property (copy, nonatomic) NSString *actionButtonTitle; // ivar: _actionButtonTitle
@property (nonatomic) BOOL allowsPhotosDetailsInteraction; // ivar: _allowsPhotosDetailsInteraction
@property (copy, nonatomic) NSString *backdropViewGroupName; // ivar: _backdropViewGroupName
@property (retain, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (nonatomic) CGFloat backgroundImageAlpha; // ivar: _backgroundImageAlpha
@property (nonatomic) CGFloat backgroundImageOverhang; // ivar: _backgroundImageOverhang
@property (nonatomic) NSUInteger backgroundStyle; // ivar: _backgroundStyle
@property (readonly, nonatomic) CGFloat baselineToBottomSpacing;
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *buttonSpec; // ivar: _buttonSpec
@property (nonatomic) CGRect clippingRect;
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (weak, nonatomic) NSObject<PXPhotosSectionHeaderViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) UIEdgeInsets highlightInsets; // ivar: _highlightInsets
@property (readonly, nonatomic) NSDate *sectionEndDate; // ivar: _sectionEndDate
@property (nonatomic) NSInteger sectionIndex; // ivar: _sectionIndex
@property (retain, nonatomic) NSArray *sectionLocations; // ivar: _sectionLocations
@property (readonly, nonatomic) NSDate *sectionStartDate; // ivar: _sectionStartDate
@property (copy, nonatomic) NSString *sectionTitle; // ivar: _sectionTitle
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (nonatomic) BOOL showsActionButton; // ivar: _showsActionButton
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly, nonatomic) NSString *synthesizedSectionTitle;
@property (nonatomic) BOOL useYearOnlyForDefaultTitle;
@property (copy, nonatomic) NSObject<NSCopying> *userData;
@property (nonatomic) BOOL wantsBackground; // ivar: _wantsBackground


+(BOOL)_hasAccessibilityLargeText;
+(BOOL)shouldUseAccessibilityLargeTextLayoutWithTraitCollecton:(id)arg0 ;
+(BOOL)shouldUsePhoneLayoutWithTraitCollection:(id)arg0 ;
-(BOOL)_disableRasterizeInAnimations;
-(BOOL)_usingDateAsTitle;
-(BOOL)allowLocationTapForTouch:(id)arg0 ;
-(id)_dateRangeCompactFormatter;
-(id)_dateRangeLongFormatter;
-(id)_dateRangeYearFormatter;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_dateRangeFormatterChanged:(id)arg0 ;
-(void)_handleActionButton:(id)arg0 ;
-(void)_handleSignificantDateChange:(id)arg0 ;
-(void)_hideHighlightView;
-(void)_layoutSubviewsForCurentStyle;
-(void)_setHighlightViewVisible:(BOOL)arg0 ;
-(void)_updateActionButton;
-(void)_updateBackdropViewGroupName;
-(void)_updateBackgroundAnimated:(BOOL)arg0 ;
-(void)_updateDateDependentLabels;
-(void)_updateDateLabel;
-(void)_updateDisclosureIcon;
-(void)_updateHighlightView;
-(void)_updateLabelsForTextStyle;
-(void)_updateLocationsLabelVisibility;
-(void)_updateTitleLabel;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)becomeReusable;
-(void)didEndDisplaying;
-(void)didTransitionFromLayout:(id)arg0 toLayout:(id)arg1 ;
-(void)layoutSubviews;
-(void)performBatchUpdateOfDateDependentPropertiesWithBlock:(id)arg0 ;
-(void)prepareForReuse;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willTransitionFromLayout:(id)arg0 toLayout:(id)arg1 ;


@end


#endif