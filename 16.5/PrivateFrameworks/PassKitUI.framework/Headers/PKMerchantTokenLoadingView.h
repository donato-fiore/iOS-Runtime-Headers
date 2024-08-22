// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMERCHANTTOKENLOADINGVIEW_H
#define PKMERCHANTTOKENLOADINGVIEW_H

@class UIView, UIStackView, UIActivityIndicatorView, UILabel, NSString;



@interface PKMerchantTokenLoadingView : UIView {
    UIStackView *_stackView;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_label;
}


@property (copy, nonatomic) NSString *loadingText;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setUpActivityIndicator;
-(void)_setUpConstraints;
-(void)_setUpLabel;
-(void)_setUpSelf;
-(void)_setUpStackView;
-(void)_setUpViews;


@end


#endif