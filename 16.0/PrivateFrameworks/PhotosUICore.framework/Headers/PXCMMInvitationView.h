// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMINVITATIONVIEW_H
#define PXCMMINVITATIONVIEW_H

@class UICollectionViewCell, UILabel, NSString, UIView;
@protocol PXChangeObserver, PXCMMInvitationViewDelegate;


#import "PXCMMPosterHeaderView.h"
#import "PXRoundedCornerOverlayView.h"
#import "PXCMMInvitationViewModel.h"

@interface PXCMMInvitationView : UICollectionViewCell <PXChangeObserver>

 {
    PXCMMPosterHeaderView *_headerView;
    UILabel *_titleLabel;
    UILabel *_subtitle1Label;
    UILabel *_subtitle2Label;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXCMMInvitationViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect headerViewBounds;
@property (readonly, nonatomic) UIView *previewView;
@property (readonly) Class superclass;
@property (retain, nonatomic) PXCMMInvitationViewModel *viewModel; // ivar: _viewModel


+(NSInteger)subtitle1TextStyle;
+(NSInteger)subtitle2TextStyle;
+(NSInteger)titleTextStyle;
+(id)subtitle1Color;
+(id)subtitle1Font;
+(id)subtitle2Color;
+(id)subtitle2Font;
+(id)titleBulletColor;
+(id)titleEmphasizedFont;
+(id)titleFont;
+(struct CGSize )posterHeaderViewSizeForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
+(struct CGSize )posterImageSizeThatFits:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
+(struct CGSize )sizeThatFits:(struct CGSize )arg0 viewModel:(id)arg1 ;
-(BOOL)_updateSubtitle1;
-(BOOL)_updateSubtitle2;
-(BOOL)_updateTitle;
-(BOOL)test_selected;
-(id)focusEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)test_subtitle1;
-(id)test_subtitle2;
-(id)test_title;
-(struct CGSize )_performLayoutInWidth:(CGFloat)arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_updateHeaderView;
-(void)_updateOpaqueAncestorBackgroundColor;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif