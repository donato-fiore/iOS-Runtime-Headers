// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBFORYOUTODAYSECTIONSPECIFICCONFIG_H
#define NTPBFORYOUTODAYSECTIONSPECIFICCONFIG_H

@class PBCodable;
@protocol NSCopying;


#import "NTPBTodaySectionConfigArticle.h"

@interface NTPBForYouTodaySectionSpecificConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger cutoffTime; // ivar: _cutoffTime
@property (nonatomic) int fetchingBin; // ivar: _fetchingBin
@property (nonatomic) BOOL hasCutoffTime;
@property (nonatomic) BOOL hasFetchingBin;
@property (nonatomic) BOOL hasHeadlinesPerFeedFetchCount;
@property (readonly, nonatomic) BOOL hasLocalNewsPromotedArticle;
@property (nonatomic) BOOL hasLocalNewsPromotionIndex;
@property (nonatomic) BOOL hasMinimumUpdateInterval;
@property (nonatomic) BOOL hasSubscriptionsFetchCount;
@property (nonatomic) NSUInteger headlinesPerFeedFetchCount; // ivar: _headlinesPerFeedFetchCount
@property (retain, nonatomic) NTPBTodaySectionConfigArticle *localNewsPromotedArticle; // ivar: _localNewsPromotedArticle
@property (nonatomic) NSUInteger localNewsPromotionIndex; // ivar: _localNewsPromotionIndex
@property (nonatomic) NSUInteger minimumUpdateInterval; // ivar: _minimumUpdateInterval
@property (nonatomic) NSUInteger subscriptionsFetchCount; // ivar: _subscriptionsFetchCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif