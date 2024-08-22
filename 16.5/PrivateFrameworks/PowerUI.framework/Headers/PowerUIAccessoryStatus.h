// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWERUIACCESSORYSTATUS_H
#define POWERUIACCESSORYSTATUS_H

@class NSDate, NSUUID;

#import <Foundation/Foundation.h>


@interface PowerUIAccessoryStatus : NSObject

@property unsigned char chargingEventsSinceLastReport; // ivar: _chargingEventsSinceLastReport
@property NSUInteger currentState; // ivar: _currentState
@property (retain) NSDate *disabledUntilDate; // ivar: _disabledUntilDate
@property BOOL enabled; // ivar: _enabled
@property (retain) NSUUID *expectedHash; // ivar: _expectedHash
@property (retain) NSDate *lastSeenDate; // ivar: _lastSeenDate
@property (retain) NSDate *lastSentDate; // ivar: _lastSentDate
@property (retain) NSDate *lastTimeseriesDate; // ivar: _lastTimeseriesDate
@property (retain) NSDate *lastUnderchargeRecordedForPrediction; // ivar: _lastUnderchargeRecordedForPrediction
@property NSUInteger managerState; // ivar: _managerState
@property unsigned short minutesSavedSinceLastReport; // ivar: _minutesSavedSinceLastReport
@property BOOL temporarilyDisabled; // ivar: _temporarilyDisabled
@property unsigned char underchargesSinceLastReport; // ivar: _underchargesSinceLastReport


-(id)description;
-(id)init;


@end


#endif