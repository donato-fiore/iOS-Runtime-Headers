// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCAPSULECOLLECTIONACTIONVIEW_H
#define SFCAPSULECOLLECTIONACTIONVIEW_H

@class UIControl, UIImageView, NSLayoutConstraint, UIAction;



@interface SFCapsuleCollectionActionView : UIControl {
    UIImageView *_imageView;
    NSLayoutConstraint *_contentEdgeConstraint;
}


@property (retain, nonatomic) UIAction *action; // ivar: _action


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif