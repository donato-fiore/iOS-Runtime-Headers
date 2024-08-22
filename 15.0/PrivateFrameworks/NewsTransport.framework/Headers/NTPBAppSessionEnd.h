// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBAPPSESSIONEND_H
#define NTPBAPPSESSIONEND_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBAppSessionEnd : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger appSessionDuration; // ivar: _appSessionDuration
@property (nonatomic) int appsAutoSubscribeFeedCount; // ivar: _appsAutoSubscribeFeedCount
@property (retain, nonatomic) NSMutableArray *autoSubscribedFeedIds; // ivar: _autoSubscribedFeedIds
@property (nonatomic) BOOL breakingNewsAvailableDuringSession; // ivar: _breakingNewsAvailableDuringSession
@property (nonatomic) BOOL breakingNewsDismissedDuringSession; // ivar: _breakingNewsDismissedDuringSession
@property (nonatomic) int channelSubscriptionCount; // ivar: _channelSubscriptionCount
@property (retain, nonatomic) NSMutableArray *groupableFeedIds; // ivar: _groupableFeedIds
@property (nonatomic) BOOL hasAppSessionDuration;
@property (nonatomic) BOOL hasAppsAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasBreakingNewsAvailableDuringSession;
@property (nonatomic) BOOL hasBreakingNewsDismissedDuringSession;
@property (nonatomic) BOOL hasChannelSubscriptionCount;
@property (nonatomic) BOOL hasInternalAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasNotificationEnabledChannelsCount;
@property (nonatomic) BOOL hasNotitificationsEnabledChannelsCount;
@property (nonatomic) BOOL hasPortraitAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasSafariAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasSessionEndReason;
@property (nonatomic) BOOL hasSyncedOtherUserIdDuringSession;
@property (nonatomic) BOOL hasTopicSubscriptionCount;
@property (nonatomic) int internalAutoSubscribeFeedCount; // ivar: _internalAutoSubscribeFeedCount
@property (retain, nonatomic) NSMutableArray *lastVisibleViews; // ivar: _lastVisibleViews
@property (retain, nonatomic) NSMutableArray *notificationChannelIds; // ivar: _notificationChannelIds
@property (nonatomic) int notificationEnabledChannelsCount; // ivar: _notificationEnabledChannelsCount
@property (nonatomic) int notitificationsEnabledChannelsCount; // ivar: _notitificationsEnabledChannelsCount
@property (retain, nonatomic) NSMutableArray *paidSubscriptionChannelIds; // ivar: _paidSubscriptionChannelIds
@property (nonatomic) int portraitAutoSubscribeFeedCount; // ivar: _portraitAutoSubscribeFeedCount
@property (nonatomic) int safariAutoSubscribeFeedCount; // ivar: _safariAutoSubscribeFeedCount
@property (nonatomic) int sessionEndReason; // ivar: _sessionEndReason
@property (retain, nonatomic) NSMutableArray *subscribedFeedIds; // ivar: _subscribedFeedIds
@property (nonatomic) BOOL syncedOtherUserIdDuringSession; // ivar: _syncedOtherUserIdDuringSession
@property (nonatomic) int topicSubscriptionCount; // ivar: _topicSubscriptionCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)autoSubscribedFeedIdsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)groupableFeedIdsAtIndex:(NSUInteger)arg0 ;
-(id)lastVisibleViewsAtIndex:(NSUInteger)arg0 ;
-(id)notificationChannelIdsAtIndex:(NSUInteger)arg0 ;
-(id)paidSubscriptionChannelIdsAtIndex:(NSUInteger)arg0 ;
-(id)sessionEndReasonAsString:(int)arg0 ;
-(id)subscribedFeedIdsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsSessionEndReason:(id)arg0 ;
-(void)addAutoSubscribedFeedIds:(id)arg0 ;
-(void)addGroupableFeedIds:(id)arg0 ;
-(void)addLastVisibleViews:(id)arg0 ;
-(void)addNotificationChannelIds:(id)arg0 ;
-(void)addPaidSubscriptionChannelIds:(id)arg0 ;
-(void)addSubscribedFeedIds:(id)arg0 ;
-(void)clearAutoSubscribedFeedIds;
-(void)clearGroupableFeedIds;
-(void)clearLastVisibleViews;
-(void)clearNotificationChannelIds;
-(void)clearPaidSubscriptionChannelIds;
-(void)clearSubscribedFeedIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif