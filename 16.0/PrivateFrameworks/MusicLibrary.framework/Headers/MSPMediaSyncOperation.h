// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPMEDIASYNCOPERATION_H
#define MSPMEDIASYNCOPERATION_H

@class PBCodable;
@protocol NSCopying;


#import "MIPAlbum.h"
#import "MIPArtist.h"
#import "MIPGenre.h"
#import "MIPMediaItem.h"
#import "MIPMultiverseIdentifier.h"
#import "MIPPlaylist.h"
#import "MIPSeries.h"

@interface MSPMediaSyncOperation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) MIPAlbum *album; // ivar: _album
@property (retain, nonatomic) MIPArtist *artist; // ivar: _artist
@property (retain, nonatomic) MIPGenre *genre; // ivar: _genre
@property (readonly, nonatomic) BOOL hasAlbum;
@property (readonly, nonatomic) BOOL hasArtist;
@property (readonly, nonatomic) BOOL hasGenre;
@property (readonly, nonatomic) BOOL hasMediaItem;
@property (readonly, nonatomic) BOOL hasMultiverseId;
@property (nonatomic) BOOL hasOperationType;
@property (readonly, nonatomic) BOOL hasPlaylist;
@property (readonly, nonatomic) BOOL hasSeries;
@property (retain, nonatomic) MIPMediaItem *mediaItem; // ivar: _mediaItem
@property (retain, nonatomic) MIPMultiverseIdentifier *multiverseId; // ivar: _multiverseId
@property (nonatomic) int operationType; // ivar: _operationType
@property (retain, nonatomic) MIPPlaylist *playlist; // ivar: _playlist
@property (retain, nonatomic) MIPSeries *series; // ivar: _series


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)operationTypeAsString:(int)arg0 ;
-(int)StringAsOperationType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif