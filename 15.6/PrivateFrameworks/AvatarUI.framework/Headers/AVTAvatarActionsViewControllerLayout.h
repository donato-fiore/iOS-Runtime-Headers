// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTAVATARACTIONSVIEWCONTROLLERLAYOUT_H
#define AVTAVATARACTIONSVIEWCONTROLLERLAYOUT_H

@protocol AVTAvatarActionsViewControllerLayout, AVTViewLayoutInfo;

#import <Foundation/Foundation.h>


@interface AVTAvatarActionsViewControllerLayout : NSObject <AVTAvatarActionsViewControllerLayout>



@property (readonly, nonatomic) CGFloat actionButtonsViewAlpha;
@property (readonly, nonatomic) CGRect actionButtonsViewFrame;
@property (readonly, nonatomic) CGRect avatarContainerViewFrame;
@property (readonly, nonatomic) NSObject<AVTViewLayoutInfo> *avtViewLayout; // ivar: _avtViewLayout
@property (readonly, nonatomic) NSInteger buttonCount; // ivar: _buttonCount
@property (readonly, nonatomic) CGSize containerSize; // ivar: _containerSize
@property (readonly, nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (readonly, nonatomic) CGRect userInfoFrame;


+(CGFloat)buttonHeight;
+(CGFloat)heightForButtonsViewWithButtonCount:(NSInteger)arg0 ;
-(id)initWithContainerSize:(struct CGSize )arg0 insets:(struct UIEdgeInsets )arg1 buttonCount:(NSInteger)arg2 avtViewLayoutInfo:(id)arg3 ;
-(struct CGRect )actionButtonsViewFrameForButtonCount:(NSInteger)arg0 ;


@end


#endif