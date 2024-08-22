// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSPENDINGSUMMARYFOOTERCONTAINER_H
#define PKSPENDINGSUMMARYFOOTERCONTAINER_H

@class UIView, _UIBackdropView, UIView<PKSpendingSummaryFooter>;



@interface PKSpendingSummaryFooterContainer : UIView {
    NSInteger _backdropStyle;
    _UIBackdropView *_backdropView;
    UIView *_topSeparatorView;
}


@property (retain, nonatomic) UIView<PKSpendingSummaryFooter> *currentFooter; // ivar: _currentFooter
@property (retain, nonatomic) UIView<PKSpendingSummaryFooter> *nextFooter; // ivar: _nextFooter


-(NSInteger)preferredBackdropStyle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)layoutSubviews;
-(void)setTransitionProgress:(CGFloat)arg0 ;


@end


#endif