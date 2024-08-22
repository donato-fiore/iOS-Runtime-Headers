// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOABASSIGNINFO_H
#define GEOABASSIGNINFO_H

@class PBCodable, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEOAbAssignInfo : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSString *_abAssignId;
    NSUInteger _createdAtTimestamp;
    NSUInteger _relativeTimestamp;
    ? _flags;
}


@property (retain, nonatomic) NSString *abAssignId;
@property (nonatomic) NSUInteger createdAtTimestamp;
@property (readonly, nonatomic) BOOL hasAbAssignId;
@property (nonatomic) BOOL hasCreatedAtTimestamp;
@property (nonatomic) BOOL hasRelativeTimestamp;
@property (nonatomic) NSUInteger relativeTimestamp;
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