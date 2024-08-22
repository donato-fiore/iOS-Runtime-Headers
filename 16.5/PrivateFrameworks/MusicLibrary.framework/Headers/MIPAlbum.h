// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIPALBUM_H
#define MIPALBUM_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "MIPArtist.h"

@interface MIPAlbum : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) MIPArtist *artist; // ivar: _artist
@property (retain, nonatomic) NSString *artworkId; // ivar: _artworkId
@property (retain, nonatomic) NSString *cloudId; // ivar: _cloudId
@property (retain, nonatomic) NSString *cloudUniversalLibraryId; // ivar: _cloudUniversalLibraryId
@property (nonatomic) BOOL compilation; // ivar: _compilation
@property (nonatomic) int favoriteState; // ivar: _favoriteState
@property (nonatomic) NSInteger favoritedDateTime; // ivar: _favoritedDateTime
@property (readonly, nonatomic) BOOL hasArtist;
@property (readonly, nonatomic) BOOL hasArtworkId;
@property (readonly, nonatomic) BOOL hasCloudId;
@property (readonly, nonatomic) BOOL hasCloudUniversalLibraryId;
@property (nonatomic) BOOL hasCompilation;
@property (nonatomic) BOOL hasFavoriteState;
@property (nonatomic) BOOL hasFavoritedDateTime;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasNumDiscs;
@property (nonatomic) BOOL hasNumTracks;
@property (nonatomic) BOOL hasPersistentId;
@property (readonly, nonatomic) BOOL hasSortName;
@property (nonatomic) BOOL hasStoreId;
@property (nonatomic) BOOL hasUserRating;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int numDiscs; // ivar: _numDiscs
@property (nonatomic) int numTracks; // ivar: _numTracks
@property (nonatomic) NSInteger persistentId; // ivar: _persistentId
@property (retain, nonatomic) NSString *sortName; // ivar: _sortName
@property (nonatomic) NSInteger storeId; // ivar: _storeId
@property (nonatomic) int userRating; // ivar: _userRating


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