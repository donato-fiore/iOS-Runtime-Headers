// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVISUALIDENTITYAVATARCONTAINERVIEW_H
#define CNVISUALIDENTITYAVATARCONTAINERVIEW_H

@class UIView;
@protocol CNVisualIdentityAvatarContainerViewDelegate;



@interface CNVisualIdentityAvatarContainerView : UIView

@property (weak, nonatomic) NSObject<CNVisualIdentityAvatarContainerViewDelegate> *delegate; // ivar: _delegate


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif