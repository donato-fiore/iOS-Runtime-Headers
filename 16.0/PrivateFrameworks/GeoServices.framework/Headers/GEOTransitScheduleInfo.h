// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTRANSITSCHEDULEINFO_H
#define GEOTRANSITSCHEDULEINFO_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOTransitEntry.h"

@interface GEOTransitScheduleInfo : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOTransitEntry *_entry;
}


@property (retain, nonatomic) GEOTransitEntry *entry;
@property (readonly, nonatomic) BOOL hasEntry;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)lineID;
-(NSUInteger)tripID;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)routingParameters;
-(id)staticDepartureDate;
-(id)windowStartDate;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif