// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDDOTPLACE_H
#define GEOPDDOTPLACE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEOLatLng.h"
#import "GEOPDMapsIdentifier.h"
#import "GEOStyleAttributes.h"

@interface GEOPDDotPlace : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_latLng;
    GEOPDMapsIdentifier *_mapsId;
    NSString *_name;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif