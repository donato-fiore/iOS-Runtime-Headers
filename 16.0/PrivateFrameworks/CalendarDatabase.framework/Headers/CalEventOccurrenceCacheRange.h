// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALEVENTOCCURRENCECACHERANGE_H
#define CALEVENTOCCURRENCECACHERANGE_H

@class NSDate, NSTimeZone;

#import <Foundation/Foundation.h>


@interface CalEventOccurrenceCacheRange : NSObject

@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 ;


@end


#endif