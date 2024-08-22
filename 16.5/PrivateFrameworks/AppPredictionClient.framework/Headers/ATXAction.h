// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXACTION_H
#define ATXACTION_H

@class NSUserActivity, NSString, NSUUID, NSNumber, CSSearchableItemAttributeSet, NSDictionary, INIntent, UAUserActivityProxy;
@protocol BMStoreData, CRContent, ATXLazyIntentDelegateProtocol, NSSecureCoding, NSCopying, ATXSuggestionExecutableProtocol, ATXProtoBufWrapper, ATXMemoryPressureObserver;

#import <Foundation/Foundation.h>

#import "ATXActionCriteria.h"
#import "ATXLazyIntent.h"
#import "ATXAVRouteInfo.h"

@interface ATXAction : NSObject <BMStoreData, CRContent, ATXLazyIntentDelegateProtocol, NSSecureCoding, NSCopying, ATXSuggestionExecutableProtocol, ATXProtoBufWrapper, ATXMemoryPressureObserver>

 {
    NSUserActivity *_userActivity;
    NSUInteger _userActivityHash;
    NSString *_title;
    NSString *_subtitle;
    NSString *_languageCode;
    ATXActionCriteria *_criteria;
    ATXLazyIntent *_lazyIntent;
}


@property (readonly, nonatomic) NSUInteger actionType; // ivar: _actionType
@property (readonly, nonatomic) NSUUID *actionUUID; // ivar: _actionUUID
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSNumber *cachedHash; // ivar: _cachedHash
@property (readonly, nonatomic) CSSearchableItemAttributeSet *contentAttributeSet; // ivar: _contentAttributeSet
@property (readonly, nonatomic) ATXActionCriteria *criteria;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *heuristic; // ivar: _heuristic
@property (readonly, nonatomic) NSDictionary *heuristicMetadata; // ivar: _heuristicMetadata
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) BOOL isFutureMedia; // ivar: _isFutureMedia
@property (readonly, nonatomic) BOOL isHeuristic;
@property (readonly, nonatomic) BOOL isTVWhiteListedLongFormMedia; // ivar: _isTVWhiteListedLongFormMediaDoNotUseDirectly
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) ATXAVRouteInfo *routeInfo; // ivar: _routeInfo
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) UAUserActivityProxy *userActivityProxy; // ivar: _userActivityProxy
@property (readonly, nonatomic) NSString *userActivityString; // ivar: _userActivityString


