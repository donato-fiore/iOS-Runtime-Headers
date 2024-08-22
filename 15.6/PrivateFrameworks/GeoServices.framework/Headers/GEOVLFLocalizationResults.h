// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOVLFLOCALIZATIONRESULTS_H
#define GEOVLFLOCALIZATIONRESULTS_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;


#import "GEOVLFCorrection.h"

@interface GEOVLFLocalizationResults : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOVLFPositionContextClassification _positionContextClassification;
    NSMutableArray *_localizationDetails;
    GEOVLFCorrection *_vlfCorrection;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _vlfFinalState;
    ? _flags;
}


@property (nonatomic) BOOL hasPositionContextClassification;
@property (readonly, nonatomic) BOOL hasVlfCorrection;
@property (nonatomic) BOOL hasVlfFinalState;
@property (retain, nonatomic) NSMutableArray *localizationDetails;
@property (nonatomic) GEOVLFPositionContextClassification positionContextClassification;
@property (retain, nonatomic) GEOVLFCorrection *vlfCorrection;
@property (nonatomic) int vlfFinalState;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)localizationDetailsAtIndex:(NSUInteger)arg0 ;
-(id)vlfFinalStateAsString:(int)arg0 ;
-(int)StringAsVlfFinalState:(id)arg0 ;
-(void)addLocalizationDetails:(id)arg0 ;
-(void)clearLocalizationDetails;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif