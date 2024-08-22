// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONLISTTOUCHEATERMANAGER_H
#define NCNOTIFICATIONLISTTOUCHEATERMANAGER_H

@class NSString;
@protocol UIGestureRecognizerDelegate, NCNotificationListCoalescingControlsHandler;

#import <Foundation/Foundation.h>

#import "NCNotificationListCell.h"
#import "NCNotificationListSectionHeaderView.h"
#import "NCTouchEaterGestureRecognizer.h"

@interface NCNotificationListTouchEaterManager : NSObject <UIGestureRecognizerDelegate>



@property (weak, nonatomic) NCNotificationListCell *cellWithRevealedActions; // ivar: _cellWithRevealedActions
@property (weak, nonatomic) NSObject<NCNotificationListCoalescingControlsHandler> *coalescingControlsHandlerInClearState; // ivar: _coalescingControlsHandlerInClearState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NCNotificationListSectionHeaderView *headerViewInClearState; // ivar: _headerViewInClearState
@property (readonly) Class superclass;
@property (retain, nonatomic) NCTouchEaterGestureRecognizer *touchEater; // ivar: _touchEater


-(BOOL)_isPointInWindowSpace:(struct CGPoint )arg0 insideCell:(id)arg1 ;
-(BOOL)_shouldReceiveTouch:(id)arg0 forGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(id)initForView:(id)arg0 ;
-(void)_handleEatenTouch:(id)arg0 ;
-(void)_handleEatenTouchBeginStateForGestureRecognizer:(id)arg0 ;
-(void)_handleEatenTouchEndStateForGestureRecognizer:(id)arg0 ;
-(void)removeTouchGestureRecognizer;


@end


#endif