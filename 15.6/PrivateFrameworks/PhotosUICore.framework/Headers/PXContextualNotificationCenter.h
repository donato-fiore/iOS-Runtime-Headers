// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCONTEXTUALNOTIFICATIONCENTER_H
#define PXCONTEXTUALNOTIFICATIONCENTER_H

@class NSMutableSet, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, UIWindow;
@protocol UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>

#import "_PXContextualNotificationCenterUpdatingView.h"
#import "PXContextualNotification.h"

@interface PXContextualNotificationCenter : NSObject <UIGestureRecognizerDelegate>



@property (retain, nonatomic) _PXContextualNotificationCenterUpdatingView *containerView; // ivar: _containerView
@property (readonly, nonatomic) NSMutableSet *contextualNotifications; // ivar: _contextualNotifications
@property (readonly, nonatomic) NSMutableSet *contextualNotificationsNeedingUpdate; // ivar: _contextualNotificationsNeedingUpdate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (retain, nonatomic) PXContextualNotification *pannedContextualNotification; // ivar: _pannedContextualNotification
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (readonly, weak, nonatomic) UIWindow *window; // ivar: _window


+(id)defaultCenter;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)_contextualNotificationAtLocation:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 isInsideDismissArea:(*BOOL)arg2 isInsidePassthroughArea:(*BOOL)arg3 ;
-(id)init;
-(id)initWithWindow:(id)arg0 ;
-(void)_handlePanGestureRecognizer:(id)arg0 ;
-(void)_handleTapGestureRecognizer:(id)arg0 ;
-(void)_updateAppearanceStateForContextualNotification:(id)arg0 ;
-(void)_updateContainerView;
-(void)invalidateContextualNotification:(id)arg0 ;
-(void)updateContextualNotificationsIfNeeded;


@end


#endif