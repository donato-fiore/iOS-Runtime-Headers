// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMITHERMALMONITOR_H
#define HMITHERMALMONITOR_H

@class HMFObject, NSMutableDictionary;
@protocol OS_dispatch_queue;



@interface HMIThermalMonitor : HMFObject {
    *__IOHIDEventSystemClient _client;
    int _thermalLevelNotificationToken;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    os_unfair_lock_s _lock;
}


@property (readonly) NSMutableDictionary *services; // ivar: _services
@property (readonly) NSUInteger thermalLevel; // ivar: _thermalLevel


+(id)sharedInstance;
-(BOOL)readMaxValue:(*CGFloat)arg0 ;
-(BOOL)readValueFromSensor:(int)arg0 value:(*CGFloat)arg1 ;
-(id)init;
-(void)_updateThermalLevel;
-(void)dealloc;


@end


#endif