// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMPEDOMETER_H
#define CMPEDOMETER_H


#import <Foundation/Foundation.h>

#import "CMPedometerProxy.h"

@interface CMPedometer : NSObject

@property (readonly, nonatomic) CMPedometerProxy *pedometerProxy; // ivar: _pedometerProxy


+(BOOL)isAllDayElevationAvailable;
+(BOOL)isCadenceAvailable;
+(BOOL)isDistanceAvailable;
+(BOOL)isFloorCountingAvailable;
+(BOOL)isPaceAvailable;
+(BOOL)isPedometerEventTrackingAvailable;
+(BOOL)isStepCountingAvailable;
+(NSInteger)authorizationStatus;
-(BOOL)sendStrideCalibrationHistoryToFile:(id)arg0 ;
-(id)_pedometerDataWithRecordID:(NSInteger)arg0 ;
-(id)init;
-(id)strideCalibrationDump;
-(void)_queryPedometerDataSinceDataRecord:(id)arg0 withHandler:(id)arg1 ;
-(void)_startPedometerUpdatesSinceDataRecord:(id)arg0 withHandler:(id)arg1 ;
-(void)dealloc;
-(void)queryPedometerDataFromDate:(id)arg0 toDate:(id)arg1 withHandler:(id)arg2 ;
-(void)queryPedometerDataSinceDataRecord:(id)arg0 withHandler:(id)arg1 ;
-(void)queryPedometerDataSinceRecord:(NSInteger)arg0 withHandler:(id)arg1 ;
-(void)queryRawSpeedToKValueBinsWithHandler:(id)arg0 ;
-(void)queryRemoteRawSpeedToKValueBinsWithHandler:(id)arg0 ;
-(void)queryRemoteStepCadenceToStrideLengthBinsWithHandler:(id)arg0 ;
-(void)queryStepCadenceToStrideLengthBinsWithHandler:(id)arg0 ;
-(void)startPedometerEventUpdatesWithHandler:(id)arg0 ;
-(void)startPedometerUpdatesFromDate:(id)arg0 withHandler:(id)arg1 ;
-(void)stopPedometerEventUpdates;
-(void)stopPedometerUpdates;


@end


#endif