// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBTODAYSECTIONCONFIG_H
#define NTPBTODAYSECTIONCONFIG_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NTPBArticleIDsTodaySectionSpecificConfig.h"
#import "NTPBArticleListTodaySectionSpecificConfig.h"
#import "NTPBForYouTodaySectionSpecificConfig.h"
#import "NTPBItemsTodaySectionSpecificConfig.h"
#import "NTPBPersonalizedSectionPresenceConfig.h"
#import "NTPBPersonalizedTodaySectionSpecificConfig.h"
#import "NTPBTagTodaySectionSpecificConfig.h"

@interface NTPBTodaySectionConfig : PBCodable <NSCopying>

 {
    ? _queueMemberships;
    ? _has;
}


@property (retain, nonatomic) NTPBArticleIDsTodaySectionSpecificConfig *articleIDsTodaySectionConfig; // ivar: _articleIDsTodaySectionConfig
@property (retain, nonatomic) NTPBArticleListTodaySectionSpecificConfig *articleListTodaySectionConfig; // ivar: _articleListTodaySectionConfig
@property (retain, nonatomic) NSString *backgroundColorDark; // ivar: _backgroundColorDark
@property (retain, nonatomic) NSString *backgroundColorLight; // ivar: _backgroundColorLight
@property (retain, nonatomic) NSString *backgroundGradientColor; // ivar: _backgroundGradientColor
@property (nonatomic) NSUInteger cachedResultCutoffTime; // ivar: _cachedResultCutoffTime
@property (retain, nonatomic) NSString *compactName; // ivar: _compactName
@property (nonatomic) NSUInteger fallbackOrder; // ivar: _fallbackOrder
@property (nonatomic) BOOL filterNonSubscribedInFavoritesOnlyMode; // ivar: _filterNonSubscribedInFavoritesOnlyMode
@property (retain, nonatomic) NTPBForYouTodaySectionSpecificConfig *forYouTodaySectionConfig; // ivar: _forYouTodaySectionConfig
@property (nonatomic) BOOL glanceable; // ivar: _glanceable
@property (retain, nonatomic) NSString *groupActionTitle; // ivar: _groupActionTitle
@property (retain, nonatomic) NSString *groupActionUrl; // ivar: _groupActionUrl
@property (retain, nonatomic) NSString *groupNameActionUrl; // ivar: _groupNameActionUrl
@property (readonly, nonatomic) BOOL hasArticleIDsTodaySectionConfig;
@property (readonly, nonatomic) BOOL hasArticleListTodaySectionConfig;
@property (readonly, nonatomic) BOOL hasBackgroundColorDark;
@property (readonly, nonatomic) BOOL hasBackgroundColorLight;
@property (readonly, nonatomic) BOOL hasBackgroundGradientColor;
@property (nonatomic) BOOL hasCachedResultCutoffTime;
@property (readonly, nonatomic) BOOL hasCompactName;
@property (nonatomic) BOOL hasFallbackOrder;
@property (nonatomic) BOOL hasFilterNonSubscribedInFavoritesOnlyMode;
@property (readonly, nonatomic) BOOL hasForYouTodaySectionConfig;
@property (nonatomic) BOOL hasGlanceable;
@property (readonly, nonatomic) BOOL hasGroupActionTitle;
@property (readonly, nonatomic) BOOL hasGroupActionUrl;
@property (readonly, nonatomic) BOOL hasGroupNameActionUrl;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasInterSectionFilteringOptions;
@property (nonatomic) BOOL hasIntraSectionFilteringOptions;
@property (readonly, nonatomic) BOOL hasItemsTodaySectionConfig;
@property (nonatomic) BOOL hasMaximumStoriesAllocation;
@property (nonatomic) BOOL hasMinimumStoriesAllocation;
@property (readonly, nonatomic) BOOL hasMutingTagID;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasNameColorDark;
@property (readonly, nonatomic) BOOL hasNameColorLight;
@property (readonly, nonatomic) BOOL hasPersonalizationFeatureID;
@property (readonly, nonatomic) BOOL hasPersonalizedPresenceConfig;
@property (nonatomic) BOOL hasPersonalizedPresenceFeatureClickPrior;
@property (readonly, nonatomic) BOOL hasPersonalizedPresenceFeatureID;
@property (nonatomic) BOOL hasPersonalizedPresenceFeatureImpressionPrior;
@property (readonly, nonatomic) BOOL hasPersonalizedTodaySectionConfig;
@property (nonatomic) BOOL hasPresenceDeterminedByPersonalization;
@property (nonatomic) BOOL hasPromotionCriterion;
@property (nonatomic) BOOL hasReadArticlesFilterMethod;
@property (readonly, nonatomic) BOOL hasReferralBarName;
@property (nonatomic) BOOL hasSectionType;
@property (nonatomic) BOOL hasSeenArticlesFilterMethod;
@property (nonatomic) BOOL hasSeenArticlesMinimumTimeSinceFirstSeenToFilter;
@property (nonatomic) BOOL hasShownInFavoritesOnlyMode;
@property (readonly, nonatomic) BOOL hasTagTodaySectionConfig;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger interSectionFilteringOptions; // ivar: _interSectionFilteringOptions
@property (nonatomic) NSUInteger intraSectionFilteringOptions; // ivar: _intraSectionFilteringOptions
@property (retain, nonatomic) NTPBItemsTodaySectionSpecificConfig *itemsTodaySectionConfig; // ivar: _itemsTodaySectionConfig
@property (nonatomic) NSUInteger maximumStoriesAllocation; // ivar: _maximumStoriesAllocation
@property (nonatomic) NSUInteger minimumStoriesAllocation; // ivar: _minimumStoriesAllocation
@property (retain, nonatomic) NSString *mutingTagID; // ivar: _mutingTagID
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *nameColorDark; // ivar: _nameColorDark
@property (retain, nonatomic) NSString *nameColorLight; // ivar: _nameColorLight
@property (retain, nonatomic) NSString *personalizationFeatureID; // ivar: _personalizationFeatureID
@property (retain, nonatomic) NTPBPersonalizedSectionPresenceConfig *personalizedPresenceConfig; // ivar: _personalizedPresenceConfig
@property (nonatomic) NSUInteger personalizedPresenceFeatureClickPrior; // ivar: _personalizedPresenceFeatureClickPrior
@property (retain, nonatomic) NSString *personalizedPresenceFeatureID; // ivar: _personalizedPresenceFeatureID
@property (nonatomic) NSUInteger personalizedPresenceFeatureImpressionPrior; // ivar: _personalizedPresenceFeatureImpressionPrior
@property (retain, nonatomic) NTPBPersonalizedTodaySectionSpecificConfig *personalizedTodaySectionConfig; // ivar: _personalizedTodaySectionConfig
@property (nonatomic) BOOL presenceDeterminedByPersonalization; // ivar: _presenceDeterminedByPersonalization
@property (nonatomic) int promotionCriterion; // ivar: _promotionCriterion
@property (readonly, nonatomic) *NSUInteger queueMemberships;
@property (readonly, nonatomic) NSUInteger queueMembershipsCount;
@property (nonatomic) int readArticlesFilterMethod; // ivar: _readArticlesFilterMethod
@property (retain, nonatomic) NSString *referralBarName; // ivar: _referralBarName
@property (nonatomic) int sectionType; // ivar: _sectionType
@property (nonatomic) int seenArticlesFilterMethod; // ivar: _seenArticlesFilterMethod
@property (nonatomic) NSUInteger seenArticlesMinimumTimeSinceFirstSeenToFilter; // ivar: _seenArticlesMinimumTimeSinceFirstSeenToFilter
@property (nonatomic) BOOL shownInFavoritesOnlyMode; // ivar: _shownInFavoritesOnlyMode
@property (retain, nonatomic) NTPBTagTodaySectionSpecificConfig *tagTodaySectionConfig; // ivar: _tagTodaySectionConfig


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)queueMembershipAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addQueueMembership:(NSUInteger)arg0 ;
-(void)clearQueueMemberships;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif