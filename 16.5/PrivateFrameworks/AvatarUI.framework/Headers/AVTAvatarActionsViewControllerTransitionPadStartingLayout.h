// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARACTIONSVIEWCONTROLLERTRANSITIONPADSTARTINGLAYOUT_H
#define AVTAVATARACTIONSVIEWCONTROLLERTRANSITIONPADSTARTINGLAYOUT_H



#import "AVTAvatarActionsViewControllerPadLayout.h"

@interface AVTAvatarActionsViewControllerTransitionPadStartingLayout : AVTAvatarActionsViewControllerPadLayout {
    CGRect _avatarContainerViewFrame;
}




-(CGFloat)actionButtonsViewAlpha;
-(id)initWithContainerSize:(struct CGSize )arg0 insets:(struct UIEdgeInsets )arg1 buttonCount:(NSInteger)arg2 avtViewLayoutInfo:(id)arg3 startingAvatarViewFrame:(struct CGRect )arg4 ;
-(struct CGRect )avatarContainerViewFrame;


@end


#endif