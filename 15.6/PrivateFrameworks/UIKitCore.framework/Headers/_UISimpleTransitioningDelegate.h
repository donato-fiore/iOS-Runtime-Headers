// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISIMPLETRANSITIONINGDELEGATE_H
#define _UISIMPLETRANSITIONINGDELEGATE_H

@class NSString;
@protocol UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface _UISimpleTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>

 {
    id<UIViewControllerAnimatedTransitioning> *_animator;
}


@property (nonatomic, setter=_setSuppressCrossFadeNavigationBarAnimation:) BOOL _suppressCrossFadeNavigationBarAnimation; // ivar: __suppressCrossFadeNavigationBarAnimation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_navigationControllerShouldCrossFadeNavigationBar:(id)arg0 ;
-(id)initWithAnimator:(id)arg0 ;
-(id)navigationController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;


@end


#endif