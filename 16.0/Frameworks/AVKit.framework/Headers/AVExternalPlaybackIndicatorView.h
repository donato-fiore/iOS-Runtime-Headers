// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVEXTERNALPLAYBACKINDICATORVIEW_H
#define AVEXTERNALPLAYBACKINDICATORVIEW_H

@class UIView, UIImageView, UILabel, UIStackView;



@interface AVExternalPlaybackIndicatorView : UIView {
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIStackView *_containerView;
    UIStackView *_textLabelsContainer;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setTitleString:(id)arg0 subtitleString:(id)arg1 ;


@end


#endif