+(BOOL)_isTVIntent:(id)arg0 bundleId:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)_userActivityHashForUserInfoDict:(id)arg0 activityType:(id)arg1 webpageURL:(id)arg2 ;
+(id)_extractValueInKeyValueBlob:(id)arg0 withKey:(id)arg1 ;
+(id)actionFromProactiveSuggestion:(id)arg0 ;
+(id)atx_doNotDisturbForCurrentLocationActionWithTitle:(id)arg0 subtitle:(id)arg1 heuristicName:(id)arg2 ;
+(id)atx_doNotDisturbForEventActionWithTitle:(id)arg0 subtitle:(id)arg1 eventTitle:(id)arg2 eventIdentifier:(id)arg3 eventUniqueID:(id)arg4 heuristicName:(id)arg5 ;
+(id)atx_sendMessageActionWithTitle:(id)arg0 subtitle:(id)arg1 recipientName:(id)arg2 recipientHandle:(id)arg3 text:(id)arg4 contactIdentifier:(id)arg5 conversationIdentifier:(id)arg6 eventIdentifier:(id)arg7 heuristicName:(id)arg8 ;
+(id)atx_setAirplaneModeActionWithTitle:(id)arg0 subtitle:(id)arg1 ;
+(id)atx_setAlarmActionWithTitle:(id)arg0 subtitle:(id)arg1 eventIdentifier:(id)arg2 eventTitle:(id)arg3 alarmDate:(id)arg4 heuristicName:(id)arg5 ;
+(id)atx_showCheckInActionWithTeamId:(id)arg0 userActivityString:(id)arg1 subtitle:(id)arg2 overrideBundleId:(id)arg3 suggestedEventUniqueKey:(id)arg4 heuristicName:(id)arg5 ;
+(id)atx_showCheckInActionWithTeamId:(id)arg0 userActivityString:(id)arg1 subtitle:(id)arg2 overrideBundleId:(id)arg3 suggestedEventUniqueKey:(id)arg4 heuristicName:(id)arg5 criteria:(id)arg6 ;
+(id)atx_startAudioCallActionWithTitle:(id)arg0 subtitle:(id)arg1 recipientName:(id)arg2 recipientHandle:(id)arg3 callService:(id)arg4 contactIdentifier:(id)arg5 eventIdentifier:(id)arg6 heuristicName:(id)arg7 ;
+(id)atx_startCallActionWithTitle:(id)arg0 subtitle:(id)arg1 recipientName:(id)arg2 recipientHandle:(id)arg3 callService:(id)arg4 contactIdentifier:(id)arg5 eventIdentifier:(id)arg6 heuristicName:(id)arg7 mediaType:(id)arg8 ;
+(id)atx_startVideoCallActionWithTitle:(id)arg0 subtitle:(id)arg1 recipientName:(id)arg2 recipientHandle:(id)arg3 callService:(id)arg4 contactIdentifier:(id)arg5 eventIdentifier:(id)arg6 heuristicName:(id)arg7 ;
+(id)atx_updateAlarmActionWithTitle:(id)arg0 subtitle:(id)arg1 alarmID:(id)arg2 alarmTitle:(id)arg3 heuristicName:(id)arg4 ;
+(id)atx_userActivityActionWithBestAppSuggestion:(id)arg0 title:(id)arg1 subtitle:(id)arg2 bundleID:(id)arg3 activityType:(id)arg4 heuristicName:(id)arg5 ;
+(id)atx_userActivityActionWithTitle:(id)arg0 subtitle:(id)arg1 bundleID:(id)arg2 activityType:(id)arg3 urlString:(id)arg4 userInfo:(id)arg5 heuristicName:(id)arg6 ;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)getActionKeyForBundleId:(id)arg0 actionType:(id)arg1 ;
+(id)getDateFromUserActivityString:(id)arg0 forActionKey:(id)arg1 ;
+(id)getNSUATypefromActivityType:(id)arg0 ;
+(id)unarchivedActionFromData:(id)arg0 ;
+(id)webUrlParsedForUserActivityWithUrlString:(id)arg0 ;
-(BOOL)_shouldUseCachedTitle:(id)arg0 cachedLanguageCode:(id)arg1 ;
-(BOOL)hasActionTitle;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAction:(id)arg0 ;
-(BOOL)isTVAction;
-(NSUInteger)hashSlotSetWithNonNilParameters:(id)arg0 ;
-(NSUInteger)paramHash;
-(id)_initWithCoder:(id)arg0 ;
-(id)_spotlightContentType;
-(id)_subtitle;
-(id)_title;
-(id)actionDescription;
-(id)actionKey;
-(id)actionSubtitle;
-(id)actionTitle;
-(id)actionWithRouteInfo:(id)arg0 ;
-(id)archivedDataForAction;
-(id)copyWithParameterWhitelist:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateForAction;
-(id)encodeAsProto;
-(id)init;
-(id)initFromBestAppSuggestion:(id)arg0 activity:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 contentAttributeSet:(id)arg4 itemIdentifier:(id)arg5 heuristic:(id)arg6 heuristicMetadata:(id)arg7 criteria:(id)arg8 isFutureMedia:(BOOL)arg9 title:(id)arg10 subtitle:(id)arg11 ;
-(id)initWithActivityProxy:(id)arg0 activity:(id)arg1 activityString:(id)arg2 itemIdentifier:(id)arg3 contentAttributeSet:(id)arg4 intent:(id)arg5 actionUUID:(id)arg6 bundleId:(id)arg7 type:(NSUInteger)arg8 heuristic:(id)arg9 heuristicMetadata:(id)arg10 criteria:(id)arg11 isFutureMedia:(BOOL)arg12 routeInfo:(id)arg13 title:(id)arg14 subtitle:(id)arg15 languageCode:(id)arg16 cachedHash:(id)arg17 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntent:(id)arg0 actionUUID:(id)arg1 bundleId:(id)arg2 heuristic:(id)arg3 heuristicMetadata:(id)arg4 criteria:(id)arg5 isFutureMedia:(BOOL)arg6 title:(id)arg7 subtitle:(id)arg8 ;
-(id)initWithNSUserActivity:(id)arg0 actionUUID:(id)arg1 bundleId:(id)arg2 contentAttributeSet:(id)arg3 itemIdentifier:(id)arg4 heuristic:(id)arg5 heuristicMetadata:(id)arg6 criteria:(id)arg7 isFutureMedia:(BOOL)arg8 title:(id)arg9 subtitle:(id)arg10 ;
-(id)initWithNSUserActivityString:(id)arg0 actionUUID:(id)arg1 bundleId:(id)arg2 itemIdentifier:(id)arg3 contentAttributeSet:(id)arg4 heuristic:(id)arg5 heuristicMetadata:(id)arg6 isFutureMedia:(BOOL)arg7 title:(id)arg8 subtitle:(id)arg9 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)predictionTypeStringForPET;
-(id)proto;
-(id)serialize;
-(id)slotSet;
-(id)underlyingInteraction;
-(void)dealloc;
-(void)didDeserializeIntent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleMemoryPressure;
-(void)invalidateCachedHash;
-(void)setLaunchIdForIntent:(id)arg0 ;
-(void)setSubtitleForSerializationToCache;
-(void)setTitleForSerializationToCache;


@end


#endif