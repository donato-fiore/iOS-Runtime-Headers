// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPAPPLIANCEEVENTSANDALERTCLUSTERGETALERTSRESPONSEPARAMS_H
#define CHIPAPPLIANCEEVENTSANDALERTCLUSTERGETALERTSRESPONSEPARAMS_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPApplianceEventsAndAlertClusterGetAlertsResponseParams : NSObject

@property (retain, nonatomic) NSArray *alertStructures; // ivar: _alertStructures
@property (retain, nonatomic) NSNumber *alertsCount; // ivar: _alertsCount


-(id)init;


@end


#endif