// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SULOCKOUTVIEW_H
#define SULOCKOUTVIEW_H

@class UIView, UIImageView, UILabel, UIImage, NSString;



@interface SULockoutView : UIView {
    UIImageView *_backgroundImageView;
    UILabel *_bodyLabel;
    UIImageView *_glowImageView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
}


@property (retain, nonatomic) UIImage *backgroundImage;
@property (copy, nonatomic) NSString *body;
@property (retain, nonatomic) UIImage *glowImage;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) NSInteger layoutPreset; // ivar: _layoutPreset
@property (copy, nonatomic) NSString *title;


-(id)_newLabel;
-(void)_layoutForSlowNetwork;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif