// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTRANSITTRANSFERINFO_H
#define GEOTRANSITTRANSFERINFO_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOTransitTransferInfo : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSUInteger _transferMuid;
    unsigned int _transferTime;
    ? _flags;
}


@property (nonatomic) BOOL hasTransferMuid;
@property (nonatomic) BOOL hasTransferTime;
@property (nonatomic) NSUInteger transferMuid;
@property (nonatomic) unsigned int transferTime;
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
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif