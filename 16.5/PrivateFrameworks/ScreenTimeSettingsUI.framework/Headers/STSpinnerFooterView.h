// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSPINNERFOOTERVIEW_H
#define STSPINNERFOOTERVIEW_H

@class UITableViewHeaderFooterView, PSSpecifier, UIActivityIndicatorView, NSLayoutConstraint;
@protocol PSHeaderFooterView;



@interface STSpinnerFooterView : UITableViewHeaderFooterView <PSHeaderFooterView>



@property (readonly, weak) PSSpecifier *specifier; // ivar: _specifier
@property (readonly) UIActivityIndicatorView *spinnerView; // ivar: _spinnerView
@property (retain) NSLayoutConstraint *spinnerViewVerticalPositionConstraint; // ivar: _spinnerViewVerticalPositionConstraint


-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithSpecifier:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadFromSpecifier;
-(void)startAnimatingSpinner;
-(void)stopAnimatingSpinner;


@end


#endif