// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTRANSITBOARDINGINFO_H
#define GEOTRANSITBOARDINGINFO_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol GEOComposedRouteStepTransitInstructionMerging, NSCopying;


#import "GEOTransitListTimeInstruction.h"
#import "GEOTransitExitPlanInfo.h"

@interface GEOTransitBoardingInfo : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOTransitListTimeInstruction *_endTimeInstruction;
    NSMutableArray *_entrys;
    GEOTransitExitPlanInfo *_exitPlanInfo;
    GEOTransitListTimeInstruction *_preBoardingTimeInstruction;
    GEOTransitListTimeInstruction *_summaryTimeInstruction;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GEOTransitListTimeInstruction *endTimeInstruction;
@property (retain, nonatomic) NSMutableArray *entrys;
@property (retain, nonatomic) GEOTransitExitPlanInfo *exitPlanInfo;
@property (readonly, nonatomic) BOOL hasEndTimeInstruction;
@property (readonly, nonatomic) BOOL hasExitPlanInfo;
@property (readonly, nonatomic) BOOL hasPreBoardingTimeInstruction;
@property (readonly, nonatomic) BOOL hasSummaryTimeInstruction;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOTransitListTimeInstruction *preBoardingTimeInstruction;
@property (retain, nonatomic) GEOTransitListTimeInstruction *summaryTimeInstruction;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)entryType;
-(BOOL)_transit_hasAnyFieldSet;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)entryAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)_transit_mergeFrom:(id)arg0 ;
-(void)addEntry:(id)arg0 ;
-(void)clearEntrys;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif