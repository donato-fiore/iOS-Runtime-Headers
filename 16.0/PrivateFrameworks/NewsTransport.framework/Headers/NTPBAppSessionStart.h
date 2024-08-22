// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBAPPSESSIONSTART_H
#define NTPBAPPSESSIONSTART_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "NTPBWidgetEngagement.h"

@interface NTPBAppSessionStart : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int appsAutoSubscribeFeedCount; // ivar: _appsAutoSubscribeFeedCount
@property (retain, nonatomic) NSMutableArray *autoSubscribedFeedIds; // ivar: _autoSubscribedFeedIds
@property (retain, nonatomic) NSString *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSString *campaignType; // ivar: _campaignType
@property (nonatomic) int channelSubscriptionCount; // ivar: _channelSubscriptionCount
@property (retain, nonatomic) NSString *creativeId; // ivar: _creativeId
@property (retain, nonatomic) NSMutableArray *groupableFeedIds; // ivar: _groupableFeedIds
@property (nonatomic) BOOL hasAppsAutoSubscribeFeedCount;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (nonatomic) BOOL hasChannelSubscriptionCount;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (nonatomic) BOOL hasInternalAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasIsMarketingNotificationEnabled;
@property (nonatomic) BOOL hasIsNewIssuesNotificationEnabled;
@property (nonatomic) BOOL hasLastAppSessionTimestamp;
@property (readonly, nonatomic) BOOL hasNotificationArticleId;
@property (nonatomic) BOOL hasNotificationEnabledChannelsCount;
@property (readonly, nonatomic) BOOL hasNotificationId;
@property (readonly, nonatomic) BOOL hasNotificationSenderChannelId;
@property (readonly, nonatomic) BOOL hasNotificationSourceChannelId;
@property (nonatomic) BOOL hasNotificationType;
@property (nonatomic) BOOL hasNotitificationsEnabledChannelsCount;
@property (nonatomic) BOOL hasPortraitAutoSubscribeFeedCount;
@property (readonly, nonatomic) BOOL hasReferringSourceApplication;
@property (readonly, nonatomic) BOOL hasReferringUrl;
@property (nonatomic) BOOL hasSafariAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasSessionStartMethod;
@property (nonatomic) BOOL hasStartedFromNotification;
@property (nonatomic) BOOL hasTopicSubscriptionCount;
@property (readonly, nonatomic) BOOL hasUserActivityType;
@property (nonatomic) BOOL hasViewabilityState;
@property (nonatomic) BOOL hasWidgetArticleRank;
@property (readonly, nonatomic) BOOL hasWidgetEngagement;
@property (nonatomic) BOOL hasWidgetSection;
@property (nonatomic) BOOL hasWidgetSectionArticleRank;
@property (nonatomic) int internalAutoSubscribeFeedCount; // ivar: _internalAutoSubscribeFeedCount
@property (nonatomic) BOOL isMarketingNotificationEnabled; // ivar: _isMarketingNotificationEnabled
@property (nonatomic) BOOL isNewIssuesNotificationEnabled; // ivar: _isNewIssuesNotificationEnabled
@property (nonatomic) NSInteger lastAppSessionTimestamp; // ivar: _lastAppSessionTimestamp
@property (retain, nonatomic) NSString *notificationArticleId; // ivar: _notificationArticleId
@property (retain, nonatomic) NSMutableArray *notificationChannelIds; // ivar: _notificationChannelIds
@property (nonatomic) int notificationEnabledChannelsCount; // ivar: _notificationEnabledChannelsCount
@property (retain, nonatomic) NSString *notificationId; // ivar: _notificationId
@property (retain, nonatomic) NSString *notificationSenderChannelId; // ivar: _notificationSenderChannelId
@property (retain, nonatomic) NSString *notificationSourceChannelId; // ivar: _notificationSourceChannelId
@property (nonatomic) int notificationType; // ivar: _notificationType
@property (nonatomic) int notitificationsEnabledChannelsCount; // ivar: _notitificationsEnabledChannelsCount
@property (retain, nonatomic) NSMutableArray *paidSubscriptionChannelIds; // ivar: _paidSubscriptionChannelIds
@property (nonatomic) int portraitAutoSubscribeFeedCount; // ivar: _portraitAutoSubscribeFeedCount
@property (retain, nonatomic) NSString *referringSourceApplication; // ivar: _referringSourceApplication
@property (retain, nonatomic) NSString *referringUrl; // ivar: _referringUrl
@property (nonatomic) int safariAutoSubscribeFeedCount; // ivar: _safariAutoSubscribeFeedCount
@property (nonatomic) int sessionStartMethod; // ivar: _sessionStartMethod
@property (nonatomic) BOOL startedFromNotification; // ivar: _startedFromNotification
@property (retain, nonatomic) NSMutableArray *subscribedFeedIds; // ivar: _subscribedFeedIds
@property (nonatomic) int topicSubscriptionCount; // ivar: _topicSubscriptionCount
@property (retain, nonatomic) NSString *userActivityType; // ivar: _userActivityType
@property (nonatomic) int viewabilityState; // ivar: _viewabilityState
@property (retain, nonatomic) NSMutableArray *visibleViews; // ivar: _visibleViews
@property (nonatomic) int widgetArticleRank; // ivar: _widgetArticleRank
@property (retain, nonatomic) NTPBWidgetEngagement *widgetEngagement; // ivar: _widgetEngagement
@property (nonatomic) int widgetSection; // ivar: _widgetSection
@property (nonatomic) int widgetSectionArticleRank; // ivar: _widgetSectionArticleRank


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)autoSubscribedFeedIdsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)groupableFeedIdsAtIndex:(NSUInteger)arg0 ;
-(id)notificationChannelIdsAtIndex:(NSUInteger)arg0 ;
-(id)paidSubscriptionChannelIdsAtIndex:(NSUInteger)arg0 ;
-(id)subscribedFeedIdsAtIndex:(NSUInteger)arg0 ;
-(id)visibleViewsAtIndex:(NSUInteger)arg0 ;
-(id)widgetSectionAsString:(int)arg0 ;
-(int)StringAsWidgetSection:(id)arg0 ;
-(void)addAutoSubscribedFeedIds:(id)arg0 ;
-(void)addGroupableFeedIds:(id)arg0 ;
-(void)addNotificationChannelIds:(id)arg0 ;
-(void)addPaidSubscriptionChannelIds:(id)arg0 ;
-(void)addSubscribedFeedIds:(id)arg0 ;
-(void)addVisibleViews:(id)arg0 ;
-(void)clearAutoSubscribedFeedIds;
-(void)clearGroupableFeedIds;
-(void)clearNotificationChannelIds;
-(void)clearPaidSubscriptionChannelIds;
-(void)clearSubscribedFeedIds;
-(void)clearVisibleViews;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif