// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMALTIMETER_H
#define CMALTIMETER_H


#import <Foundation/Foundation.h>


@interface CMAltimeter : NSObject {
    id *_internal;
}




+(BOOL)isAbsoluteAltitudeAvailable;
+(BOOL)isRelativeAltitudeAvailable;
+(BOOL)isSignificantElevationAvailable;
+(NSInteger)authorizationStatus;
+(void)dummySelector:(id)arg0 ;
+(void)initialize;
-(id)init;
-(id)initPrivate;
-(void)dealloc;
-(void)deallocPrivate;
-(void)onFilteredPressure:(struct Sample *)arg0 ;
-(void)pauseAbsoluteAltitudeUpdates;
-(void)querySignificantElevationChangeFromDate:(id)arg0 toDate:(id)arg1 withHandler:(id)arg2 ;
-(void)resumeAbsoluteAltitudeUpdates;
-(void)startAbsoluteAltitudeUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startRelativeAltitudeUpdatesPrivateToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startRelativeAltitudeUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startSignificantElevationUpdatesWithHandler:(id)arg0 ;
-(void)stopAbsoluteAltitudeUpdates;
-(void)stopRelativeAltitudeUpdates;
-(void)stopRelativeAltitudeUpdatesPrivate;
-(void)stopSignificantElevationUpdates;


@end


#endif