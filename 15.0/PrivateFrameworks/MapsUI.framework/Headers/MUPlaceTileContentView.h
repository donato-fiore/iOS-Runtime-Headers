// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACETILECONTENTVIEW_H
#define MUPLACETILECONTENTVIEW_H

@class UIView, UIView<MULabelViewProtocol>, UIImageView, NSLayoutConstraint, NSString;
@protocol MUPlaceTileTemplateView, MUPlaceTileViewModel;


#import "MUImageView.h"
#import "MUPlaceTileCellConfiguration.h"

@interface MUPlaceTileContentView : UIView <MUPlaceTileTemplateView>

 {
    UIView<MULabelViewProtocol> *_titleLabel;
    UIView<MULabelViewProtocol> *_subtitleLabel;
    UIView<MULabelViewProtocol> *_footerLabel;
    MUImageView *_contentImageView;
    UIImageView *_badgeImageView;
    NSLayoutConstraint *_titleToSubtitleConstraint;
    NSLayoutConstraint *_subtitleToFooterConstraint;
    MUPlaceTileCellConfiguration *_configuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIImageView *tileImageView;
@property (retain, nonatomic) NSObject<MUPlaceTileViewModel> *viewModel; // ivar: _viewModel


+(CGFloat)preferredWidth;
+(struct CGSize )_preferredSizeForViewModel:(id)arg0 cellConfiguration:(id)arg1 maximumMeasurements:(id)arg2 ;
+(struct CGSize )preferredSizeForViewModels:(id)arg0 cellConfiguration:(id)arg1 ;
-(id)initWithCellConfiguration:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)_updateFonts;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif