// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDGEOCODINGPARAMETERS_H
#define GEOPDGEOCODINGPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEOStructuredAddress.h"
#import "GEOPDViewportInfo.h"

@interface GEOPDGeocodingParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_queryString;
    GEOStructuredAddress *_structuredAddress;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _maxResults;
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
-(id)initWithForwardGeocodeAddress:(id)arg0 addressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3 ;
-(id)initWithForwardGeocodeAddress:(id)arg0 maxResults:(unsigned int)arg1 traits:(id)arg2 ;
-(id)initWithForwardGeocodeAddressString:(id)arg0 maxResults:(unsigned int)arg1 traits:(id)arg2 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif