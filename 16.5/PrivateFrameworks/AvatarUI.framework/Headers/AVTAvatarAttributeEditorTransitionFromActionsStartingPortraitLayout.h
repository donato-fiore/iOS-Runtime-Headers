// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARATTRIBUTEEDITORTRANSITIONFROMACTIONSSTARTINGPORTRAITLAYOUT_H
#define AVTAVATARATTRIBUTEEDITORTRANSITIONFROMACTIONSSTARTINGPORTRAITLAYOUT_H



#import "AVTAvatarAttributeEditorLayout.h"

@interface AVTAvatarAttributeEditorTransitionFromActionsStartingPortraitLayout : AVTAvatarAttributeEditorLayout {
    BOOL _showSideGroupPicker;
    CGFloat _avatarContainerAlpha;
    CGRect _avatarContainerFrame;
}


@property (readonly, nonatomic) CGFloat attributesContentViewExtraHeight; // ivar: _attributesContentViewExtraHeight


-(BOOL)showSideGroupPicker;
-(CGFloat)avatarContainerAlpha;
-(CGFloat)headerMaskingViewAlpha;
-(CGFloat)verticalRuleAlpha;
-(NSUInteger)supportedLayoutOrientation;
-(id)backgroundColor;
-(id)initWithContainerSize:(struct CGSize )arg0 insets:(struct UIEdgeInsets )arg1 userInfoViewHeight:(CGFloat)arg2 screenScale:(CGFloat)arg3 RTL:(BOOL)arg4 avatarViewContainerFrame:(struct CGRect )arg5 attributesContentViewFrameExtraHeight:(CGFloat)arg6 avatarViewAlpha:(CGFloat)arg7 showSideGroupPicker:(BOOL)arg8 ;
-(struct CGRect )attributesContentViewFrame;
-(struct CGRect )avatarContainerFrame;
-(struct CGRect )groupDialContainerFrame;
-(struct CGRect )headerMaskingViewFrame;
-(struct CGRect )sideGroupContainerFrame;
-(struct CGRect )userInfoFrame;
-(struct CGRect )verticalRuleFrame;
-(struct UIEdgeInsets )attributesContentViewInsets;
-(struct UIEdgeInsets )attributesContentViewScrollIndicatorInsets;


@end


#endif