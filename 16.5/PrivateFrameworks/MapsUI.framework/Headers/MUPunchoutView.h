// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPUNCHOUTVIEW_H
#define MUPUNCHOUTVIEW_H

@class UIView, UIView<MULabelViewProtocol>, UILabel, UILayoutGuide, UIActivityIndicatorView, UIButton, NSString;
@protocol MKActivityObserving;


#import "MUPunchoutViewModel.h"

@interface MUPunchoutView : UIView <MKActivityObserving>

 {
    UIView<MULabelViewProtocol> *_moreOnLabel;
    UILabel *_vendorNameLabel;
    UILayoutGuide *_layoutGuide;
    UIActivityIndicatorView *_spinner;
    UIButton *_menuButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) MUPunchoutViewModel *viewModel; // ivar: _viewModel


+(CGFloat)_intrinsicWidth;
+(CGFloat)preferredWidth;
-(id)_attributedStringFromSymbol;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)_updateLabelsWithAlpha:(CGFloat)arg0 ;
-(void)beginAnimatingActivityIndicator;
-(void)endAnimatingActivityIndicatorWithError:(id)arg0 ;


@end


#endif