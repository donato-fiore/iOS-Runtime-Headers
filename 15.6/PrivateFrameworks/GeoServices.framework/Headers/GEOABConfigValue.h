// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOABCONFIGVALUE_H
#define GEOABCONFIGVALUE_H

@class PBCodable, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEOABConfigValue : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    CGFloat _doubleValue;
    NSInteger _intValue;
    NSString *_stringValue;
    BOOL _boolValue;
    ? _flags;
}


@property (nonatomic) BOOL boolValue;
@property (nonatomic) CGFloat doubleValue;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasIntValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) NSInteger intValue;
@property (retain, nonatomic) NSString *stringValue;
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