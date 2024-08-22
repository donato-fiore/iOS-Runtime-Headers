// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUILOADINGVIEW_H
#define AMSUILOADINGVIEW_H

@class UIActivityIndicatorView, UILabel;


#import "AMSUICommonView.h"

@interface AMSUILoadingView : AMSUICommonView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) UILabel *label; // ivar: _label


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setLoadingText:(id)arg0 ;
-(void)startAnimating;
-(void)stopAnimating;


@end


#endif