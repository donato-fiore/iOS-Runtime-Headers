// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUDISCLOSUREACTIONROWVIEW_H
#define MUDISCLOSUREACTIONROWVIEW_H

@class UILayoutGuide, UILabel, UIImageView, UITapGestureRecognizer, NSLayoutConstraint;
@protocol MUDisclosureActionViewModelProviding;


#import "MUPlaceSectionRowView.h"

@interface MUDisclosureActionRowView : MUPlaceSectionRowView {
    UILayoutGuide *_titleValueLayoutGuide;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UIImageView *_imageView;
    UIImageView *_disclosureView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSLayoutConstraint *_imageWidthConstraint;
}


@property (retain, nonatomic) NSObject<MUDisclosureActionViewModelProviding> *viewModel; // ivar: _viewModel


-(CGFloat)_imageWidth;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_buttonCellTapped;
-(void)_contentSizeDidChange;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif