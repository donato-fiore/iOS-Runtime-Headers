// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOSSTATUS_H
#define SOSSTATUS_H

@class NSDate, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SOSStatus : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger flowState; // ivar: _flowState
@property (readonly, nonatomic) BOOL isFlowActive;
@property (readonly, nonatomic) BOOL isFlowActiveAndNotResting;
@property (nonatomic) BOOL isPairedDeviceStatus; // ivar: _isPairedDeviceStatus
@property (readonly, nonatomic) BOOL isPreCall;
@property (nonatomic) NSInteger resolution; // ivar: _resolution
@property (readonly, nonatomic) BOOL shouldBlockNonEmergencyCalls;
@property (readonly, nonatomic) BOOL shouldRejectNewSOSTriggers;
@property (readonly, nonatomic) BOOL shouldRetriggerSOS;
@property (retain, nonatomic) NSDate *timeOfDetection; // ivar: _timeOfDetection
@property (retain, nonatomic) NSDate *timeOfResolution; // ivar: _timeOfResolution
@property (nonatomic) NSInteger trigger; // ivar: _trigger
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)isValid;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 trigger:(NSInteger)arg1 timeOfDetection:(id)arg2 ;
-(id)initWithUUID:(id)arg0 trigger:(NSInteger)arg1 timeOfDetection:(id)arg2 timeOfResolution:(id)arg3 resolution:(NSInteger)arg4 ;
-(id)initWithUUID:(id)arg0 trigger:(NSInteger)arg1 timeOfDetection:(id)arg2 timeOfResolution:(id)arg3 resolution:(NSInteger)arg4 flowState:(NSInteger)arg5 isPairedDeviceStatus:(BOOL)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif