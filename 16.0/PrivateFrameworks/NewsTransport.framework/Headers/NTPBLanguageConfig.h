// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBLANGUAGECONFIG_H
#define NTPBLANGUAGECONFIG_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "NTPBCoverArticlesConfig.h"
#import "NTPBCategory.h"
#import "NTPBVideoPlayerConfig.h"
#import "NTPBTopStoriesConfig.h"

@interface NTPBLanguageConfig : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *appleEditorialChannelId; // ivar: _appleEditorialChannelId
@property (retain, nonatomic) NSString *breakingNewsChannelId; // ivar: _breakingNewsChannelId
@property (retain, nonatomic) NSString *briefingsTagId; // ivar: _briefingsTagId
@property (retain, nonatomic) NTPBCoverArticlesConfig *coverArticlesConfig; // ivar: _coverArticlesConfig
@property (retain, nonatomic) NSString *editorialGemsSectionId; // ivar: _editorialGemsSectionId
@property (retain, nonatomic) NSString *exploreArticleId; // ivar: _exploreArticleId
@property (retain, nonatomic) NSString *featuredStoriesTagId; // ivar: _featuredStoriesTagId
@property (retain, nonatomic) NSString *forYouConfigId; // ivar: _forYouConfigId
@property (readonly, nonatomic) BOOL hasAppleEditorialChannelId;
@property (readonly, nonatomic) BOOL hasBreakingNewsChannelId;
@property (readonly, nonatomic) BOOL hasBriefingsTagId;
@property (readonly, nonatomic) BOOL hasCoverArticlesConfig;
@property (readonly, nonatomic) BOOL hasEditorialGemsSectionId;
@property (readonly, nonatomic) BOOL hasExploreArticleId;
@property (readonly, nonatomic) BOOL hasFeaturedStoriesTagId;
@property (readonly, nonatomic) BOOL hasForYouConfigId;
@property (readonly, nonatomic) BOOL hasHiddenFeedId;
@property (readonly, nonatomic) BOOL hasLanguageTag;
@property (readonly, nonatomic) BOOL hasMoreVideosChannelId;
@property (readonly, nonatomic) BOOL hasRootCategory;
@property (readonly, nonatomic) BOOL hasSavedStoriesTagId;
@property (readonly, nonatomic) BOOL hasShareVideoPlayerConfig;
@property (readonly, nonatomic) BOOL hasSpecialEventsChannelId;
@property (readonly, nonatomic) BOOL hasTopStoriesConfig;
@property (readonly, nonatomic) BOOL hasTopVideosChannelId;
@property (readonly, nonatomic) BOOL hasTrendingTagId;
@property (readonly, nonatomic) BOOL hasWidgetSectionConfigId;
@property (retain, nonatomic) NSString *hiddenFeedId; // ivar: _hiddenFeedId
@property (retain, nonatomic) NSString *languageTag; // ivar: _languageTag
@property (retain, nonatomic) NSMutableArray *mediaSharingBlacklistedChannelIds; // ivar: _mediaSharingBlacklistedChannelIds
@property (retain, nonatomic) NSString *moreVideosChannelId; // ivar: _moreVideosChannelId
@property (retain, nonatomic) NSMutableArray *onboardingTagIds; // ivar: _onboardingTagIds
@property (retain, nonatomic) NSMutableArray *preSubscribedFeedIds; // ivar: _preSubscribedFeedIds
@property (retain, nonatomic) NSMutableArray *preSubscribedNotificationsChannelIds; // ivar: _preSubscribedNotificationsChannelIds
@property (retain, nonatomic) NSMutableArray *recommendedNotificationChannels; // ivar: _recommendedNotificationChannels
@property (retain, nonatomic) NTPBCategory *rootCategory; // ivar: _rootCategory
@property (retain, nonatomic) NSString *savedStoriesTagId; // ivar: _savedStoriesTagId
@property (retain, nonatomic) NTPBVideoPlayerConfig *shareVideoPlayerConfig; // ivar: _shareVideoPlayerConfig
@property (retain, nonatomic) NSString *specialEventsChannelId; // ivar: _specialEventsChannelId
@property (retain, nonatomic) NTPBTopStoriesConfig *topStoriesConfig; // ivar: _topStoriesConfig
@property (retain, nonatomic) NSString *topVideosChannelId; // ivar: _topVideosChannelId
@property (retain, nonatomic) NSString *trendingTagId; // ivar: _trendingTagId
@property (retain, nonatomic) NSString *widgetSectionConfigId; // ivar: _widgetSectionConfigId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)mediaSharingBlacklistedChannelIdsAtIndex:(NSUInteger)arg0 ;
-(id)onboardingTagIdsAtIndex:(NSUInteger)arg0 ;
-(id)preSubscribedFeedIdsAtIndex:(NSUInteger)arg0 ;
-(id)preSubscribedNotificationsChannelIdsAtIndex:(NSUInteger)arg0 ;
-(id)recommendedNotificationChannelsAtIndex:(NSUInteger)arg0 ;
-(void)addMediaSharingBlacklistedChannelIds:(id)arg0 ;
-(void)addOnboardingTagIds:(id)arg0 ;
-(void)addPreSubscribedFeedIds:(id)arg0 ;
-(void)addPreSubscribedNotificationsChannelIds:(id)arg0 ;
-(void)addRecommendedNotificationChannels:(id)arg0 ;
-(void)clearMediaSharingBlacklistedChannelIds;
-(void)clearOnboardingTagIds;
-(void)clearPreSubscribedFeedIds;
-(void)clearPreSubscribedNotificationsChannelIds;
-(void)clearRecommendedNotificationChannels;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif