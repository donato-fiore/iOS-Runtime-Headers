// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTATTRIBUTEEDITORTOACTIONSTRANSITIONANIMATOR_H
#define AVTATTRIBUTEEDITORTOACTIONSTRANSITIONANIMATOR_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning, AVTViewLayoutInfo;

#import <Foundation/Foundation.h>

#import "AVTUIEnvironment.h"

@interface AVTAttributeEditorToActionsTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>



@property (readonly, nonatomic) BOOL RTL; // ivar: _RTL
@property (readonly, nonatomic) NSObject<AVTViewLayoutInfo> *avtViewLayoutInfo; // ivar: _avtViewLayoutInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat userInfoViewHeight; // ivar: _userInfoViewHeight


+(struct UIEdgeInsets )adjustedSafeAreaInsetsForView:(id)arg0 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithAVTViewLayoutInfo:(id)arg0 userInfoViewHeight:(CGFloat)arg1 RTL:(BOOL)arg2 environment:(id)arg3 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif