// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXNOTIFICATIONOBSERVER_H
#define AXNOTIFICATIONOBSERVER_H

@class NSArray;
@protocol AXNotificationObserverDelegate;

#import <Foundation/Foundation.h>


@interface AXNotificationObserver : NSObject {
    *__AXObserver _observer;
}


@property (weak, nonatomic) NSObject<AXNotificationObserverDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *notifications; // ivar: _notifications


-(id)initWithNotifications:(id)arg0 ;
-(void)_didObserveNotification:(int)arg0 notificationData:(*void)arg1 ;
-(void)_registerForAXNotifications:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif