// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDPLACEREFINEMENTPARAMETERS_H
#define GEOPDPLACEREFINEMENTPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSData, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOStructuredAddress.h"
#import "GEOLatLng.h"
#import "GEOPDMapsIdentifier.h"

@interface GEOPDPlaceRefinementParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOStructuredAddress *_addressHint;
    NSData *_addressObjectHint;
    NSMutableArray *_formattedAddressLineHints;
    GEOLatLng *_locationHint;
    GEOPDMapsIdentifier *_mapsId;
    NSUInteger _muid;
    NSString *_placeNameHint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _addressGeocodeAccuracyHint;
    int _placeTypeHint;
    int _resultProviderId;
    BOOL _supportCoordinatesOnlyRefinement;
    ? _flags;
}




-(BOOL)_hasRequiredFields;
-(BOOL)_routeHypothesisPlaceRefinementParametersIsEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)_routeHypothesisPlaceRefinementParametersHash;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 placeNameHint:(id)arg1 locationHint:(struct ? )arg2 ;
-(id)initWithMapItemToRefine:(id)arg0 coordinate:(struct ? )arg1 ;
-(id)initWithSearchURLQuery:(id)arg0 identifier:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif