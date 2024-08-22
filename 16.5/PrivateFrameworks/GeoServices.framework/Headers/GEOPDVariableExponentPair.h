// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDVARIABLEEXPONENTPAIR_H
#define GEOPDVARIABLEEXPONENTPAIR_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDClientRankingFeatureUnit.h"

@interface GEOPDVariableExponentPair : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOPDClientRankingFeatureUnit *_variable;
    unsigned int _exponent;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif