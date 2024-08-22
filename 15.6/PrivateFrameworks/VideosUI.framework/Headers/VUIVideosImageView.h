// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIVIDEOSIMAGEVIEW_H
#define VUIVIDEOSIMAGEVIEW_H

@class UIImageView, UIImage;



@interface VUIVideosImageView : UIImageView {
    BOOL _selected;
    UIImage *_flatImage;
}


@property (retain, nonatomic) UIImage *highlightOrSelectedImage; // ivar: _highlightOrSelectedImage


+(id)imageWithImage:(id)arg0 existingImageView:(id)arg1 ;
-(void)_updateImage;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif