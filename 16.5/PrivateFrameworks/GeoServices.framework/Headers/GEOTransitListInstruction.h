// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTRANSITLISTINSTRUCTION_H
#define GEOTRANSITLISTINSTRUCTION_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString, NSArray;
@protocol GEOComposedRouteStepTransitInstructionMerging, NSCopying;


#import "GEOFormattedString.h"
#import "GEOTransitListTimeInstruction.h"

@interface GEOTransitListInstruction : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_commandFormatteds;
    NSMutableArray *_detailFormatteds;
    GEOFormattedString *_expandableListFormatted;
    NSMutableArray *_noticeFormatteds;
    NSMutableArray *_priceFormatteds;
    GEOTransitListTimeInstruction *_timeInstructions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *commandFormatteds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *detailFormatteds;
@property (retain, nonatomic) GEOFormattedString *expandableListFormatted;
@property (readonly, nonatomic) BOOL hasExpandableListFormatted;
@property (readonly, nonatomic) BOOL hasTimeInstructions;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *noticeFormatteds;
@property (retain, nonatomic) NSMutableArray *priceFormatteds;
@property (readonly, nonatomic) NSArray *serverFormattedCommands;
@property (readonly, nonatomic) NSArray *serverFormattedDetails;
@property (readonly, nonatomic) NSArray *serverFormattedNotices;
@property (readonly, nonatomic) NSArray *serverFormattedPrices;
@property (readonly) Class superclass;
@property (retain, nonatomic) GEOTransitListTimeInstruction *timeInstructions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)commandFormattedType;
+(Class)detailFormattedType;
+(Class)noticeFormattedType;
+(Class)priceFormattedType;
-(BOOL)_transit_hasAnyFieldSet;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)commandFormattedAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)detailFormattedAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)noticeFormattedAtIndex:(NSUInteger)arg0 ;
-(id)priceFormattedAtIndex:(NSUInteger)arg0 ;
-(void)_transit_mergeFrom:(id)arg0 ;
-(void)addCommandFormatted:(id)arg0 ;
-(void)addDetailFormatted:(id)arg0 ;
-(void)addNoticeFormatted:(id)arg0 ;
-(void)addPriceFormatted:(id)arg0 ;
-(void)clearCommandFormatteds;
-(void)clearDetailFormatteds;
-(void)clearNoticeFormatteds;
-(void)clearPriceFormatteds;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif