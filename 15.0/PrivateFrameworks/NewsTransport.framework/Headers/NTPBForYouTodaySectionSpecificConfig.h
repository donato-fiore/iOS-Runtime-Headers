// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBFORYOUTODAYSECTIONSPECIFICCONFIG_H
#define NTPBFORYOUTODAYSECTIONSPECIFICCONFIG_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBForYouTodaySectionSpecificConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger cutoffTime; // ivar: _cutoffTime
@property (nonatomic) int fetchingBin; // ivar: _fetchingBin
@property (nonatomic) BOOL hasCutoffTime;
@property (nonatomic) BOOL hasFetchingBin;
@property (nonatomic) BOOL hasHeadlinesPerFeedFetchCount;
@property (nonatomic) BOOL hasMinimumUpdateInterval;
@property (nonatomic) BOOL hasSubscriptionsFetchCount;
@property (nonatomic) NSUInteger headlinesPerFeedFetchCount; // ivar: _headlinesPerFeedFetchCount
@property (nonatomic) NSUInteger minimumUpdateInterval; // ivar: _minimumUpdateInterval
@property (nonatomic) NSUInteger subscriptionsFetchCount; // ivar: _subscriptionsFetchCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif