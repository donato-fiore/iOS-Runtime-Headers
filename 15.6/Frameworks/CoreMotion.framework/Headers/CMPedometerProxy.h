// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMPEDOMETERPROXY_H
#define CMPEDOMETERPROXY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMPedometerProxy : NSObject {
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    *void fLocationdConnection;
    id *fOffsetUpdateHandler;
    id *fCumulativeUpdateHandler;
    NSInteger fStepCountFromStart;
    NSInteger fPushCountFromStart;
    NSInteger fStepCountOffset;
    NSInteger fPushCountOffset;
    CGFloat fDistanceFromStart;
    CGFloat fDistanceOffset;
    int fFloorAscendedStart;
    int fFloorAscendedOffset;
    int fFloorDescendedStart;
    int fFloorDescendedOffset;
    CGFloat fActiveTimeFromStart;
    CGFloat fActiveTimeOffset;
    CGFloat fValidStartDate;
    BOOL fStopUpdates;
    BOOL fFloorCountingAvailable;
    BOOL fPaceAndCadenceAvailable;
    id *fEventHandler;
    BOOL fStopEventUpdates;
    int fWorkoutType;
    int fElevationAscendedStart;
    int fElevationAscendedOffset;
    int fElevationDescendedStart;
    int fElevationDescendedOffset;
    BOOL fElevationCountingAvailable;
    int fDistanceSource;
}




-(id)_strideCalibrationDump;
-(id)init;
-(void)_handleQueryResponse:(struct shared_ptr<CLConnectionMessage> )arg0 onQueue:(id)arg1 withHandler:(id)arg2 ;
// -(void)_handleRecordQueryResponse:(struct shared_ptr<CLConnectionMessage> )arg0 withHandler:(id)arg1 shouldStartUpdates:(unk)arg2  ;
-(void)_internalQueryPedometerDataFromDate:(id)arg0 toDate:(id)arg1 onQueue:(id)arg2 withHandler:(id)arg3 ;
// -(void)_queryPedometerCalibrationBinsWithHandler:(id)arg0 forType:(unk)arg1 forRemote:(NSInteger)arg2  ;
-(void)_queryPedometerDataFromDate:(id)arg0 toDate:(id)arg1 withHandler:(id)arg2 ;
// -(void)_queryPedometerDataSinceDataRecord:(id)arg0 withHandler:(id)arg1 shouldStartUpdates:(unk)arg2  ;
-(void)_startPedometerEventUpdatesWithHandler:(id)arg0 ;
-(void)_startPedometerUpdatesFromDate:(id)arg0 withHandler:(id)arg1 ;
-(void)_startPedometerUpdatesSinceDataRecord:(id)arg0 withHandler:(id)arg1 ;
-(void)_stopPedometerEventUpdates;
-(void)_stopPedometerUpdates;
-(void)_subscribeToCumulativePedometerUpdates:(id)arg0 ;
-(void)_teardown;
-(void)dealloc;


@end


#endif