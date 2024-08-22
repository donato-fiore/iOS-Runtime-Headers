// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARATTRIBUTEEDITORLAYOUTPROVIDER_H
#define AVTAVATARATTRIBUTEEDITORLAYOUTPROVIDER_H


#import <Foundation/Foundation.h>


@interface AVTAvatarAttributeEditorLayoutProvider : NSObject



+(BOOL)shouldShowSideGroupPickerForContainerSize:(struct CGSize )arg0 forEnvironment:(id)arg1 ;
+(id)actionsToEditorTransitionStartingLayoutInContainerOfSize:(struct CGSize )arg0 attributesContentViewExtraHeight:(CGFloat)arg1 insets:(struct UIEdgeInsets )arg2 userInfoViewHeight:(CGFloat)arg3 RTL:(BOOL)arg4 avatarViewStartFrame:(struct CGRect )arg5 avatarViewAlpha:(CGFloat)arg6 environment:(id)arg7 ;
+(id)defaultLayoutInContainerOfSize:(struct CGSize )arg0 insets:(struct UIEdgeInsets )arg1 userInfoViewHeight:(CGFloat)arg2 RTL:(BOOL)arg3 environment:(id)arg4 ;
+(id)defaultLayoutInContainerOfSize:(struct CGSize )arg0 insets:(struct UIEdgeInsets )arg1 userInfoViewHeight:(CGFloat)arg2 RTL:(BOOL)arg3 environment:(id)arg4 maxGroupLabelWidth:(CGFloat)arg5 ;
+(id)editorToActionsTransitionStartingLayoutInContainerOfSize:(struct CGSize )arg0 insets:(struct UIEdgeInsets )arg1 userInfoViewHeight:(CGFloat)arg2 RTL:(BOOL)arg3 environment:(id)arg4 ;


@end


#endif