// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMSUGGESTIONVIEW_H
#define PXCMMSUGGESTIONVIEW_H

@class UICollectionViewCell, UILabel, UIImageView, UIFont, NSString, UIView;
@protocol PXChangeObserver, PXCMMSuggestionViewDelegate;


#import "PXCMMPosterHeaderView.h"
#import "PXRoundedCornerOverlayView.h"
#import "PXCMMSuggestionViewModel.h"

@interface PXCMMSuggestionView : UICollectionViewCell <PXChangeObserver>

 {
    PXCMMPosterHeaderView *_headerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_combinedFaceTileImageView;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    UIFont *_titleFont;
    UIFont *_titleBoldFont;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXCMMSuggestionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect headerViewBounds;
@property (readonly, nonatomic) UIView *previewView;
@property (readonly) Class superclass;
@property (retain, nonatomic) PXCMMSuggestionViewModel *viewModel; // ivar: _viewModel


+(struct CGSize )posterHeaderViewSizeForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
+(struct CGSize )posterImageSizeThatFits:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
+(struct CGSize )sizeThatFits:(struct CGSize )arg0 viewModel:(id)arg1 ;
-(BOOL)_updateCombinedFaceTileImage;
-(BOOL)_updateSubtitle;
-(BOOL)test_selected;
-(id)focusEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)test_subtitle;
-(id)test_title;
-(struct CGSize )_performLayoutInWidth:(CGFloat)arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_updateFonts;
-(void)_updateHeaderView;
-(void)_updateOpaqueAncestorBackgroundColor;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif