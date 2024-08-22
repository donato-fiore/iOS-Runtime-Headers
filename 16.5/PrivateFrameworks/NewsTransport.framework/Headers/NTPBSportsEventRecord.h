// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBSPORTSEVENTRECORD_H
#define NTPBSPORTSEVENTRECORD_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "NTPBRecordBase.h"

@interface NTPBSportsEventRecord : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *allowedStorefrontIDs; // ivar: _allowedStorefrontIDs
@property (retain, nonatomic) NTPBRecordBase *base; // ivar: _base
@property (retain, nonatomic) NSMutableArray *blockedStorefrontIDs; // ivar: _blockedStorefrontIDs
@property (retain, nonatomic) NSString *eventArticleListID; // ivar: _eventArticleListID
@property (retain, nonatomic) NSMutableArray *eventCompetitorTagIDs; // ivar: _eventCompetitorTagIDs
@property (retain, nonatomic) NSString *eventLeagueTagID; // ivar: _eventLeagueTagID
@property (readonly, nonatomic) BOOL hasBase;
@property (readonly, nonatomic) BOOL hasEventArticleListID;
@property (readonly, nonatomic) BOOL hasEventLeagueTagID;
@property (readonly, nonatomic) BOOL hasHighlightsArticleListID;
@property (nonatomic) BOOL hasIsDeprecated;
@property (nonatomic) BOOL hasMinimumNewsVersion;
@property (readonly, nonatomic) BOOL hasSportsData;
@property (readonly, nonatomic) BOOL hasSportsTheme;
@property (readonly, nonatomic) BOOL hasSuperfeedConfigResourceID;
@property (retain, nonatomic) NSString *highlightsArticleListID; // ivar: _highlightsArticleListID
@property (nonatomic) BOOL isDeprecated; // ivar: _isDeprecated
@property (nonatomic) NSInteger minimumNewsVersion; // ivar: _minimumNewsVersion
@property (retain, nonatomic) NSString *sportsData; // ivar: _sportsData
@property (retain, nonatomic) NSString *sportsTheme; // ivar: _sportsTheme
@property (retain, nonatomic) NSString *superfeedConfigResourceID; // ivar: _superfeedConfigResourceID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)allowedStorefrontIDsAtIndex:(NSUInteger)arg0 ;
-(id)blockedStorefrontIDsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventCompetitorTagIDsAtIndex:(NSUInteger)arg0 ;
-(void)addAllowedStorefrontIDs:(id)arg0 ;
-(void)addBlockedStorefrontIDs:(id)arg0 ;
-(void)addEventCompetitorTagIDs:(id)arg0 ;
-(void)clearAllowedStorefrontIDs;
-(void)clearBlockedStorefrontIDs;
-(void)clearEventCompetitorTagIDs;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif