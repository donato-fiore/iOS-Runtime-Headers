// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMPOSTERUIVIEW_H
#define PXCMMPOSTERUIVIEW_H

@class UIView, UIActivityIndicatorView, NSString, UIColor;


#import "PXRoundedCornerOverlayView.h"
#import "PXCMMPosterHeaderView.h"
#import "PXUpdater.h"
#import "PXCMMPosterBannerView.h"

@interface PXCMMPosterUIView : UIView {
    _NSRange _bannerHeadlineBoldRange;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    PXCMMPosterHeaderView *_headerView;
    NSInteger _actionButtonType;
    id *_actionButtonAction;
    UIActivityIndicatorView *_activityIndicatorView;
    PXUpdater *_updater;
}


@property (nonatomic, getter=isActionInProgress) BOOL actionInProgress; // ivar: _actionInProgress
@property (copy, nonatomic) NSString *bannerHeadline; // ivar: _bannerHeadline
@property (copy, nonatomic) NSString *bannerSubheadline; // ivar: _bannerSubheadline
@property (readonly, nonatomic) PXCMMPosterBannerView *bannerView; // ivar: _bannerView
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) NSUInteger cornersToRound; // ivar: _cornersToRound
@property (copy, nonatomic) NSString *dateString;
@property (copy, nonatomic) NSString *locationString;
@property (nonatomic) BOOL needsBannerView; // ivar: _needsBannerView
@property (copy, nonatomic) UIColor *opaqueAncestorBackgroundColor; // ivar: _opaqueAncestorBackgroundColor
@property (nonatomic) NSInteger selectedCount; // ivar: _selectedCount
@property (copy, nonatomic) NSString *statusString;
@property (nonatomic) NSInteger totalCount; // ivar: _totalCount


-(id)_fontDescriptorWithTextStyle:(id)arg0 addingSymbolicTraits:(unsigned int)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_performLayoutInWidth:(CGFloat)arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateBannerActionButton;
-(void)_updateBannerTitles;
-(void)_updateBannerView;
-(void)_updateCorners;
-(void)layoutSubviews;
-(void)setActionButtonWithType:(NSInteger)arg0 actionBlock:(id)arg1 ;
-(void)setAsset:(id)arg0 mediaProvider:(id)arg1 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif