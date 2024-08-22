// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC6HOMEUI17DASHBOARDANIMATOR_H
#define _TTC6HOMEUI17DASHBOARDANIMATOR_H

@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface _TtC6HomeUI17DashboardAnimator : NSObject <UIViewControllerAnimatedTransitioning>

 {
    ? style;
    ? blurView;
    ? targetCollectionViewFrame;
    ? targetCollectionViewLayout;
    ? targetContentInset;
    ? targetNavigationBarAppearance;
}




-(CGFloat)transitionDuration:(id)arg0 ;
-(id)init;
-(void)animateTransition:(id)arg0 ;


@end


#endif