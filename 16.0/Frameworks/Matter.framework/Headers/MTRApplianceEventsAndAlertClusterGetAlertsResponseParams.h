// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRAPPLIANCEEVENTSANDALERTCLUSTERGETALERTSRESPONSEPARAMS_H
#define MTRAPPLIANCEEVENTSANDALERTCLUSTERGETALERTSRESPONSEPARAMS_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRApplianceEventsAndAlertClusterGetAlertsResponseParams : NSObject

@property (retain, nonatomic) NSArray *alertStructures; // ivar: _alertStructures
@property (retain, nonatomic) NSNumber *alertsCount; // ivar: _alertsCount
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif