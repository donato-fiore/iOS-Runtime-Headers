// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBGROUPVIEWEXPOSURE_H
#define NTPBGROUPVIEWEXPOSURE_H

@class PBCodable, NSData, NSString, NSMutableArray;
@protocol NSCopying;



@interface NTPBGroupViewExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *articleViewingSessionId; // ivar: _articleViewingSessionId
@property (retain, nonatomic) NSString *curatedBatchId; // ivar: _curatedBatchId
@property (nonatomic) int curatedContentType; // ivar: _curatedContentType
@property (retain, nonatomic) NSString *curatedSubtype; // ivar: _curatedSubtype
@property (nonatomic) int feedAutoSubscribeType; // ivar: _feedAutoSubscribeType
@property (retain, nonatomic) NSData *feedViewExposureId; // ivar: _feedViewExposureId
@property (nonatomic) int groupArticleCountInForYou; // ivar: _groupArticleCountInForYou
@property (nonatomic) int groupDisplayMode; // ivar: _groupDisplayMode
@property (nonatomic) int groupDisplayRankInForYou; // ivar: _groupDisplayRankInForYou
@property (retain, nonatomic) NSString *groupExposedInLocationId; // ivar: _groupExposedInLocationId
@property (retain, nonatomic) NSString *groupExposedInSourceChannelId; // ivar: _groupExposedInSourceChannelId
@property (retain, nonatomic) NSString *groupFeedId; // ivar: _groupFeedId
@property (nonatomic) int groupFormationReason; // ivar: _groupFormationReason
@property (nonatomic) int groupLocation; // ivar: _groupLocation
@property (nonatomic) int groupLocationFeedType; // ivar: _groupLocationFeedType
@property (nonatomic) int groupPresentationReason; // ivar: _groupPresentationReason
@property (nonatomic) int groupType; // ivar: _groupType
@property (retain, nonatomic) NSData *groupViewExposureId; // ivar: _groupViewExposureId
@property (retain, nonatomic) NSMutableArray *groupedArticleIds; // ivar: _groupedArticleIds
@property (retain, nonatomic) NSMutableArray *groupedIssueIds; // ivar: _groupedIssueIds
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (readonly, nonatomic) BOOL hasCuratedBatchId;
@property (nonatomic) BOOL hasCuratedContentType;
@property (readonly, nonatomic) BOOL hasCuratedSubtype;
@property (nonatomic) BOOL hasFeedAutoSubscribeType;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (nonatomic) BOOL hasGroupArticleCountInForYou;
@property (nonatomic) BOOL hasGroupDisplayMode;
@property (nonatomic) BOOL hasGroupDisplayRankInForYou;
@property (readonly, nonatomic) BOOL hasGroupExposedInLocationId;
@property (readonly, nonatomic) BOOL hasGroupExposedInSourceChannelId;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupFormationReason;
@property (nonatomic) BOOL hasGroupLocation;
@property (nonatomic) BOOL hasGroupLocationFeedType;
@property (nonatomic) BOOL hasGroupPresentationReason;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (nonatomic) BOOL hasIsIssueContext;
@property (nonatomic) BOOL hasIsSubscribedToGroupFeed;
@property (nonatomic) BOOL hasReachedEndOfGroup;
@property (nonatomic) BOOL hasScreenfulsFromTop;
@property (nonatomic) BOOL hasTopStoryMandatoryArticleCount;
@property (nonatomic) BOOL hasTopStoryOptionalArticleCount;
@property (nonatomic) BOOL isIssueContext; // ivar: _isIssueContext
@property (nonatomic) BOOL isSubscribedToGroupFeed; // ivar: _isSubscribedToGroupFeed
@property (retain, nonatomic) NSMutableArray *layoutIds; // ivar: _layoutIds
@property (nonatomic) BOOL reachedEndOfGroup; // ivar: _reachedEndOfGroup
@property (nonatomic) int screenfulsFromTop; // ivar: _screenfulsFromTop
@property (retain, nonatomic) NSMutableArray *sectionIds; // ivar: _sectionIds
@property (nonatomic) int topStoryMandatoryArticleCount; // ivar: _topStoryMandatoryArticleCount
@property (nonatomic) int topStoryOptionalArticleCount; // ivar: _topStoryOptionalArticleCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)curatedContentTypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedAutoSubscribeTypeAsString:(int)arg0 ;
-(id)groupFormationReasonAsString:(int)arg0 ;
-(id)groupLocationAsString:(int)arg0 ;
-(id)groupLocationFeedTypeAsString:(int)arg0 ;
-(id)groupPresentationReasonAsString:(int)arg0 ;
-(id)groupTypeAsString:(int)arg0 ;
-(id)groupedArticleIdsAtIndex:(NSUInteger)arg0 ;
-(id)groupedIssueIdsAtIndex:(NSUInteger)arg0 ;
-(id)layoutIdsAtIndex:(NSUInteger)arg0 ;
-(id)sectionIdsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsCuratedContentType:(id)arg0 ;
-(int)StringAsFeedAutoSubscribeType:(id)arg0 ;
-(int)StringAsGroupFormationReason:(id)arg0 ;
-(int)StringAsGroupLocation:(id)arg0 ;
-(int)StringAsGroupLocationFeedType:(id)arg0 ;
-(int)StringAsGroupPresentationReason:(id)arg0 ;
-(int)StringAsGroupType:(id)arg0 ;
-(void)addGroupedArticleIds:(id)arg0 ;
-(void)addGroupedIssueIds:(id)arg0 ;
-(void)addLayoutIds:(id)arg0 ;
-(void)addSectionIds:(id)arg0 ;
-(void)clearGroupedArticleIds;
-(void)clearGroupedIssueIds;
-(void)clearLayoutIds;
-(void)clearSectionIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif