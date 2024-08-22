// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIDONATIONRESULTVIEW_H
#define SKUIDONATIONRESULTVIEW_H

@class UIView, UIImageView, UILabel, UIImage, NSString;



@interface SKUIDonationResultView : UIView {
    UIImageView *_imageView;
    UILabel *_messageLabel;
    UILabel *_titleLabel;
}


@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;


-(void)layoutSubviews;


@end


#endif