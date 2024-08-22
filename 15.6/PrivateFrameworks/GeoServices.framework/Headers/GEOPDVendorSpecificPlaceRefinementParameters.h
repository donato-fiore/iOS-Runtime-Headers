// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDVENDORSPECIFICPLACEREFINEMENTPARAMETERS_H
#define GEOPDVENDORSPECIFICPLACEREFINEMENTPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSData, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOStructuredAddress.h"
#import "GEOLatLng.h"

@interface GEOPDVendorSpecificPlaceRefinementParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOStructuredAddress *_addressHint;
    NSData *_addressObjectHint;
    NSString *_externalItemId;
    NSMutableArray *_formattedAddressLineHints;
    GEOLatLng *_locationHint;
    NSUInteger _muid;
    NSString *_placeNameHint;
    NSString *_vendorId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _addressGeocodeAccuracyHint;
    int _placeTypeHint;
    int _resultProviderId;
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
-(id)initWithExternalBusinessID:(id)arg0 contentProvider:(id)arg1 ;
-(id)initWithMapItemToRefine:(id)arg0 coordinate:(struct ? )arg1 contentProvider:(id)arg2 ;
-(id)initWithMuid:(NSUInteger)arg0 locationHint:(struct ? )arg1 placeNameHint:(id)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 ;
-(id)initWithSearchURLQuery:(id)arg0 coordinate:(struct ? )arg1 muid:(NSUInteger)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif