// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHEARTBEATMETRIC_H
#define SBHEARTBEATMETRIC_H

@class NSCalendar, NSISO8601DateFormatter, NSString;
@protocol SBFAnalyticsBackendEventHandling;

#import <Foundation/Foundation.h>

#import "SBHeartbeatMetricPersistence.h"

@interface SBHeartbeatMetric : NSObject <SBFAnalyticsBackendEventHandling>

 {
    NSCalendar *_calendar;
    NSISO8601DateFormatter *_dateFormatter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHeartbeatMetricPersistence *heartbeatMetricPersistence; // ivar: _heartbeatMetricPersistence
@property (readonly) Class superclass;


-(BOOL)handleEvent:(NSUInteger)arg0 withContext:(id)arg1 ;
-(BOOL)sendCoreAnalyticsEventWithName:(id)arg0 payload:(id)arg1 ;
-(id)_makePayloadFromMetricsByDatestamp:(id)arg0 ;
-(id)calendar;
-(id)dateFormatter;
-(id)initWithPersistence:(id)arg0 ;


@end


#endif