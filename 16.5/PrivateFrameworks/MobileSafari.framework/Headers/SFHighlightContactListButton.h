// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFHIGHLIGHTCONTACTLISTBUTTON_H
#define SFHIGHLIGHTCONTACTLISTBUTTON_H

@class UIControl, UIImageView, UILabel, UIImage, NSString;



@interface SFHighlightContactListButton : UIControl {
    UIImageView *_imageView;
    UILabel *_titleLabel;
}


@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateBackgroundColor;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif