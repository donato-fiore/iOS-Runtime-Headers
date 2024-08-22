// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPCORRECTEDFLAG_H
#define GEORPCORRECTEDFLAG_H

@class PBCodable;
@protocol NSCopying;



@interface GEORPCorrectedFlag : PBCodable <NSCopying>

 {
    int _flag;
    BOOL _correctedValue;
    BOOL _originalValue;
    ? _flags;
}


@property (nonatomic) BOOL correctedValue;
@property (nonatomic) int flag;
@property (nonatomic) BOOL hasCorrectedValue;
@property (nonatomic) BOOL hasFlag;
@property (nonatomic) BOOL hasOriginalValue;
@property (nonatomic) BOOL originalValue;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)flagAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsFlag:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif