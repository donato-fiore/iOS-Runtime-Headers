// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPUNCHOUTVIEW_H
#define MUPUNCHOUTVIEW_H

@class UIView, UIView<MULabelViewProtocol>, UILabel, UILayoutGuide, UIActivityIndicatorView, NSString;
@protocol MKActivityObserving;


#import "MUPunchoutViewModel.h"

@interface MUPunchoutView : UIView <MKActivityObserving>

 {
    UIView<MULabelViewProtocol> *_moreOnLabel;
    UILabel *_vendorNameLabel;
    UILayoutGuide *_layoutGuide;
    UIActivityIndicatorView *_spinner;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) MUPunchoutViewModel *viewModel; // ivar: _viewModel


+(CGFloat)preferredWidth;
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