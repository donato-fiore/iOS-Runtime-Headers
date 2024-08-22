// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKSCHEDULE_H
#define WLKSCHEDULE_H

@class NSMutableArray, NSDictionary, NSString, NSNumber, NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface WLKSchedule : NSObject {
    NSMutableArray *_mutableEvents;
    NSDictionary *_dictionary;
}


@property (readonly, copy, nonatomic) NSString *channelID; // ivar: _channelID
@property (readonly, nonatomic) NSNumber *cleanupTime; // ivar: _cleanupTime
@property (readonly, copy, nonatomic) NSDate *earliestEventDate; // ivar: _earliestEventDate
@property (readonly, copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, copy, nonatomic) NSArray *events;
@property (readonly, copy, nonatomic) NSString *externalServiceID; // ivar: _externalServiceID
@property (readonly, copy, nonatomic) NSDate *latestEventDate; // ivar: _latestEventDate
@property (readonly, copy, nonatomic) NSString *serviceID; // ivar: _serviceID
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate


-(BOOL)_isDate:(id)arg0 containedByDate:(id)arg1 andDate:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)adjacentEventsForDate:(id)arg0 fuzziness:(CGFloat)arg1 ;
-(id)eventAfterDate:(id)arg0 ;
-(id)eventForDate:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)prune;


@end


#endif