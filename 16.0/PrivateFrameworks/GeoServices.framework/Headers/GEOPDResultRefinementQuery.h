// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDRESULTREFINEMENTQUERY_H
#define GEOPDRESULTREFINEMENTQUERY_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOPDRefinementSessionState.h"

@interface GEOPDResultRefinementQuery : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_refinementSections;
    GEOPDRefinementSessionState *_refinementSessionState;
    NSMutableArray *_refinements;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _resultRefinementOriginType;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasRefinementSessionState;
@property (nonatomic) BOOL hasResultRefinementOriginType;
@property (retain, nonatomic) NSMutableArray *refinementSections;
@property (retain, nonatomic) GEOPDRefinementSessionState *refinementSessionState;
@property (retain, nonatomic) NSMutableArray *refinements;
@property (nonatomic) int resultRefinementOriginType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)refinementSectionType;
+(Class)refinementType;
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
-(id)refinementAtIndex:(NSUInteger)arg0 ;
-(id)refinementSectionAtIndex:(NSUInteger)arg0 ;
-(id)resultRefinementOriginTypeAsString:(int)arg0 ;
-(int)StringAsResultRefinementOriginType:(id)arg0 ;
-(void)addRefinement:(id)arg0 ;
-(void)addRefinementSection:(id)arg0 ;
-(void)clearRefinementSections;
-(void)clearRefinements;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif