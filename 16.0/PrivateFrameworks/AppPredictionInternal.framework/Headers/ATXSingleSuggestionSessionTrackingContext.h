// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSINGLESUGGESTIONSESSIONTRACKINGCONTEXT_H
#define ATXSINGLESUGGESTIONSESSIONTRACKINGCONTEXT_H

@class NSMutableSet, NSMutableArray, NSMutableDictionary, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXSingleSuggestionSessionTrackingContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableSet *appPredictionPanelIds; // ivar: _appPredictionPanelIds
@property (retain, nonatomic) NSMutableArray *completedSessions; // ivar: _completedSessions
@property (retain, nonatomic) NSMutableDictionary *currentlyTrackedSessions; // ivar: _currentlyTrackedSessions
@property (retain, nonatomic) NSUUID *mostRecentActionSpotlightBlendingCacheUUID; // ivar: _mostRecentActionSpotlightBlendingCacheUUID
@property (retain, nonatomic) NSUUID *mostRecentAppSpotlightBlendingCacheUUID; // ivar: _mostRecentAppSpotlightBlendingCacheUUID
@property (retain, nonatomic) NSMutableDictionary *mostRecentClientCacheUpdateUUIDByClientModelId; // ivar: _mostRecentClientCacheUpdateUUIDByClientModelId
@property (retain, nonatomic) NSUUID *mostRecentHomescreenBlendingCacheUUID; // ivar: _mostRecentHomescreenBlendingCacheUUID
@property (retain, nonatomic) NSMutableSet *suggestionsWidgetIds; // ivar: _suggestionsWidgetIds


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXSingleSuggestionSessionTrackingContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)_persistentIdentifierForSuggestion:(id)arg0 ;
-(id)clientModelIdsToConsider;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMostRecentlySeenHomescreenBlendingCacheUUID:(id)arg0 mostRecentAppSpotlightBlendingCacheUUID:(id)arg1 mostRecentActionSpotlightBlendingCacheUUID:(id)arg2 suggestionsWidgetIds:(id)arg3 appPredictionPanelIds:(id)arg4 mostRecentClientCacheUpdateUUIDByClientModelId:(id)arg5 currentlyTrackedSessions:(id)arg6 completedSessions:(id)arg7 ;
-(id)removeStoredCompletedSessionsAndReturnCompletedSessionsCopy;
-(void)_tryMarkCurrentlyTrackedSessionsAsCompleteWithEventDate:(id)arg0 ;
-(void)_tryPruneSingleSuggestionSessionsIfOverMaxNum;
-(void)_updateCurrentlyTrackedSessionsWithSessionStatus:(NSUInteger)arg0 consumerSubType:(unsigned char)arg1 suggestionUUIDs:(id)arg2 blendingCacheUUID:(id)arg3 ;
-(void)_updateSingleSuggestionSessionsWithHomeScreenUIEvent:(id)arg0 ;
-(void)_updateSingleSuggestionSessionsWithSpotlightUIEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithBlendingUICacheUpdate:(id)arg0 ;
-(void)updateWithClientModelCacheUpdate:(id)arg0 ;
-(void)updateWithUIEvent:(id)arg0 ;


@end


#endif