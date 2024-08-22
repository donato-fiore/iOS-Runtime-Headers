// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPUSERFORMDETAILS_H
#define GEORPUSERFORMDETAILS_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEORPUserFormDetails : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    int _userFormStyle;
    ? _flags;
}


@property (nonatomic) BOOL hasUserFormStyle;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) int userFormStyle;


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
-(id)userFormStyleAsString:(int)arg0 ;
-(int)StringAsUserFormStyle:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif