// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMITHERMALPRESSUREMONITOR_H
#define HMITHERMALPRESSUREMONITOR_H

@class HMFObject, NSString;
@protocol HMFLogging, OS_dispatch_queue;



@interface HMIThermalPressureMonitor : HMFObject <HMFLogging>

 {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _osThermalPressureLevelNotificationToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSInteger thermalPressureLevel; // ivar: _thermalPressureLevel


+(id)logCategory;
+(id)sharedInstance;
+(id)shortDescription;
-(id)init;
-(void)_updateThermalPressureLevel;
-(void)dealloc;


@end


#endif