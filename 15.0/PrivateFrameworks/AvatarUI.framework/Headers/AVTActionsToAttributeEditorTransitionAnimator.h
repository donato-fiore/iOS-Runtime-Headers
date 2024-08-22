// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTACTIONSTOATTRIBUTEEDITORTRANSITIONANIMATOR_H
#define AVTACTIONSTOATTRIBUTEEDITORTRANSITIONANIMATOR_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning, AVTViewLayoutInfo;

#import <Foundation/Foundation.h>

#import "AVTUIEnvironment.h"

@interface AVTActionsToAttributeEditorTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>



@property (readonly, nonatomic) BOOL RTL; // ivar: _RTL
@property (readonly, nonatomic) NSObject<AVTViewLayoutInfo> *avtViewLayoutInfo; // ivar: _avtViewLayoutInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(struct UIEdgeInsets )adjustedSafeAreaInsetsForView:(id)arg0 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithAVTViewLayoutInfo:(id)arg0 RTL:(BOOL)arg1 environment:(id)arg2 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif