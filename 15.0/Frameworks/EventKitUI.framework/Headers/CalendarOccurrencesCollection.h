// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALENDAROCCURRENCESCOLLECTION_H
#define CALENDAROCCURRENCESCOLLECTION_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CalendarOccurrencesCollection : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *allDayOccurrences; // ivar: _allDayOccurrences
@property (nonatomic) int generation; // ivar: _generation
@property (readonly, nonatomic) NSArray *occurrences; // ivar: _occurrences
@property (readonly, nonatomic) NSArray *timedOccurrences; // ivar: _timedOccurrences


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithOccurrences:(id)arg0 timedOccurrences:(id)arg1 allDayOccurrences:(id)arg2 ;
-(id)initWithOccurrences:(id)arg0 timedOccurrences:(id)arg1 allDayOccurrences:(id)arg2 generation:(int)arg3 ;


@end


#endif