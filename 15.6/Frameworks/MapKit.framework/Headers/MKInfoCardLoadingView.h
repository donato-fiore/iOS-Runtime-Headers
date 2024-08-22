// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKINFOCARDLOADINGVIEW_H
#define MKINFOCARDLOADINGVIEW_H

@class UIView, UIActivityIndicatorView;



@interface MKInfoCardLoadingView : UIView {
    UIActivityIndicatorView *_loadingIndicator;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_layout;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)startAnimating;
-(void)stopAnimating;


@end


#endif