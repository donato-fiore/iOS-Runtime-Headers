// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDLOCATIONDIRECTEDSEARCHPARAMETERS_H
#define GEOPDLOCATIONDIRECTEDSEARCHPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEOPDNearestTransitParameters.h"
#import "GEOLatLng.h"
#import "GEOPDViewportInfo.h"

@interface GEOPDLocationDirectedSearchParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDNearestTransitParameters *_nearestTransitParameters;
    GEOLatLng *_searchLocation;
    NSString *_searchString;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _maxResults;
    int _searchType;
    int _sortOrder;
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
-(id)initWithSearchURLQuery:(id)arg0 coordinate:(struct ? )arg1 maxResults:(unsigned int)arg2 traits:(id)arg3 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif