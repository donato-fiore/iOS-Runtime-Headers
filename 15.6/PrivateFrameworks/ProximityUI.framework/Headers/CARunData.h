// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARUNDATA_H
#define CARUNDATA_H

@class NSDictionary, NSNumber;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CARunData : NSObject {
    NSObject<OS_os_log> *_logger;
}


@property (retain, nonatomic) NSDictionary *armsReachEvent; // ivar: _armsReachEvent
@property (retain, nonatomic) NSDictionary *firstPoseEvent; // ivar: _firstPoseEvent
@property (retain, nonatomic) NSDictionary *firstRangeEvent; // ivar: _firstRangeEvent
@property (retain, nonatomic) NSDictionary *firstTargetFoundEvent; // ivar: _firstTargetFoundEvent
@property (retain, nonatomic) NSDictionary *firstTargetFoundFromAoAEvent; // ivar: _firstTargetFoundFromAoAEvent
@property (retain, nonatomic) NSDictionary *firstTargetFoundFromRangeEvent; // ivar: _firstTargetFoundFromRangeEvent
@property (retain, nonatomic) NSNumber *numberOfAoARevokes; // ivar: _numberOfAoARevokes
@property (retain, nonatomic) NSNumber *numberOfErrorEvents; // ivar: _numberOfErrorEvents
@property (retain, nonatomic) NSNumber *numberOfHighResidualRevokes; // ivar: _numberOfHighResidualRevokes
@property (retain, nonatomic) NSNumber *numberOfInvalidPoseEvents; // ivar: _numberOfInvalidPoseEvents
@property (retain, nonatomic) NSNumber *numberOfMotionEvents; // ivar: _numberOfMotionEvents
@property (retain, nonatomic) NSNumber *numberOfRangeRevokes; // ivar: _numberOfRangeRevokes
@property (retain, nonatomic) NSNumber *numberOfTargetFoundEvents; // ivar: _numberOfTargetFoundEvents
@property (retain, nonatomic) NSNumber *numberOfTargetMotionRevokes; // ivar: _numberOfTargetMotionRevokes
@property (retain, nonatomic) NSNumber *numberOfTargetRevokedEvents; // ivar: _numberOfTargetRevokedEvents
@property (retain, nonatomic) NSNumber *numberOfVIORevokes; // ivar: _numberOfVIORevokes
@property (retain, nonatomic) NSDictionary *startEvent; // ivar: _startEvent
@property (retain, nonatomic) NSDictionary *stopEvent; // ivar: _stopEvent
@property (nonatomic) BOOL torchButtonPresented; // ivar: _torchButtonPresented
@property (nonatomic) BOOL torchTurnedOff; // ivar: _torchTurnedOff
@property (nonatomic) BOOL torchTurnedOn; // ivar: _torchTurnedOn


-(id)init;
-(void)aoaRevoke:(id)arg0 ;
-(void)error:(id)arg0 ;
-(void)firstPose:(id)arg0 ;
-(void)firstRange:(id)arg0 ;
-(void)highResidualRevoke:(id)arg0 ;
-(void)invalidPose:(id)arg0 ;
-(void)logData;
-(void)motion:(id)arg0 ;
-(void)rangeRevoke:(id)arg0 ;
-(void)start:(id)arg0 ;
-(void)stop:(id)arg0 ;
-(void)targetFound:(id)arg0 ;
-(void)targetFoundFromAoA:(id)arg0 ;
-(void)targetFoundFromRange:(id)arg0 ;
-(void)targetMotionRevoke:(id)arg0 ;
-(void)targetRevoked:(id)arg0 ;
-(void)vioRevoke:(id)arg0 ;


@end


#endif