// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBPREFETCHCONFIG_H
#define NTPBPREFETCHCONFIG_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBPrefetchConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL backgroundFetchEnabled; // ivar: _backgroundFetchEnabled
@property (nonatomic) BOOL backgroundFetchEnabled2; // ivar: _backgroundFetchEnabled2
@property (nonatomic) CGFloat backgroundFetchMinimumInterval; // ivar: _backgroundFetchMinimumInterval
@property (nonatomic) NSInteger feedPrefetchFavoritesLimit; // ivar: _feedPrefetchFavoritesLimit
@property (nonatomic) BOOL feedPrefetchForYou; // ivar: _feedPrefetchForYou
@property (nonatomic) BOOL hasBackgroundFetchEnabled;
@property (nonatomic) BOOL hasBackgroundFetchEnabled2;
@property (nonatomic) BOOL hasBackgroundFetchMinimumInterval;
@property (nonatomic) BOOL hasFeedPrefetchFavoritesLimit;
@property (nonatomic) BOOL hasFeedPrefetchForYou;
@property (nonatomic) BOOL hasPrefetchedForYouExpiration;
@property (nonatomic) NSInteger prefetchedForYouExpiration; // ivar: _prefetchedForYouExpiration


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