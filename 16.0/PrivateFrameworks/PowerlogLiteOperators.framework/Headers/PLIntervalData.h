// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLINTERVALDATA_H
#define PLINTERVALDATA_H

@class NSDate, NSDateFormatter, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLIntervalData : NSObject

@property NSUInteger aggdValue; // ivar: _aggdValue
@property (retain) NSDate *currentInterval; // ivar: _currentInterval
@property (retain) NSDateFormatter *dateFormat; // ivar: _dateFormat
@property int intervalDuration; // ivar: _intervalDuration
@property (retain) NSMutableDictionary *metrics; // ivar: _metrics


-(id)init;
-(void)addMetric:(id)arg0 ;
-(void)submitIntervalData;
-(void)submitToCA:(id)arg0 ;
-(void)updateMetric:(id)arg0 withTimestamp:(id)arg1 forEvent:(short)arg2 withValue:(int)arg3 ;


@end


#endif