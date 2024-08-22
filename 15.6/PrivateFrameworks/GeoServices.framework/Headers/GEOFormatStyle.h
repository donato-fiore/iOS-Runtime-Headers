// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOFORMATSTYLE_H
#define GEOFORMATSTYLE_H

@class PBCodable, PBUnknownFields, NSString;
@protocol GEOServerFormatStyle, NSCopying;



@interface GEOFormatStyle : PBCodable <GEOServerFormatStyle, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSString *_token;
    int _type;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasToken;
@property (nonatomic) BOOL hasType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger styleType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif