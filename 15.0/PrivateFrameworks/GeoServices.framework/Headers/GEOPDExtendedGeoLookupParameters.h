// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDEXTENDEDGEOLOOKUPPARAMETERS_H
#define GEOPDEXTENDEDGEOLOOKUPPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEOInterpolationParameters.h"
#import "GEOAddress.h"
#import "GEOLatLng.h"

@interface GEOPDExtendedGeoLookupParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _intersectingFeatureGeoIds;
    NSString *_dataSourceId;
    GEOInterpolationParameters *_interpolationParameter;
    GEOAddress *_preserveFields;
    NSUInteger _primaryFeatureGeoId;
    GEOLatLng *_primaryFeatureLocation;
    NSUInteger _streetSubPostalGeoId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _dataSourceIdRequired;
    BOOL _isLatlngRequest;
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
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif