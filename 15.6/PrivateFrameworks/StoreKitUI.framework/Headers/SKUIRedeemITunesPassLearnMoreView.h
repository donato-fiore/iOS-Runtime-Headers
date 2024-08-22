// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIREDEEMITUNESPASSLEARNMOREVIEW_H
#define SKUIREDEEMITUNESPASSLEARNMOREVIEW_H

@class UIView, UIButton, UILabel, UIImageView, UIControl, NSString, UIImage;



@interface SKUIRedeemITunesPassLearnMoreView : UIView {
    UIButton *_button;
    UILabel *_explanationLabel;
    UIImageView *_headerImageView;
}


@property (readonly, nonatomic) UIControl *button;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *explanationString;
@property (retain, nonatomic) UIImage *headerImage;


-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif