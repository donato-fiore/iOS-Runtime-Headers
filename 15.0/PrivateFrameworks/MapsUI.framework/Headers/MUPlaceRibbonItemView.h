// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACERIBBONITEMVIEW_H
#define MUPLACERIBBONITEMVIEW_H

@class UIView, UIView<MULabelViewProtocol>, UITapGestureRecognizer, NSString;
@protocol MUPlaceRibbonItemViewModelUpdateDelegate, MKActivityObserving;


#import "MUHairlineView.h"
#import "MUPlaceRibbonItemViewModel.h"

@interface MUPlaceRibbonItemView : UIView <MUPlaceRibbonItemViewModelUpdateDelegate, MKActivityObserving>

 {
    UIView<MULabelViewProtocol> *_titleLabel;
    UIView<MULabelViewProtocol> *_valueLabel;
    MUHairlineView *_trailingHairlineView;
    UITapGestureRecognizer *_tapRecognizer;
    UITapGestureRecognizer *_selectRecognizer;
}


@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showTrailingHairline;
@property (readonly) Class superclass;
@property (retain, nonatomic) MUPlaceRibbonItemViewModel *viewModel; // ivar: _viewModel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleTap;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)_updateGestureRecognizers;
-(void)_updateLabelWithAlpha:(CGFloat)arg0 ;
-(void)beginAnimatingActivityIndicator;
-(void)endAnimatingActivityIndicatorWithError:(id)arg0 ;
-(void)ribbonItemViewModelDidUpdate:(id)arg0 ;


@end


#endif