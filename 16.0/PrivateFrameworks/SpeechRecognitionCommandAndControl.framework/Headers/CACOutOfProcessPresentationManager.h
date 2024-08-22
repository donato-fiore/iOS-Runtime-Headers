// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACOUTOFPROCESSPRESENTATIONMANAGER_H
#define CACOUTOFPROCESSPRESENTATIONMANAGER_H

@protocol CACAXNotificationObserverDelegate, CACContentViewManager;

#import <Foundation/Foundation.h>

#import "CACAXNotificationObserver.h"

@interface CACOutOfProcessPresentationManager : NSObject <CACAXNotificationObserverDelegate, CACContentViewManager>



@property (retain, nonatomic) CACAXNotificationObserver *observer; // ivar: _observer


+(NSInteger)remoteViewType;
+(int)axNotification;
-(BOOL)isOutOfProcess;
-(BOOL)isOverlay;
-(BOOL)isPhysiciallyInteractiveOverlay;
-(BOOL)isShowing;
-(id)init;
-(void)handleAXNotificationData:(*void)arg0 ;
-(void)hide;
-(void)hideWithoutAnimation;
-(void)observer:(id)arg0 didObserveNotification:(int)arg1 notificationData:(*void)arg2 ;
-(void)presentWithData:(id)arg0 ;


@end


#endif