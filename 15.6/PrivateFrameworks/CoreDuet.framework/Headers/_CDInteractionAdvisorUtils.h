// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDINTERACTIONADVISORUTILS_H
#define _CDINTERACTIONADVISORUTILS_H


#import <Foundation/Foundation.h>


@interface _CDInteractionAdvisorUtils : NSObject



+(BOOL)adjustRanker:(id)arg0 forModel:(NSUInteger)arg1 ;
+(BOOL)contact:(id)arg0 mayRepresentTheSamePersonAsOneOf:(id)arg1 ;
+(NSUInteger)modelTypeForConsumerIdentifier:(id)arg0 modelSettings:(id)arg1 ;
+(id)adviceBasedOnInteractions:(id)arg0 forContacts:(id)arg1 andRanker:(id)arg2 ignoringContacts:(id)arg3 withLimit:(NSUInteger)arg4 aggregateByIdentifier:(BOOL)arg5 requireOneOutgoingInteraction:(BOOL)arg6 ;
+(id)contactsForIdentifiers:(id)arg0 ;
+(id)contactsInInteraction:(id)arg0 ;
+(id)createTimePredicateForReferenceDate:(id)arg0 recentLookBackDays:(int)arg1 windowHours:(int)arg2 lookBackWeeks:(int)arg3 lookAheadWeeks:(int)arg4 ;
+(id)hashForAdviceWithContact:(id)arg0 account:(id)arg1 bundleId:(id)arg2 mechanism:(NSInteger)arg3 ;
+(id)inferConsumerIdentifierFromSettings:(id)arg0 ;
+(id)nameFromModelID:(NSUInteger)arg0 ;
+(id)rankContacts:(id)arg0 basedOnInteractions:(id)arg1 andRanker:(id)arg2 ;
+(id)stringKeyForAdvice:(id)arg0 ;
+(id)unionSet:(id)arg0 withSet:(id)arg1 ;
+(void)adjustForConsumerSettings:(id)arg0 modelSettings:(id)arg1 andRanker:(id)arg2 ;
+(void)updateConsumerModelSettings:(id)arg0 ;


@end


#endif