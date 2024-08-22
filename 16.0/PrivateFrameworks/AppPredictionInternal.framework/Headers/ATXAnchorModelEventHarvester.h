// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXANCHORMODELEVENTHARVESTER_H
#define ATXANCHORMODELEVENTHARVESTER_H


#import <Foundation/Foundation.h>


@interface ATXAnchorModelEventHarvester : NSObject



+(id)deduplicatedActionEventsByIdFromActionEvents:(id)arg0 ;
+(id)idsFromBiomeEvents:(id)arg0 ;
+(id)idsFromDuetEvents:(id)arg0 ;
+(id)negativeAppsGivenAllAppIds:(id)arg0 positiveAppIds:(id)arg1 ;
+(id)randomSampleFromArray:(id)arg0 sampleSize:(NSUInteger)arg1 ;
-(id)fetchEventsAfterAnchorOccurenceDate:(id)arg0 withBiomePublisher:(id)arg1 maxSecondsBeforeAnchor:(NSInteger)arg2 maxSecondsAfterAnchor:(NSInteger)arg3 ;
-(id)fetchEventsAfterAnchorOccurenceDate:(id)arg0 withBiomePublisher:(id)arg1 maxSecondsBeforeAnchor:(NSInteger)arg2 maxSecondsAfterAnchor:(NSInteger)arg3 isIncluded:(id)arg4 ;
-(id)fetchEventsAfterAnchorOccurrenceDate:(id)arg0 withDuetDataProviderClass:(Class)arg1 limit:(NSUInteger)arg2 maxSecondsBeforeAnchor:(NSInteger)arg3 maxSecondsAfterAnchor:(NSInteger)arg4 predicates:(id)arg5 ;
-(id)negativeActionsOnAnchorOccurrenceDate:(id)arg0 positiveActionEvents:(id)arg1 ;
-(id)negativeActionsOnAnchorOccurrenceDate:(id)arg0 positiveActionIds:(id)arg1 ;


@end


#endif