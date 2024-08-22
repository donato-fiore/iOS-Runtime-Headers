// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDVIEWCONTROLLERFOOTERVIEW_H
#define PKDASHBOARDVIEWCONTROLLERFOOTERVIEW_H

@class UIView, UIColor, UIImage, NSString, UILabel;
@protocol PKHorizontalScrollingFooterViewComparator, PKDashboardViewControllerFooterViewDelegate;


#import "PKContinuousButton.h"

@interface PKDashboardViewControllerFooterView : UIView <PKHorizontalScrollingFooterViewComparator>

 {
    UIView *_separatorView;
    UIView *_topSeparatorView;
    PKContinuousButton *_payButton;
    BOOL _usingCircleButton;
    UIColor *_buttonTitleColor;
    UIColor *_buttonTintColor;
    UIImage *_payButtonImage;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKDashboardViewControllerFooterViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UILabel *leadingDetail; // ivar: _leadingDetail
@property (readonly, nonatomic) UILabel *leadingTitle; // ivar: _leadingTitle
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *trailingDetail; // ivar: _trailingDetail
@property (readonly, nonatomic) UILabel *trailingTitle; // ivar: _trailingTitle


-(BOOL)isEqualToFooter:(id)arg0 ;
-(id)_payButtonWithCircleLayout:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_buttonTapped:(id)arg0 ;
-(void)_createSubviews;
-(void)layoutSubviews;
-(void)setButtonTintColor:(id)arg0 ;
-(void)setButtonTitle:(id)arg0 ;
-(void)setButtonTitleColor:(id)arg0 ;
-(void)setPayButtonImage:(id)arg0 ;


@end


#endif