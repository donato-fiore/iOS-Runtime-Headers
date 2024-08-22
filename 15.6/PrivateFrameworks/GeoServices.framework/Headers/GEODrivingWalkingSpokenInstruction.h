// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEODRIVINGWALKINGSPOKENINSTRUCTION_H
#define GEODRIVINGWALKINGSPOKENINSTRUCTION_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOFormattedString.h"

@interface GEODrivingWalkingSpokenInstruction : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_continueStage;
    NSMutableArray *_executionStages;
    GEOFormattedString *_initialStage;
    GEOFormattedString *_preparationStage;
    GEOFormattedString *_proceedStage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _shortChainedInstructionIndex;
    ? _flags;
}


@property (retain, nonatomic) GEOFormattedString *continueStage;
@property (retain, nonatomic) NSMutableArray *executionStages;
@property (readonly, nonatomic) BOOL hasContinueStage;
@property (readonly, nonatomic) BOOL hasInitialStage;
@property (readonly, nonatomic) BOOL hasPreparationStage;
@property (readonly, nonatomic) BOOL hasProceedStage;
@property (nonatomic) BOOL hasShortChainedInstructionIndex;
@property (retain, nonatomic) GEOFormattedString *initialStage;
@property (retain, nonatomic) GEOFormattedString *preparationStage;
@property (retain, nonatomic) GEOFormattedString *proceedStage;
@property (nonatomic) unsigned int shortChainedInstructionIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)executionStageType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)executionStageAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addExecutionStage:(id)arg0 ;
-(void)clearExecutionStages;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif