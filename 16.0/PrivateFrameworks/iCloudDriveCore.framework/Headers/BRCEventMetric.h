// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCEVENTMETRIC_H
#define BRCEVENTMETRIC_H

@class CKEventMetric, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface BRCEventMetric : NSObject

@property (readonly, nonatomic) CKEventMetric *associatedCKEventMetricIfAvailable; // ivar: _associatedCKEventMetricIfAvailable
@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (readonly, nonatomic) NSString *eventName; // ivar: _eventName
@property (nonatomic) BOOL isCKMetric; // ivar: _isCKMetric
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime


-(CGFloat)duration;
-(id)additionalPayload;
-(id)associatedAppTelemetryEvent;
-(id)description;
-(id)initWithEventName:(id)arg0 ;
-(id)subDescription;
-(void)associateWithCompletedOperation:(id)arg0 ;


@end


#endif