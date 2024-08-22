// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBTINTINHERITINGIMAGEVIEW_H
#define OBTINTINHERITINGIMAGEVIEW_H

@class UIImageView, UIImage;



@interface OBTintInheritingImageView : UIImageView

@property (retain, nonatomic) UIImage *originalImage; // ivar: _originalImage


-(id)initWithImage:(id)arg0 highlightedImage:(id)arg1 tintColor:(id)arg2 ;
-(void)setImage:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif