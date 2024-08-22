// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIPROFILEPHOTOVIEW_H
#define AAUIPROFILEPHOTOVIEW_H

@class UIView, UIImageView, UIButton, UIImage;



@interface AAUIProfilePhotoView : UIView {
    UIImageView *_photoView;
    UIButton *_editButton;
}


@property (nonatomic, setter=setEditing:) BOOL isEditing; // ivar: _isEditing
@property (retain, nonatomic) UIImage *photo;


-(CGFloat)desiredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithPhoto:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(void)layoutSubviews;


@end


#endif