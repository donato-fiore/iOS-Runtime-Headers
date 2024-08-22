// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACAXNOTIFICATIONOBSERVER_H
#define CACAXNOTIFICATIONOBSERVER_H

@class NSArray;
@protocol CACAXNotificationObserverDelegate;

#import <Foundation/Foundation.h>


@interface CACAXNotificationObserver : NSObject {
    *__AXObserver _observer;
}


@property (weak, nonatomic) NSObject<CACAXNotificationObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSArray *notifications; // ivar: _notifications


-(id)initWithNotifications:(id)arg0 ;
-(void)_didObserveNotification:(int)arg0 notificationData:(*void)arg1 ;


@end


#endif