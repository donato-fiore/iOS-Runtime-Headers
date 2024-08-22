// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOGEOSERVICETAG_H
#define GEOGEOSERVICETAG_H

@class PBCodable, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEOGeoServiceTag : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSString *_tag;
    int _serviceType;
    ? _flags;
}


@property (nonatomic) BOOL hasServiceType;
@property (nonatomic) int serviceType;
@property (retain, nonatomic) NSString *tag;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(id)defaultTag;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)serviceTypeAsString:(int)arg0 ;
-(int)StringAsServiceType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif