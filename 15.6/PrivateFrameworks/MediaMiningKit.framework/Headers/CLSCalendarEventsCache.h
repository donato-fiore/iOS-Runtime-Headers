// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSCALENDAREVENTSCACHE_H
#define CLSCALENDAREVENTSCACHE_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface CLSCalendarEventsCache : NSObject

@property (readonly, nonatomic) NSMutableSet *years; // ivar: _years


-(BOOL)hasEventsFromStartDate:(id)arg0 toEndDate:(id)arg1 ;
-(id)_storeDayForDate:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)debugDescription;
-(id)eventsForDate:(id)arg0 ;
-(id)eventsForStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)init;
-(void)_enumerateDaysFromStartDate:(id)arg0 toEndDate:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateEventsFromStartDate:(id)arg0 toEndDate:(id)arg1 usingBlock:(id)arg2 ;
-(void)insertEvent:(id)arg0 ;


@end


#endif