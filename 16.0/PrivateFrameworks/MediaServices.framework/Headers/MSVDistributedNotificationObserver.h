// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSVDISTRIBUTEDNOTIFICATIONOBSERVER_H
#define MSVDISTRIBUTEDNOTIFICATIONOBSERVER_H

@class NSString, NSDictionary;
@protocol MSVDistributedNotificationObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MSVDistributedNotificationObserver : NSObject {
    int _notifyToken;
}


@property (weak, nonatomic) NSObject<MSVDistributedNotificationObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *distributedName; // ivar: _distributedName
@property (readonly, nonatomic) NSString *localName; // ivar: _localName
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) NSDictionary *userInfoForLocalNotification; // ivar: _userInfoForLocalNotification


+(id)observerWithDistributedName:(id)arg0 localName:(id)arg1 queue:(id)arg2 ;
-(id)init;
-(id)initWithDistributedName:(id)arg0 localName:(id)arg1 queue:(id)arg2 ;
-(int)notifyToken;
-(void)_handleDistributedNotificationWithNotifyToken:(int)arg0 ;
-(void)dealloc;


@end


#endif