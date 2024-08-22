// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CABTRUNDATA_H
#define CABTRUNDATA_H

@class NSDictionary, NSNumber;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CABTRunData : NSObject {
    NSObject<OS_os_log> *_logger;
}


@property (retain, nonatomic) NSDictionary *armsReachEvent; // ivar: _armsReachEvent
@property (retain, nonatomic) NSDictionary *firstPoseEvent; // ivar: _firstPoseEvent
@property (retain, nonatomic) NSDictionary *firstProximityLevelFoundEvent; // ivar: _firstProximityLevelFoundEvent
@property (retain, nonatomic) NSDictionary *firstRssiEvent; // ivar: _firstRssiEvent
@property (retain, nonatomic) NSNumber *numberOfErrorEvents; // ivar: _numberOfErrorEvents
@property (retain, nonatomic) NSNumber *numberOfInvalidPoseEvents; // ivar: _numberOfInvalidPoseEvents
@property (retain, nonatomic) NSNumber *numberOfMotionEvents; // ivar: _numberOfMotionEvents
@property (retain, nonatomic) NSNumber *numberOfProximityLevelFoundEvents; // ivar: _numberOfProximityLevelFoundEvents
@property (retain, nonatomic) NSNumber *numberOfProximityLevelRevokedEvents; // ivar: _numberOfProximityLevelRevokedEvents
@property (retain, nonatomic) NSDictionary *startEvent; // ivar: _startEvent
@property (retain, nonatomic) NSDictionary *stopEvent; // ivar: _stopEvent


-(id)init;
-(void)error:(id)arg0 ;
-(void)firstPose:(id)arg0 ;
-(void)firstRssiMeasurement:(id)arg0 ;
-(void)invalidPose:(id)arg0 ;
-(void)logData;
-(void)motion:(id)arg0 ;
-(void)proximityLevelFound:(id)arg0 ;
-(void)proximityLevelRevoked:(id)arg0 ;
-(void)start:(id)arg0 ;
-(void)stop:(id)arg0 ;


@end


#endif