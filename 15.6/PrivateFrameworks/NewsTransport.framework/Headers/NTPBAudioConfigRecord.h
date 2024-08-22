// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBAUDIOCONFIGRECORD_H
#define NTPBAUDIOCONFIGRECORD_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "NTPBRecordBase.h"

@interface NTPBAudioConfigRecord : PBCodable <NSCopying>



@property (retain, nonatomic) NTPBRecordBase *base; // ivar: _base
@property (retain, nonatomic) NSString *configuration; // ivar: _configuration
@property (retain, nonatomic) NSString *curatedArticleIDs; // ivar: _curatedArticleIDs
@property (retain, nonatomic) NSString *dailyBriefingArticleID; // ivar: _dailyBriefingArticleID
@property (retain, nonatomic) NSString *featuredAudioArticleListID; // ivar: _featuredAudioArticleListID
@property (retain, nonatomic) NSString *feedConfiguration; // ivar: _feedConfiguration
@property (readonly, nonatomic) BOOL hasBase;
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (readonly, nonatomic) BOOL hasCuratedArticleIDs;
@property (readonly, nonatomic) BOOL hasDailyBriefingArticleID;
@property (readonly, nonatomic) BOOL hasFeaturedAudioArticleListID;
@property (readonly, nonatomic) BOOL hasFeedConfiguration;
@property (readonly, nonatomic) BOOL hasLatestAudioArticleListID;
@property (retain, nonatomic) NSMutableArray *heroArticleIDs; // ivar: _heroArticleIDs
@property (retain, nonatomic) NSString *latestAudioArticleListID; // ivar: _latestAudioArticleListID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)heroArticleIDsAtIndex:(NSUInteger)arg0 ;
-(void)addHeroArticleIDs:(id)arg0 ;
-(void)clearHeroArticleIDs;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif