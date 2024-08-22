// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIDOWNLOADSCELLVIEW_H
#define SKUIDOWNLOADSCELLVIEW_H

@class UIView, UILabel, UIImageView, UISlider, NSAttributedString, UIButton, UIImage, NSString;



@interface SKUIDownloadsCellView : UIView {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
    UISlider *_progressSlider;
}


@property (retain, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (readonly, nonatomic) UIButton *button; // ivar: _button
@property (nonatomic) NSInteger buttonType; // ivar: _buttonType
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL isPad; // ivar: _isPad
@property (nonatomic) CGFloat progress;
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle


-(id)init;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif