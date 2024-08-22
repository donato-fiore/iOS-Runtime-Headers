// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMXPCNOTIFICATIONSUTIL_H
#define FMXPCNOTIFICATIONSUTIL_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FMXPCNotificationsUtil : NSObject

@property (retain, nonatomic) NSMutableDictionary *darwinNotificationHandlers; // ivar: _darwinNotificationHandlers
@property (retain, nonatomic) NSMutableDictionary *distributedNotificationHandlers; // ivar: _distributedNotificationHandlers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *modificationQueue; // ivar: _modificationQueue


+(id)sharedInstance;
+(void)handleDarwinNotificationsWithHandlers:(id)arg0 ;
+(void)handleDistributedNotificationsWithHandlers:(id)arg0 ;
-(BOOL)isHandlerRegisteredForDarwinNotification:(id)arg0 ;
-(BOOL)isHandlerRegisteredForDistributedNotification:(id)arg0 ;
-(id)init;
-(void)_didReceiveDarwinNotification:(id)arg0 ;
-(void)_didReceiveDistributedNotification:(id)arg0 withContext:(id)arg1 ;
-(void)deregisterHandlerForDarwinNotification:(id)arg0 ;
-(void)deregisterHandlerForDistributedNotification:(id)arg0 ;
// -(void)registerHandler:(id)arg0 forDarwinNotification:(unk)arg1  ;
// -(void)registerHandler:(id)arg0 forDistributedNotification:(unk)arg1  ;


@end


#endif