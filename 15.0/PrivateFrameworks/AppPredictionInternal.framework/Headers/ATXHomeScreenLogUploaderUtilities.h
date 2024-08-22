// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXHOMESCREENLOGUPLOADERUTILITIES_H
#define ATXHOMESCREENLOGUPLOADERUTILITIES_H


#import <Foundation/Foundation.h>


@interface ATXHomeScreenLogUploaderUtilities : NSObject



+(BOOL)_isDwellLongEnoughForPseudoTap:(id)arg0 endingEventTime:(CGFloat)arg1 ;
+(BOOL)isFirstPartyApp:(id)arg0 ;
+(BOOL)isRotationSessionDueToProactive:(id)arg0 ;
+(BOOL)isRotationSessionDueToUserScroll:(id)arg0 ;
+(BOOL)isValidAppLaunch:(id)arg0 ;
+(id)_keyByConcatenatingAccumulatorKey:(id)arg0 withString:(id)arg1 ;
+(id)abGroup;
+(id)countsForRotationEngagementStatusHistory:(id)arg0 ;
+(id)keyByConcatenatingAccumulatorKey:(id)arg0 withLocation:(NSUInteger)arg1 ;
+(id)keyByConcatenatingAccumulatorKey:(id)arg0 withSize:(NSUInteger)arg1 ;
+(id)stackShownEventsForPseudoTapIfPossible:(id)arg0 currentEvent:(id)arg1 ;
+(int)suggestionReasonForSuggestionLayout:(id)arg0 ;
+(void)add:(NSUInteger)arg0 toDictionary:(id)arg1 forKey:(id)arg2 ;
+(void)add:(NSUInteger)arg0 toTwoLevelDictionary:(id)arg1 forKey1:(id)arg2 key2:(id)arg3 ;
+(void)incrementDictionary:(id)arg0 forKey:(id)arg1 ;
+(void)incrementTwoLevelDictionary:(id)arg0 forKey1:(id)arg1 key2:(id)arg2 ;


@end


#endif