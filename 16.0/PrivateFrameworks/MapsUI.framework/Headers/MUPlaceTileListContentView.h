// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACETILELISTCONTENTVIEW_H
#define MUPLACETILELISTCONTENTVIEW_H

@class UIView<MULabelViewProtocol>, NSString, UIImageView;
@protocol MUPlaceTileTemplateView, MUPlaceTileViewModel;


#import "MUPlaceSectionRowView.h"
#import "MUImageView.h"

@interface MUPlaceTileListContentView : MUPlaceSectionRowView <MUPlaceTileTemplateView>

 {
    UIView<MULabelViewProtocol> *_titleLabel;
    UIView<MULabelViewProtocol> *_secondaryLabel;
    UIView<MULabelViewProtocol> *_tertiaryLabel;
    MUImageView *_stopImageView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIImageView *tileImageView; // ivar: _tileImageView
@property (retain, nonatomic) NSObject<MUPlaceTileViewModel> *viewModel; // ivar: _viewModel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupConstraints;
-(void)_setupViews;
-(void)_updateAppearance;
-(void)_updateFonts;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif