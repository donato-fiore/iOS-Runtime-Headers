// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXACTIONUTILS_H
#define _ATXACTIONUTILS_H


#import <Foundation/Foundation.h>


@interface _ATXActionUtils : NSObject



+(BOOL)isActionKey:(id)arg0 ;
+(BOOL)isCallIntentEquivalenceBetweenAction:(id)arg0 other:(id)arg1 ;
+(BOOL)isContainmentBetweenAction:(id)arg0 other:(id)arg1 ;
+(BOOL)isINStartCallIntentSupportedForAction:(id)arg0 ;
+(BOOL)isNSUAType:(id)arg0 ;
+(BOOL)isTitleEquivalenceBetweenAction:(id)arg0 other:(id)arg1 ;
+(BOOL)shouldAcceptAudioOrVideoCallIntent:(id)arg0 ;
+(BOOL)shouldAcceptMessageContent:(id)arg0 ;
+(BOOL)shouldPredictRecipient:(id)arg0 withDate:(id)arg1 andRecipientDate:(id)arg2 ;
+(BOOL)uniqueRecipientsMatchedBetweenIntent:(id)arg0 andIntent:(id)arg1 ;
+(CGFloat)calculateWeightWith:(NSUInteger)arg0 strength:(CGFloat)arg1 termFreq:(NSUInteger)arg2 docFreq:(NSUInteger)arg3 docLength:(NSUInteger)arg4 ;
+(CGFloat)computeNormalizedBetaDistEngagementScoreWithPriorAlpha:(int)arg0 priorBeta:(int)arg1 confirms:(CGFloat)arg2 rejects:(CGFloat)arg3 totalConfirms:(CGFloat)arg4 totalRejects:(CGFloat)arg5 ;
+(NSInteger)localHourOfDayFromDate:(id)arg0 ;
+(id)_extractValueInKeyValueBlob:(id)arg0 withKey:(id)arg1 ;
+(id)actionKeyFilterForCandidateBundleIds:(SEL)arg0 candidateActionTypes:(id)arg1 blacklist:(id)arg2 ;
+(id)atxActionFromProactiveSuggestion:(id)arg0 ;
+(id)atxActionsFromProactiveSuggestions:(id)arg0 ;
+(id)filterContainersWithNilAction:(id)arg0 ;
+(id)firstIntent:(id)arg0 inAppLaunchSession:(id)arg1 ;
+(id)getActionTypeFromActionKey:(id)arg0 ;
+(id)getActionTypesFromActionKeys:(id)arg0 ;
+(id)getActivityTypeFromNSUAType:(id)arg0 ;
+(id)getBundleIdAndActionTypeFromActionKey:(id)arg0 ;
+(id)getBundleIdFromActionKey:(id)arg0 ;
+(id)getBundleIdsFromActionKeys:(id)arg0 ;
+(id)limitParameterCombinations:(id)arg0 limit:(int)arg1 ;
+(id)markTodayInTitleAndUserActivityString:(id)arg0 withActionKey:(id)arg1 ;
+(id)partOfWeekStringForDate:(id)arg0 ;
+(id)recipientFromMessageIntent:(id)arg0 ;
+(id)sha256hex:(id)arg0 ;
+(id)slotSetsForAction:(id)arg0 ;
+(id)slotSetsForAction:(id)arg0 intentCache:(id)arg1 ;
+(id)stringForCoarseGeohash:(NSInteger)arg0 ;
+(id)stringForCoarseTimePOWLocation:(id)arg0 timeZone:(id)arg1 coarseGeohash:(NSInteger)arg2 ;
+(id)stringForDayOfWeek:(id)arg0 timeZone:(id)arg1 ;
+(id)stringForSpecificGeohash:(NSInteger)arg0 ;
+(id)stringForSpecificTimeDOWLocation:(id)arg0 timeZone:(id)arg1 geohash:(NSInteger)arg2 ;
+(id)stringForTimeOfDayAndDayOfWeek:(id)arg0 timeZone:(id)arg1 ;
+(id)stringForTwoHourTimeWindow:(id)arg0 timeZone:(id)arg1 ;
+(id)stringForZoom7Geohash:(NSInteger)arg0 ;
+(id)swapUserActivityString:(id)arg0 withActionKey:(id)arg1 withNewTitle:(id)arg2 withNewDateString:(id)arg3 ;
+(id)timeOfDayAndDayOfWeekForDate:(id)arg0 timeZone:(id)arg1 ;
+(int)timeBucketFromZeroToTwentyFour:(NSUInteger)arg0 ;
+(int)timeBucketFromZeroToTwentyFour:(id)arg0 timeZone:(id)arg1 ;
+(void)fetchDataAndUpdateContentAttributeSetForAction:(id)arg0 ;
+(void)prefillActionHistograms;
+(void)prefillActionSlotDatabase;
+(void)resetActionPredictions;


@end


#endif