// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWCONTROLLERLAYOUTTOLAYOUTTRANSITION_H
#define _UICOLLECTIONVIEWCONTROLLERLAYOUTTOLAYOUTTRANSITION_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>

#import "UIPercentDrivenInteractiveTransition.h"
#import "UICollectionViewLayout.h"

@interface _UICollectionViewControllerLayoutToLayoutTransition : NSObject <UIViewControllerAnimatedTransitioning>



@property (nonatomic) BOOL crossFadeBottomBars; // ivar: _crossFadeBottomBars
@property (nonatomic) BOOL crossFadeNavigationBar; // ivar: _crossFadeNavigationBar
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interactionAborted; // ivar: _interactionAborted
@property (nonatomic) UIPercentDrivenInteractiveTransition *interactionController; // ivar: _interactionController
@property (nonatomic) NSInteger operation; // ivar: _operation
@property (readonly) Class superclass;
@property (retain, nonatomic) UICollectionViewLayout *toLayout; // ivar: _toLayout


+(id)transitionForOperation:(NSInteger)arg0 fromViewController:(id)arg1 toViewController:(id)arg2 ;
-(BOOL)_shouldCrossFadeBottomBars;
-(BOOL)_shouldCrossFadeNavigationBar;
-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;


@end


#endif