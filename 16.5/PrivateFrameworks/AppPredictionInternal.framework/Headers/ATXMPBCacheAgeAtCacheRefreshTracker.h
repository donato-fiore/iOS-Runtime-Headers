// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMPBCACHEAGEATCACHEREFRESHTRACKER_H
#define ATXMPBCACHEAGEATCACHEREFRESHTRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXMPBCacheAgeAtCacheRefreshTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (nonatomic) unsigned int cacheAge; // ivar: _cacheAge
@property (retain, nonatomic) NSString *cacheName; // ivar: _cacheName
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (nonatomic) BOOL hasCacheAge;
@property (readonly, nonatomic) BOOL hasCacheName;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif