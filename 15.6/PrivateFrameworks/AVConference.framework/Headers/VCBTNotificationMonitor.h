// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCBTNOTIFICATIONMONITOR_H
#define VCBTNOTIFICATIONMONITOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface VCBTNotificationMonitor : NSObject {
    NSMutableArray *_handlerArray;
    os_unfair_lock_s _btNotificationHandlerLock;
}




+(id)sharedInstance;
-(id)init;
-(int)registerBTNotificationHandler:(id)arg0 ;
-(void)dealloc;
-(void)processBTNotification:(struct ? *)arg0 ;
-(void)registerDarwinNotification:(id)arg0 ;
-(void)registerForBluetoothImmediateNotifications;
-(void)setupBTEventHandler;
-(void)unregisterAllBTNotificationHandlers;
-(void)unregisterBTNotificationHandler:(int)arg0 ;
-(void)unregisterBluetoothImmediateNotifications;
-(void)unregisterDarwinNotification:(id)arg0 ;


@end


#endif