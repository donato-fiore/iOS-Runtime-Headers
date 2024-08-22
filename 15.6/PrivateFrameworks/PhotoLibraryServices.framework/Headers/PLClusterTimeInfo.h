// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCLUSTERTIMEINFO_H
#define PLCLUSTERTIMEINFO_H

@class NSCalendar, NSDate;

#import <Foundation/Foundation.h>


@interface PLClusterTimeInfo : NSObject

@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) CGFloat endOfSameDayTimestamp; // ivar: _endOfSameDayTimestamp
@property (readonly, retain, nonatomic) NSDate *latestUTCDate; // ivar: _latestUTCDate
@property (readonly, nonatomic) CGFloat maximumNextDayTimestamp; // ivar: _maximumNextDayTimestamp


-(BOOL)utcDateBelongsInCluster:(id)arg0 ;
-(id)initWithCalendar:(id)arg0 ;
-(void)_updateTimestampsWithUTCDate:(id)arg0 localDate:(id)arg1 ;
-(void)reset;
-(void)updateWithUTCDate:(id)arg0 localDate:(id)arg1 ;


@end


#endif