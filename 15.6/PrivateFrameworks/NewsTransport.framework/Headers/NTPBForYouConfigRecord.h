// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBFORYOUCONFIGRECORD_H
#define NTPBFORYOUCONFIGRECORD_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "NTPBRecordBase.h"

@interface NTPBForYouConfigRecord : PBCodable <NSCopying>



@property (retain, nonatomic) NTPBRecordBase *base; // ivar: _base
@property (retain, nonatomic) NSString *configuration; // ivar: _configuration
@property (retain, nonatomic) NSMutableArray *editorialArticleListIDs; // ivar: _editorialArticleListIDs
@property (retain, nonatomic) NSMutableArray *editorialSectionTagIDs; // ivar: _editorialSectionTagIDs
@property (readonly, nonatomic) BOOL hasBase;
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (readonly, nonatomic) BOOL hasSpotlightArticleID;
@property (readonly, nonatomic) BOOL hasTodayFeedConfiguration;
@property (readonly, nonatomic) BOOL hasTrendingArticleListID;
@property (retain, nonatomic) NSString *spotlightArticleID; // ivar: _spotlightArticleID
@property (retain, nonatomic) NSString *todayFeedConfiguration; // ivar: _todayFeedConfiguration
@property (retain, nonatomic) NSMutableArray *todayFeedTopStoriesArticleIDs; // ivar: _todayFeedTopStoriesArticleIDs
@property (retain, nonatomic) NSString *trendingArticleListID; // ivar: _trendingArticleListID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)editorialArticleListIDsAtIndex:(NSUInteger)arg0 ;
-(id)editorialSectionTagIDsAtIndex:(NSUInteger)arg0 ;
-(id)todayFeedTopStoriesArticleIDsAtIndex:(NSUInteger)arg0 ;
-(void)addEditorialArticleListIDs:(id)arg0 ;
-(void)addEditorialSectionTagIDs:(id)arg0 ;
-(void)addTodayFeedTopStoriesArticleIDs:(id)arg0 ;
-(void)clearEditorialArticleListIDs;
-(void)clearEditorialSectionTagIDs;
-(void)clearTodayFeedTopStoriesArticleIDs;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif