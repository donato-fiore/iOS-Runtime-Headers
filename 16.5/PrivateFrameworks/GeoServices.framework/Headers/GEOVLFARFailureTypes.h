// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOVLFARFAILURETYPES_H
#define GEOVLFARFAILURETYPES_H

@class PBCodable;
@protocol NSCopying;



@interface GEOVLFARFailureTypes : PBCodable <NSCopying>

 {
    BOOL _arWalkingNoLabels;
    BOOL _arWalkingUndulationFailure;
    ? _flags;
}


@property (nonatomic) BOOL arWalkingNoLabels;
@property (nonatomic) BOOL arWalkingUndulationFailure;
@property (nonatomic) BOOL hasArWalkingNoLabels;
@property (nonatomic) BOOL hasArWalkingUndulationFailure;


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