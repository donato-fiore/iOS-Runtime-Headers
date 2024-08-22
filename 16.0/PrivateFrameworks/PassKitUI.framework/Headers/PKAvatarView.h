// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAVATARVIEW_H
#define PKAVATARVIEW_H

@class UIView, CNAvatarViewController, UIImageView, CNContact, UIImage, NSString;



@interface PKAvatarView : UIView {
    CNAvatarViewController *_avatarViewController;
    UIImageView *_placeholderImageView;
}


@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (nonatomic) CGFloat diameter; // ivar: _diameter
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (retain, nonatomic) NSString *placeholderName; // ivar: _placeholderName


-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif