// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSLEEPHEALTHSTORE_H
#define HKSLEEPHEALTHSTORE_H

@class HKTaskServerProxyProvider, NSString, HKHealthStore;
@protocol HKSleepHealthStoreInterface, _HKXPCExportable, NAScheduler;

#import <Foundation/Foundation.h>


@interface HKSleepHealthStore : NSObject <HKSleepHealthStoreInterface, _HKXPCExportable>

 {
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) NSObject<NAScheduler> *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)saveSleepTrackingSamples:(id)arg0 completion:(id)arg1 ;
-(void)startSleepTrackingSession;
-(void)stopSleepTrackingSession;
-(void)updateCurrentSleepSchedules:(id)arg0 sleepDurationGoal:(id)arg1 completion:(id)arg2 ;


@end


#endif