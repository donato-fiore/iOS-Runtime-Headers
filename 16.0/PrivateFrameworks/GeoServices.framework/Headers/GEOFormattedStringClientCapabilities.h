// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOFORMATTEDSTRINGCLIENTCAPABILITIES_H
#define GEOFORMATTEDSTRINGCLIENTCAPABILITIES_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOFormattedStringClientCapabilities : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    BOOL _concatenatingFormatStringsSupported;
    BOOL _styleSupported;
    BOOL _timestampFormatPatternSupported;
    ? _flags;
}


@property (nonatomic) BOOL concatenatingFormatStringsSupported;
@property (nonatomic) BOOL hasConcatenatingFormatStringsSupported;
@property (nonatomic) BOOL hasStyleSupported;
@property (nonatomic) BOOL hasTimestampFormatPatternSupported;
@property (nonatomic) BOOL styleSupported;
@property (nonatomic) BOOL timestampFormatPatternSupported;
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