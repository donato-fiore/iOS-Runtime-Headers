// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMENSTRUALCYCLESSTORE_H
#define HKMENSTRUALCYCLESSTORE_H

@class HKTaskServerProxyProvider, NSString, HKHealthStore;
@protocol HKMenstrualCyclesStoreInterface, _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface HKMenstrualCyclesStore : NSObject <HKMenstrualCyclesStoreInterface, _HKXPCExportable>

 {
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly) Class superclass;


-(id)_actionCompletionOnClientQueue:(SEL)arg0 ;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)fetchScheduledNotificationsWithCompletion:(id)arg0 ;
-(void)saveDaySummaries:(id)arg0 canOverrideCreationDate:(BOOL)arg1 completion:(id)arg2 ;
-(void)saveDaySummaries:(id)arg0 completion:(id)arg1 ;
-(void)saveDaySummary:(id)arg0 completion:(id)arg1 ;
-(void)saveLastMenstrualPeriodWithDayIndexRange:(struct ? )arg0 completion:(id)arg1 ;
-(void)saveMenstrualFlow:(NSInteger)arg0 dayIndex:(NSInteger)arg1 updateAdjacentDays:(BOOL)arg2 completion:(id)arg3 ;
-(void)saveMenstrualFlowByDayIndex:(id)arg0 completion:(id)arg1 ;
-(void)savePeriodEndedOnDayIndex:(NSInteger)arg0 completion:(id)arg1 ;
-(void)savePeriodNotYetEndedWithCompletion:(id)arg0 ;
-(void)savePeriodNotYetStartedWithCompletion:(id)arg0 ;
-(void)savePeriodStartedOnDayIndex:(NSInteger)arg0 completion:(id)arg1 ;
-(void)savePeriodStartedOnDayIndex:(NSInteger)arg0 endedOnDayIndex:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif