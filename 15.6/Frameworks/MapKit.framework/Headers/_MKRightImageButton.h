// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKRIGHTIMAGEBUTTON_H
#define _MKRIGHTIMAGEBUTTON_H

@class UIControl, UITapGestureRecognizer, NSArray, UIImage, UIImageView, NSString;


#import "_MKUILabel.h"

@interface _MKRightImageButton : UIControl {
    UITapGestureRecognizer *_gestureRecognizer;
    BOOL _titleConstraintsAdded;
    NSArray *_titleOnlyConstraints;
    NSArray *_titleAndImageConstraints;
    BOOL _highlighted;
}


@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) _MKUILabel *titleLabel; // ivar: _titleLabel


-(BOOL)isHighlighted;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForLastBaselineLayout;
-(struct CGSize )intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setTarget:(id)arg0 action:(SEL)arg1 ;
-(void)updateConstraints;


@end


#endif