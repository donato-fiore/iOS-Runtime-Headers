// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPADDRESSCORRECTIONS_H
#define GEORPADDRESSCORRECTIONS_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEORPAccessPointCorrections.h"
#import "GEORPFeedbackAddressFields.h"
#import "GEORPCorrectedCoordinate.h"
#import "GEORPMapLocation.h"

@interface GEORPAddressCorrections : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAccessPointCorrections *_accessPoint;
    GEORPFeedbackAddressFields *_addressFields;
    GEORPCorrectedCoordinate *_coordinate;
    GEORPMapLocation *_mapLocation;
    GEORPFeedbackAddressFields *_originalAddressFields;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEORPAccessPointCorrections *accessPoint;
@property (retain, nonatomic) GEORPFeedbackAddressFields *addressFields;
@property (retain, nonatomic) GEORPCorrectedCoordinate *coordinate;
@property (readonly, nonatomic) BOOL hasAccessPoint;
@property (readonly, nonatomic) BOOL hasAddressFields;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (readonly, nonatomic) BOOL hasMapLocation;
@property (readonly, nonatomic) BOOL hasOriginalAddressFields;
@property (retain, nonatomic) GEORPMapLocation *mapLocation;
@property (retain, nonatomic) GEORPFeedbackAddressFields *originalAddressFields;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif