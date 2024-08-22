// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGCURATEDCONTACTMATCHER_H
#define SGCURATEDCONTACTMATCHER_H


#import <Foundation/Foundation.h>


@interface SGCuratedContactMatcher : NSObject



+(BOOL)_compareContact:(id)arg0 cnContact:(id)arg1 newDetails:(*id)arg2 matchedDetails:(*id)arg3 matchPreference:(NSInteger)arg4 stopOnNewDetail:(BOOL)arg5 stopOnMatchedDetail:(BOOL)arg6 ;
+(BOOL)_isMeContact:(id)arg0 withContactStore:(id)arg1 ;
+(BOOL)compareContact:(id)arg0 cnContact:(id)arg1 stopOnNewDetail:(BOOL)arg2 stopOnMatchedDetail:(BOOL)arg3 matchPreference:(NSInteger)arg4 ;
+(id)_filterCandidates:(id)arg0 similarToName:(id)arg1 exceedingThreshold:(CGFloat)arg2 ;
+(id)_filterCandidates:(id)arg0 withUniqueDetailMatchesToContact:(id)arg1 andFeatures:(struct ? *)arg2 ;
+(id)_findContactsMatchingPseudoContact:(id)arg0 withName:(id)arg1 andFeatures:(struct ? *)arg2 fromContactStore:(id)arg3 withKeysToFetch:(id)arg4 ;
+(id)_findFuzzyNameCandidatesMatchingPseudoContact:(id)arg0 withName:(id)arg1 andFeatures:(struct ? *)arg2 fromContactStore:(id)arg3 withKeysToFetch:(id)arg4 ;
+(id)_getPeopleWithNameToken:(id)arg0 fromContactStore:(id)arg1 withKeysToFetch:(id)arg2 ifMatchingPredicate:(id)arg3 ;
+(id)_realtimeContactFromPseudoContact:(id)arg0 andFeatures:(struct ? *)arg1 assimilatingMatchingCuratedContacts:(id)arg2 ;
+(id)_realtimeContactWithContactStore:(id)arg0 forPseudoContact:(id)arg1 fromEntity:(id)arg2 normalizedName:(id)arg3 error:(*id)arg4 ;
+(id)curatedContactsFromContactStore:(id)arg0 matchingPseudoContact:(id)arg1 error:(*id)arg2 ;
+(id)fetchMeContactFromContactStore:(id)arg0 ;
+(id)filterCandidates:(id)arg0 withDetailSubsetOfCNContact:(id)arg1 ;
+(id)realtimeContactWithContactStore:(id)arg0 forPseudoContact:(id)arg1 error:(*id)arg2 ;
+(id)realtimeContactWithContactStore:(id)arg0 forPseudoContact:(id)arg1 fromEntity:(id)arg2 error:(*id)arg3 ;
+(id)stripBirthdayFromSGContact:(id)arg0 ;
+(id)stripStaleBirthdayFromSGContact:(id)arg0 withEntity:(id)arg1 ;
+(void)clearMeContactCache;
+(void)compareContact:(id)arg0 cnContact:(id)arg1 newDetails:(*id)arg2 matchedDetails:(*id)arg3 matchPreference:(NSInteger)arg4 ;


@end


#endif