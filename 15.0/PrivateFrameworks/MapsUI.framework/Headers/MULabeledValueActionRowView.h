// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MULABELEDVALUEACTIONROWVIEW_H
#define MULABELEDVALUEACTIONROWVIEW_H

@class UILayoutGuide, UIView<MULabelViewProtocol>, UITapGestureRecognizer;
@protocol MULabeledValueActionViewModelProviding;


#import "MUPlaceSectionRowView.h"
#import "MUCirclePlatterView.h"

@interface MULabeledValueActionRowView : MUPlaceSectionRowView {
    UILayoutGuide *_titleValueLayoutGuide;
    UIView<MULabelViewProtocol> *_titleLabel;
    UIView<MULabelViewProtocol> *_valueLabel;
    UIView<MULabelViewProtocol> *_tertiaryLabel;
    MUCirclePlatterView *_actionPlatterView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}


@property (retain, nonatomic) NSObject<MULabeledValueActionViewModelProviding> *viewModel; // ivar: _viewModel


-(id)_valueLabelFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_actionButtonTapped;
-(void)_contentSizeDidChange;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)copy:(id)arg0 ;


@end


#endif