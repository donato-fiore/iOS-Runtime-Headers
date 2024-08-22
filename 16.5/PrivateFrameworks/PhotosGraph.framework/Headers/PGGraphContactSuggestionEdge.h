// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHCONTACTSUGGESTIONEDGE_H
#define PGGRAPHCONTACTSUGGESTIONEDGE_H

@class NSString;


#import "PGGraphOptimizedEdge.h"

@interface PGGraphContactSuggestionEdge : PGGraphOptimizedEdge

@property (readonly, nonatomic) CGFloat addressScore; // ivar: _addressScore
@property (readonly, nonatomic) CGFloat birthdayScore; // ivar: _birthdayScore
@property (readonly, nonatomic) CGFloat calendarScore; // ivar: _calendarScore
@property (readonly) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) BOOL contactFaceprintMatch; // ivar: _contactFaceprintMatch
@property (readonly, nonatomic) CGFloat contactScore; // ivar: _contactScore
@property (readonly, nonatomic) CGFloat facetimeFaceprintConfidence; // ivar: _facetimeFaceprintConfidence
@property (readonly) BOOL isHighConfidence;
@property (readonly, nonatomic) CGFloat mentionedAddressScore; // ivar: _mentionedAddressScore
@property (readonly, nonatomic) NSString *messageGroupsDebug; // ivar: _messageGroupsDebug
@property (readonly, nonatomic) NSUInteger numberOfAppearancesInSharedAssets; // ivar: _numberOfAppearancesInSharedAssets
@property (readonly, nonatomic) NSUInteger numberOfCMMMoments; // ivar: _numberOfCMMMoments
@property (readonly, nonatomic) NSUInteger numberOfMatchedMessageGroups;
@property (readonly, nonatomic) NSUInteger numberOfMatchedRelationships;
@property (readonly, nonatomic) NSUInteger numberOfMomentsAtHome; // ivar: _numberOfMomentsAtHome
@property (readonly, nonatomic) NSUInteger numberOfMomentsAtMentionedAddress; // ivar: _numberOfMomentsAtMentionedAddress
@property (readonly, nonatomic) NSUInteger numberOfMomentsOverlappingWithCalendarEvents; // ivar: _numberOfMomentsOverlappingWithCalendarEvents
@property (readonly, nonatomic) NSUInteger numberOfWeakBirthdayMomentsAroundBirthdayDate; // ivar: _numberOfWeakBirthdayMomentsAroundBirthdayDate
@property (readonly, nonatomic) NSUInteger numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate; // ivar: _numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate
@property (readonly, nonatomic) BOOL personContactBiologicalSexMatch;
@property (readonly, nonatomic) BOOL personContactBiologicalSexMismatch;
@property (readonly, nonatomic) CGFloat potentialBirthdayScore; // ivar: _potentialBirthdayScore
@property (readonly, nonatomic) CGFloat relationshipScore; // ivar: _relationshipScore
@property (readonly, nonatomic) NSString *relationshipsDebug; // ivar: _relationshipsDebug
@property (readonly, nonatomic) CGFloat scoreAfterMessagePenalty; // ivar: _scoreAfterMessagePenalty
@property (readonly, nonatomic) NSUInteger sexMatch; // ivar: _sexMatch
@property (readonly, nonatomic) CGFloat sharedAssetScore; // ivar: _sharedAssetScore
@property (readonly, nonatomic) CGFloat sharedCMMScore; // ivar: _sharedCMMScore
@property (readonly, nonatomic) CGFloat socialGroupsConfidence; // ivar: _socialGroupsConfidence
@property (readonly, nonatomic) NSString *socialGroupsDebug; // ivar: _socialGroupsDebug


+(id)filter;
-(BOOL)hasProperties:(id)arg0 ;
-(BOOL)isFilteredOut;
-(id)_readableStringForContactSuggestionProperty:(id)arg0 ;
-(id)_stringForBiologicalSexMatch:(NSUInteger)arg0 ;
-(id)edgeDescription;
-(id)initFromPersonNode:(id)arg0 toContactNode:(id)arg1 confidence:(CGFloat)arg2 contactScore:(CGFloat)arg3 numberOfMomentsAtHome:(NSUInteger)arg4 numberOfMomentsAtMentionedAddress:(NSUInteger)arg5 numberOfWeakBirthdayMomentsAroundBirthdayDate:(NSUInteger)arg6 numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate:(NSUInteger)arg7 numberOfMomentsOverlappingWithCalendarEvents:(NSUInteger)arg8 numberOfAppearancesInSharedAssets:(NSUInteger)arg9 numberOfCMMMoments:(NSUInteger)arg10 facetimeFaceprintConfidence:(CGFloat)arg11 contactFaceprintMatch:(BOOL)arg12 relationshipsDebug:(id)arg13 socialGroupsConfidence:(CGFloat)arg14 socialGroupsDebug:(id)arg15 messageGroupsDebug:(id)arg16 birthdayScore:(CGFloat)arg17 potentialBirthdayScore:(CGFloat)arg18 addressScore:(CGFloat)arg19 mentionedAddressScore:(CGFloat)arg20 calendarScore:(CGFloat)arg21 sharedAssetScore:(CGFloat)arg22 sharedCMMScore:(CGFloat)arg23 relationshipScore:(CGFloat)arg24 scoreAfterMessagePenalty:(CGFloat)arg25 sexMatch:(NSUInteger)arg26 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif