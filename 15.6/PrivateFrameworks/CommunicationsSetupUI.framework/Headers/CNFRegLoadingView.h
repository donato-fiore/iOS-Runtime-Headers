// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFREGLOADINGVIEW_H
#define CNFREGLOADINGVIEW_H

@class UIView, UILabel, UIActivityIndicatorView, NSString;



@interface CNFRegLoadingView : UIView {
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
}


@property (copy, nonatomic) NSString *message;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif