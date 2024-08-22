// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIPEAKPOWERPRESSUREMONITOR_H
#define HMIPEAKPOWERPRESSUREMONITOR_H

@class HMFObject, NSString;
@protocol HMFLogging, OS_dispatch_queue;



@interface HMIPeakPowerPressureMonitor : HMFObject <HMFLogging>

 {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _osPeakPowerPressureLevelNotificationToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger peakPowerPressureLevel; // ivar: _peakPowerPressureLevel
@property (readonly) Class superclass;


+(id)logCategory;
+(id)sharedInstance;
+(id)shortDescription;
-(id)init;
-(void)_updatePeakPowerPressureLevel;
-(void)dealloc;


@end


#endif