// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLPRVALIDATIONRANGE_H
#define GEOLPRVALIDATIONRANGE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEOLPRValidationRange : PBCodable <NSCopying>

 {
    NSString *_validCharacters;
    int _end;
    int _start;
    ? _flags;
}


@property (nonatomic) int end;
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) BOOL hasStart;
@property (readonly, nonatomic) BOOL hasValidCharacters;
@property (nonatomic) int start;
@property (retain, nonatomic) NSString *validCharacters;


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
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif