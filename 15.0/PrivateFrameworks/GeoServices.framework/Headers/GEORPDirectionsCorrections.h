// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPDIRECTIONSCORRECTIONS_H
#define GEORPDIRECTIONSCORRECTIONS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSData, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEORPCorrectedCoordinate.h"

@interface GEORPDirectionsCorrections : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPCorrectedCoordinate *_arrivalCoordinate;
    NSData *_directionsResponseId;
    NSMutableArray *_instructionCorrections;
    NSString *_overviewScreenshotImageId;
    NSMutableArray *_problematicRouteIndexs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _noGoodRoutesShown;
    ? _flags;
}


@property (retain, nonatomic) GEORPCorrectedCoordinate *arrivalCoordinate;
@property (retain, nonatomic) NSData *directionsResponseId;
@property (readonly, nonatomic) BOOL hasArrivalCoordinate;
@property (readonly, nonatomic) BOOL hasDirectionsResponseId;
@property (nonatomic) BOOL hasNoGoodRoutesShown;
@property (readonly, nonatomic) BOOL hasOverviewScreenshotImageId;
@property (retain, nonatomic) NSMutableArray *instructionCorrections;
@property (nonatomic) BOOL noGoodRoutesShown;
@property (retain, nonatomic) NSString *overviewScreenshotImageId;
@property (retain, nonatomic) NSMutableArray *problematicRouteIndexs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)instructionCorrectionType;
+(Class)problematicRouteIndexType;
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
-(id)instructionCorrectionAtIndex:(NSUInteger)arg0 ;
-(id)jsonRepresentation;
-(id)problematicRouteIndexAtIndex:(NSUInteger)arg0 ;
-(void)addInstructionCorrection:(id)arg0 ;
-(void)addProblematicRouteIndex:(id)arg0 ;
-(void)clearInstructionCorrections;
-(void)clearProblematicRouteIndexs;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif