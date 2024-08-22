// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTAGENTNOTIFICATIONMANAGER_H
#define MTAGENTNOTIFICATIONMANAGER_H

@class NSMutableArray;
@protocol NAScheduler;

#import <Foundation/Foundation.h>


@interface MTAgentNotificationManager : NSObject

@property (retain, nonatomic) NSMutableArray *listeners; // ivar: _listeners
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer


+(CGFloat)_schedulingAssertionTimeout;
+(CGFloat)defaultAssertionTimeOutForNotification:(id)arg0 type:(NSInteger)arg1 ;
-(id)init;
-(void)_handleNotificationWithName:(id)arg0 type:(NSInteger)arg1 ;
-(void)_registerForAlarmNotifications;
-(void)_registerForDarwinNotifications;
-(void)_registerForDistributedNotifications;
-(void)_registerForLiveDarwinNotification:(id)arg0 ;
-(void)_registerForXPCStream:(id)arg0 notificationType:(NSInteger)arg1 ;
-(void)beginListening;
-(void)dealloc;
-(void)registerListener:(id)arg0 ;


@end


#endif