// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTRANSITLISTTIMEINSTRUCTION_H
#define GEOTRANSITLISTTIMEINSTRUCTION_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol GEOComposedRouteStepTransitInstructionMerging, NSCopying;


#import "GEOFormattedString.h"

@interface GEOTransitListTimeInstruction : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_primaryText;
    GEOFormattedString *_secondaryText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _hideWhenListCollapsed;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasHideWhenListCollapsed;
@property (readonly, nonatomic) BOOL hasPrimaryText;
@property (readonly, nonatomic) BOOL hasSecondaryText;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideWhenListCollapsed;
@property (retain, nonatomic) GEOFormattedString *primaryText;
@property (retain, nonatomic) GEOFormattedString *secondaryText;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)_transit_hasAnyFieldSet;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)_transit_mergeFrom:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif