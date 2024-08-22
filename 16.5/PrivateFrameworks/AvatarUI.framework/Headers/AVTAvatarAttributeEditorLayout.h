// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARATTRIBUTEEDITORLAYOUT_H
#define AVTAVATARATTRIBUTEEDITORLAYOUT_H

@class NSString;
@protocol AVTAvatarAttributeEditorLayout;

#import <Foundation/Foundation.h>


@interface AVTAvatarAttributeEditorLayout : NSObject <AVTAvatarAttributeEditorLayout>



@property (readonly, nonatomic) BOOL RTL; // ivar: _RTL
@property (readonly, nonatomic) CGRect attributesContentViewFrame;
@property (readonly, nonatomic) UIEdgeInsets attributesContentViewInsets;
@property (readonly, nonatomic) UIEdgeInsets attributesContentViewScrollIndicatorInsets;
@property (readonly, nonatomic) CGFloat avatarContainerAlpha;
@property (readonly, nonatomic) CGRect avatarContainerFrame;
@property (readonly, nonatomic) CGSize containerSize; // ivar: _containerSize
@property (readonly, copy, nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (readonly, nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (readonly, nonatomic) CGRect groupDialContainerFrame;
@property (readonly, nonatomic) CGFloat headerMaskingViewAlpha;
@property (readonly, nonatomic) CGRect headerMaskingViewFrame;
@property (readonly, nonatomic) CGFloat maxGroupLabelWidth; // ivar: _maxGroupLabelWidth
@property (readonly, nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (readonly, nonatomic) BOOL showSideGroupPicker; // ivar: _showSideGroupPicker
@property (readonly, nonatomic) CGRect sideGroupContainerFrame;
@property (readonly, nonatomic) NSUInteger supportedLayoutOrientation;
@property (readonly, nonatomic) CGRect userInfoFrame;
@property (readonly, nonatomic) CGFloat userInfoViewHeight; // ivar: _userInfoViewHeight
@property (readonly, nonatomic) CGFloat verticalRuleAlpha;
@property (readonly, nonatomic) CGRect verticalRuleFrame;


-(id)backgroundColor;
-(id)initWithContainerSize:(struct CGSize )arg0 insets:(struct UIEdgeInsets )arg1 userInfoViewHeight:(CGFloat)arg2 screenScale:(CGFloat)arg3 RTL:(BOOL)arg4 showSideGroupPicker:(BOOL)arg5 ;
-(id)initWithContainerSize:(struct CGSize )arg0 insets:(struct UIEdgeInsets )arg1 userInfoViewHeight:(CGFloat)arg2 screenScale:(CGFloat)arg3 RTL:(BOOL)arg4 showSideGroupPicker:(BOOL)arg5 maxGroupLabelWidth:(CGFloat)arg6 ;
-(void)raiseExceptionForPropertyString:(id)arg0 ;


@end


#endif