// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXDUETDATAPROVIDER_H
#define ATXDUETDATAPROVIDER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ATXDuetDataProvider : NSObject

@property (readonly, nonatomic) NSArray *streamData; // ivar: _streamData


+(Class)supportedDuetEventClass;
+(NSInteger)supportedCoreDuetStream;
+(id)duetHelperStreamTypeToDuetEventStream:(NSInteger)arg0 ;
-(id)fetchEventIdentifierCountsBetweenStartDate:(id)arg0 andEndDate:(id)arg1 withPredicates:(id)arg2 ;
-(id)fetchEventIdentifierCountsBetweenStartDate:(id)arg0 andEndDate:(id)arg1 withPredicates:(id)arg2 dateBuckets:(id)arg3 ;
-(id)fetchEventsBetweenStartDate:(id)arg0 andEndDate:(id)arg1 withPredicates:(id)arg2 ;
-(id)fetchEventsBetweenStartDate:(id)arg0 andEndDate:(id)arg1 withPredicates:(id)arg2 limit:(NSUInteger)arg3 ascending:(BOOL)arg4 ;
-(id)filteredEventsWithPredicate:(id)arg0 ;
-(id)getUniqueValuesForPropertyKey:(id)arg0 ;
-(void)tagEventsWithLocationsFromLocationVisitsArray:(id)arg0 ;


@end


#endif