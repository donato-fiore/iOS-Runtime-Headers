// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTPAIREDDEVICELISTENER_H
#define MTPAIREDDEVICELISTENER_H

@class NRDevice, NSString;
@protocol NAScheduler, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MTObserverStore.h"

@interface MTPairedDeviceListener : NSObject

@property (readonly) BOOL hasActivePairedDevice;
@property (readonly) BOOL hasActivePairedDeviceSupportingSyncing;
@property (retain, nonatomic) MTObserverStore *observers; // ivar: _observers
@property (retain, nonatomic) NRDevice *pairedDevice; // ivar: _pairedDevice
@property (readonly) NSString *pairedDeviceVersion;
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serializerQueue; // ivar: _serializerQueue
@property (nonatomic) BOOL sleepEnabled; // ivar: _sleepEnabled


+(id)_handledNotifications;
+(id)sharedListener;
-(BOOL)handlesNotification:(id)arg0 ofType:(NSInteger)arg1 ;
-(BOOL)hasActivePairedDeviceCheckSyncing:(BOOL)arg0 ;
-(id)init;
-(void)_registerForLocalNotifications;
-(void)didReceiveNotification:(id)arg0 ;
-(void)didReceiveNotificationNamed:(id)arg0 ;
-(void)handleNotification:(id)arg0 ofType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)notifyObserversWithBlock:(id)arg0 ;
-(void)printDiagnostics;
-(void)registerObserver:(id)arg0 ;
-(void)updateActiveDeviceInfo;


@end


#endif