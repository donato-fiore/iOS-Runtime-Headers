// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSESCHEMAPSEMEDIAENTITYSIMILARITY_H
#define PSESCHEMAPSEMEDIAENTITYSIMILARITY_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface PSESchemaPSEMediaEntitySimilarity : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsSameMediaAlbum;
@property (nonatomic) BOOL hasIsSameMediaArtist;
@property (nonatomic) BOOL hasIsSameMediaItem;
@property (nonatomic) BOOL hasIsSameMediaTitle;
@property (nonatomic) BOOL isSameMediaAlbum; // ivar: _isSameMediaAlbum
@property (nonatomic) BOOL isSameMediaArtist; // ivar: _isSameMediaArtist
@property (nonatomic) BOOL isSameMediaItem; // ivar: _isSameMediaItem
@property (nonatomic) BOOL isSameMediaTitle; // ivar: _isSameMediaTitle
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsSameMediaAlbum;
-(void)deleteIsSameMediaArtist;
-(void)deleteIsSameMediaItem;
-(void)deleteIsSameMediaTitle;
-(void)writeTo:(id)arg0 ;


@end


#endif