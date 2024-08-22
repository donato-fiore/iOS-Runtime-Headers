// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARATTRIBUTEEDITOROVERRIDINGLAYOUT_H
#define AVTAVATARATTRIBUTEEDITOROVERRIDINGLAYOUT_H

@class NSString;
@protocol AVTAvatarAttributeEditorLayout;

#import <Foundation/Foundation.h>


@interface AVTAvatarAttributeEditorOverridingLayout : NSObject <AVTAvatarAttributeEditorLayout>



@property (readonly, nonatomic) BOOL RTL;
@property (nonatomic) CGRect attributesContentViewFrame; // ivar: _attributesContentViewFrame
@property (readonly, nonatomic) UIEdgeInsets attributesContentViewInsets;
@property (readonly, nonatomic) UIEdgeInsets attributesContentViewScrollIndicatorInsets;
@property (nonatomic) CGFloat avatarContainerAlpha; // ivar: _avatarContainerAlpha
@property (nonatomic) CGRect avatarContainerFrame; // ivar: _avatarContainerFrame
@property (readonly, nonatomic) NSObject<AVTAvatarAttributeEditorLayout> *backingLayout; // ivar: _backingLayout
@property (readonly, nonatomic) CGSize containerSize;
@property (readonly, copy, nonatomic) NSString *contentSizeCategory;
@property (readonly, nonatomic) UIEdgeInsets edgeInsets;
@property (readonly, nonatomic) CGRect groupDialContainerFrame;
@property (readonly, nonatomic) CGFloat headerMaskingViewAlpha;
@property (readonly, nonatomic) CGRect headerMaskingViewFrame;
@property (readonly, nonatomic) CGFloat maxGroupLabelWidth;
@property (readonly, nonatomic) CGFloat screenScale;
@property (readonly, nonatomic) BOOL showSideGroupPicker;
@property (readonly, nonatomic) CGRect sideGroupContainerFrame;
@property (readonly, nonatomic) NSUInteger supportedLayoutOrientation;
@property (readonly, nonatomic) CGRect userInfoFrame;
@property (readonly, nonatomic) CGFloat verticalRuleAlpha;
@property (readonly, nonatomic) CGRect verticalRuleFrame;


-(id)initWithLayout:(id)arg0 ;


@end


#endif