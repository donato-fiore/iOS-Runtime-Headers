// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOARGUIDANCE_H
#define GEOARGUIDANCE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOFormattedString.h"

@interface GEOARGuidance : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_arrowLabel;
    NSMutableArray *_gapRanges;
    GEOFormattedString *_instruction;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _type;
    ? _flags;
}


@property (retain, nonatomic) NSString *arrowLabel;
@property (retain, nonatomic) NSMutableArray *gapRanges;
@property (readonly, nonatomic) BOOL hasArrowLabel;
@property (readonly, nonatomic) BOOL hasInstruction;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) GEOFormattedString *instruction;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)gapRangeType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)gapRangeAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)addGapRange:(id)arg0 ;
-(void)clearGapRanges;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif