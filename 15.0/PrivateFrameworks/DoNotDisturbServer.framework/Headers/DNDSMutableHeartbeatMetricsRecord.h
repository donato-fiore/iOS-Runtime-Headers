// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSMUTABLEHEARTBEATMETRICSRECORD_H
#define DNDSMUTABLEHEARTBEATMETRICSRECORD_H

@class NSString, NSNumber;
@protocol DNDSMutableHeartbeatMetricsProtocol;


#import "DNDSHeartbeatMetricsRecord.h"

@interface DNDSMutableHeartbeatMetricsRecord : DNDSHeartbeatMetricsRecord <DNDSMutableHeartbeatMetricsProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL enabledAtLocation;
@property (nonatomic) BOOL enabledDrivingMode;
@property (nonatomic) BOOL enabledDuringEvent;
@property (nonatomic) BOOL enabledForOneHour;
@property (nonatomic) BOOL enabledFromControlCenterPhone;
@property (nonatomic) BOOL enabledFromControlCenterWatch;
@property (nonatomic) BOOL enabledSleepMode;
@property (nonatomic) BOOL enabledUntilEvening;
@property (nonatomic) BOOL enabledUntilMorning;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL manuallyEnabled;
@property (copy, nonatomic) NSNumber *numberOfManualSessions;
@property (copy, nonatomic) NSNumber *numberOfSessions;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif