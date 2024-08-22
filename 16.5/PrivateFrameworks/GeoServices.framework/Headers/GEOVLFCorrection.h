// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOVLFCORRECTION_H
#define GEOVLFCORRECTION_H

@class PBCodable;
@protocol NSCopying;



@interface GEOVLFCorrection : PBCodable <NSCopying>

 {
    unsigned int _altitudeCorrectionMagnitude;
    unsigned int _headingCorrectionMagnitude;
    unsigned int _locationCorrectionMagnitude;
    ? _flags;
}


@property (nonatomic) unsigned int altitudeCorrectionMagnitude;
@property (nonatomic) BOOL hasAltitudeCorrectionMagnitude;
@property (nonatomic) BOOL hasHeadingCorrectionMagnitude;
@property (nonatomic) BOOL hasLocationCorrectionMagnitude;
@property (nonatomic) unsigned int headingCorrectionMagnitude;
@property (nonatomic) unsigned int locationCorrectionMagnitude;


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