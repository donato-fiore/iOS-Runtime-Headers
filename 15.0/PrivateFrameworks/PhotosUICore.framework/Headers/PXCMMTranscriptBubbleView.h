// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMTRANSCRIPTBUBBLEVIEW_H
#define PXCMMTRANSCRIPTBUBBLEVIEW_H

@class UIView, NSString;
@protocol PXDisplayAsset, PXUIImageProvider;


#import "PXUpdater.h"
#import "PXCMMTranscriptBubbleFooterView.h"
#import "PXCMMPosterHeaderView.h"
#import "PXCMMSpec.h"

@interface PXCMMTranscriptBubbleView : UIView {
    PXUpdater *_updater;
    UIView *_highlightView;
    PXCMMTranscriptBubbleFooterView *_footerView;
    PXCMMPosterHeaderView *_headerView;
}


@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (nonatomic) UIEdgeInsets bubbleSafeAreaInsets; // ivar: _bubbleSafeAreaInsets
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (copy, nonatomic) NSString *imageSubtitleText; // ivar: _imageSubtitleText
@property (copy, nonatomic) NSString *imageTitleText; // ivar: _imageTitleText
@property (readonly, nonatomic) NSObject<PXUIImageProvider> *mediaProvider; // ivar: _mediaProvider
@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText
@property (retain, nonatomic) PXCMMSpec *spec; // ivar: _spec


+(struct CGSize )sizeThatFits:(struct CGSize )arg0 withSpec:(id)arg1 ;
-(BOOL)_wantsHighlightView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_performLayoutInSize:(struct CGSize )arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateFooterView;
-(void)_updateHighlightView;
-(void)_updatePosterView;
-(void)layoutSubviews;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;


@end


#endif