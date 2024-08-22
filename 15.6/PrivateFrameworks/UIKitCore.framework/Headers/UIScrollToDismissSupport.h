// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISCROLLTODISMISSSUPPORT_H
#define UISCROLLTODISMISSSUPPORT_H

@protocol UIScrollViewIntersectionDelegate;


#import "UIKeyboardMotionSupport.h"
#import "UIScrollView.h"
#import "UIInputViewSetNotificationInfo.h"

@interface UIScrollToDismissSupport : UIKeyboardMotionSupport <UIScrollViewIntersectionDelegate>

 {
    UIScrollView *_scrollViewForTransition;
    BOOL _scrollViewShowsHorizontalScrollIndicator;
    BOOL _scrollViewTransitionFinishing;
    BOOL _disableInterfaceAutorotation;
    CGPoint _scrollViewTransitionPreviousPoint;
    UIInputViewSetNotificationInfo *_scrollViewNotificationInfo;
}




-(id)cancelNotificationsForMode:(NSUInteger)arg0 ;
-(void)_updateKeyboardLayoutGuideForInteractiveScrollWithSize:(struct CGSize )arg0 ;
-(void)completeKeyboardDismiss:(NSUInteger)arg0 withDuration:(CGFloat)arg1 ;
-(void)completedPlacementFrom:(id)arg0 to:(id)arg1 forController:(id)arg2 ;
-(void)dealloc;
-(void)finishScrollViewTransition;
-(void)finishScrollViewTransitionForController:(id)arg0 ;
-(void)hideScrollViewHorizontalScrollIndicator:(BOOL)arg0 ;
-(void)scrollView:(id)arg0 didFinishPanGesture:(id)arg1 ;
-(void)scrollView:(id)arg0 didPanWithGesture:(id)arg1 ;
-(void)setInterfaceAutorotationDisabled:(BOOL)arg0 forController:(id)arg1 ;
-(void)updateScrollViewContentInsetBottom:(CGFloat)arg0 ;


@end


#endif