// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPGROUNDVIEWIMAGERESOURCE_H
#define GEORPGROUNDVIEWIMAGERESOURCE_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEORPGroundViewImageResource : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    unsigned int _cameraNumber;
    int _loadStatus;
    unsigned int _lod;
    ? _flags;
}


@property (nonatomic) unsigned int cameraNumber;
@property (nonatomic) BOOL hasCameraNumber;
@property (nonatomic) BOOL hasLoadStatus;
@property (nonatomic) BOOL hasLod;
@property (nonatomic) int loadStatus;
@property (nonatomic) unsigned int lod;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)loadStatusAsString:(int)arg0 ;
-(int)StringAsLoadStatus:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif