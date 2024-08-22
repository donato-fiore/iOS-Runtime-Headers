// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARATTRIBUTEEDITORLAYOUTPROVIDER_H
#define AVTAVATARATTRIBUTEEDITORLAYOUTPROVIDER_H


#import <Foundation/Foundation.h>


@interface AVTAvatarAttributeEditorLayoutProvider : NSObject



+(BOOL)shouldShowSideGroupPickerForContainerSize:(struct CGSize )arg0 forEnvironment:(id)arg1 ;
+(id)actionsToEditorTransitionStartingLayoutInContainerOfSize:(struct CGSize )arg0 attributesContentViewExtraHeight:(CGFloat)arg1 insets:(struct UIEdgeInsets )arg2 RTL:(BOOL)arg3 avatarViewStartFrame:(struct CGRect )arg4 avatarViewAlpha:(CGFloat)arg5 environment:(id)arg6 ;
+(id)defaultLayoutInContainerOfSize:(struct CGSize )arg0 insets:(struct UIEdgeInsets )arg1 RTL:(BOOL)arg2 environment:(id)arg3 ;
+(id)defaultLayoutInContainerOfSize:(struct CGSize )arg0 insets:(struct UIEdgeInsets )arg1 RTL:(BOOL)arg2 environment:(id)arg3 maxGroupLabelWidth:(CGFloat)arg4 ;
+(id)editorToActionsTransitionStartingLayoutInContainerOfSize:(struct CGSize )arg0 insets:(struct UIEdgeInsets )arg1 RTL:(BOOL)arg2 environment:(id)arg3 ;


@end


#endif