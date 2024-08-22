// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBUSERIGNOREFAVORITESSUGGESTION_H
#define NTPBUSERIGNOREFAVORITESSUGGESTION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBUserIgnoreFavoritesSuggestion : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIgnoreLocation;
@property (readonly, nonatomic) BOOL hasIgnoredFeedId;
@property (nonatomic) BOOL hasIgnoredFeedType;
@property (nonatomic) BOOL hasSuggestionPositionWhenIgnored;
@property (nonatomic) int ignoreLocation; // ivar: _ignoreLocation
@property (retain, nonatomic) NSString *ignoredFeedId; // ivar: _ignoredFeedId
@property (nonatomic) int ignoredFeedType; // ivar: _ignoredFeedType
@property (nonatomic) int suggestionPositionWhenIgnored; // ivar: _suggestionPositionWhenIgnored


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