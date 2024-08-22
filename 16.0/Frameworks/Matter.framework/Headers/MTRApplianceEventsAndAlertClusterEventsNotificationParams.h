// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRAPPLIANCEEVENTSANDALERTCLUSTEREVENTSNOTIFICATIONPARAMS_H
#define MTRAPPLIANCEEVENTSANDALERTCLUSTEREVENTSNOTIFICATIONPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRApplianceEventsAndAlertClusterEventsNotificationParams : NSObject

@property (retain, nonatomic) NSNumber *eventHeader; // ivar: _eventHeader
@property (retain, nonatomic) NSNumber *eventId; // ivar: _eventId
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif