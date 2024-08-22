// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SL_OOPASPINNERTITLE_H
#define SL_OOPASPINNERTITLE_H

@class UIView, UILabel, UIActivityIndicatorView, NSString;



@interface SL_OOPASpinnerTitle : UIView {
    UILabel *_titleView;
    UIActivityIndicatorView *_spinner;
}


@property (copy, nonatomic) NSString *title;


-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)startAnimating;
-(void)stopAnimating;


@end


#endif