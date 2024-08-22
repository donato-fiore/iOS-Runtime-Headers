// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPPLACEDISPLAY_H
#define MSPPLACEDISPLAY_H

@class PBCodable, PBUnknownFields, GEOMapItemStorage, NSString;
@protocol NSCopying;



@interface MSPPlaceDisplay : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
}


@property (readonly, nonatomic) BOOL hasPlaceMapItemStorage;
@property (readonly, nonatomic) BOOL hasSupersededSearchIdentifier;
@property (retain, nonatomic) GEOMapItemStorage *placeMapItemStorage; // ivar: _placeMapItemStorage
@property (retain, nonatomic) NSString *supersededSearchIdentifier; // ivar: _supersededSearchIdentifier
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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