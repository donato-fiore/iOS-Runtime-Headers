// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(id)initWithContainerSize:(struct CGSize )arg0 insets:(struct UIEdgeInsets )arg1 screenScale:(CGFloat)arg2 RTL:(BOOL)arg3 avatarViewContainerFrame:(struct CGRect )arg4 attributesContentViewFrameExtraHeight:(CGFloat)arg5 avatarViewAlpha:(CGFloat)arg6 showSideGroupPicker:(BOOL)arg7 ;
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