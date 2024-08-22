// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPLACE_H
#define GEOPLACE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol GEOURLSerializable, NSCopying;


#import "GEOAddress.h"
#import "GEOLatLng.h"
#import "GEOMapRegion.h"
#import "GEOStructuredAddress.h"
#import "GEOTimezone.h"
#import "GEOBusiness.h"

@interface GEOPlace : PBCodable <GEOURLSerializable, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSInteger _uID;
    GEOAddress *_address;
    CGFloat _area;
    NSMutableArray *_business;
    GEOLatLng *_center;
    GEOMapRegion *_displayMapRegion;
    NSMutableArray *_entryPoints;
    NSInteger _geoId;
    GEOMapRegion *_mapRegion;
    NSString *_name;
    GEOAddress *_phoneticAddress;
    NSString *_phoneticLocaleIdentifier;
    NSString *_phoneticName;
    NSMutableArray *_roadAccessPoints;
    NSString *_spokenAddress;
    NSString *_spokenName;
    GEOStructuredAddress *_spokenStructuredAddress;
    GEOTimezone *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _addressGeocodeAccuracy;
    int _localSearchProviderID;
    int _referenceFrame;
    int _type;
    BOOL _isDisputed;
    ? _flags;
}


@property (retain, nonatomic) GEOAddress *address;
@property (nonatomic) int addressGeocodeAccuracy;
@property (nonatomic) CGFloat area;
@property (retain, nonatomic) NSMutableArray *business;
@property (retain, nonatomic) GEOLatLng *center;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GEOMapRegion *displayMapRegion;
@property (retain, nonatomic) NSMutableArray *entryPoints;
@property (readonly, nonatomic) GEOBusiness *firstBusiness;
@property (nonatomic) NSInteger geoId;
@property (readonly, nonatomic) BOOL hasAddress;
@property (nonatomic) BOOL hasAddressGeocodeAccuracy;
@property (nonatomic) BOOL hasArea;
@property (readonly, nonatomic) BOOL hasCenter;
@property (readonly, nonatomic) BOOL hasDisplayMapRegion;
@property (nonatomic) BOOL hasGeoId;
@property (nonatomic) BOOL hasIsDisputed;
@property (nonatomic) BOOL hasLocalSearchProviderID;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasPhoneticAddress;
@property (readonly, nonatomic) BOOL hasPhoneticLocaleIdentifier;
@property (readonly, nonatomic) BOOL hasPhoneticName;
@property (nonatomic) BOOL hasReferenceFrame;
@property (readonly, nonatomic) BOOL hasSpokenAddress;
@property (readonly, nonatomic) BOOL hasSpokenName;
@property (readonly, nonatomic) BOOL hasSpokenStructuredAddress;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasUID;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDisputed;
@property (nonatomic) int localSearchProviderID;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) GEOAddress *phoneticAddress;
@property (retain, nonatomic) NSString *phoneticLocaleIdentifier;
@property (retain, nonatomic) NSString *phoneticName;
@property (nonatomic) int referenceFrame;
@property (retain, nonatomic) NSMutableArray *roadAccessPoints;
@property (retain, nonatomic) NSString *spokenAddress;
@property (retain, nonatomic) NSString *spokenName;
@property (retain, nonatomic) GEOStructuredAddress *spokenStructuredAddress;
@property (readonly) Class superclass;
@property (retain, nonatomic) GEOTimezone *timezone;
@property (nonatomic) int type;
@property (nonatomic) NSInteger uID;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)entryPointType;
+(id)_placesFromDirectionsAction:(id)arg0 hasCurrentLocation:(*BOOL)arg1 currentLocationIndex:(*NSUInteger)arg2 options:(*id)arg3 ;
+(id)_placesFromPresentAction:(id)arg0 hasCurrentLocation:(*BOOL)arg1 currentLocationIndex:(*NSUInteger)arg2 options:(*id)arg3 ;
+(id)_placesFromShowAction:(id)arg0 hasCurrentLocation:(*BOOL)arg1 currentLocationIndex:(*NSUInteger)arg2 options:(*id)arg3 ;
+(id)_placesFromURL:(id)arg0 hasCurrentLocation:(*BOOL)arg1 currentLocationIndex:(*NSUInteger)arg2 options:(*id)arg3 ;
+(id)_urlForAction:(id)arg0 rison:(id)arg1 ;
+(id)_urlForDirectionsFromOrigin:(id)arg0 toDestination:(id)arg1 options:(id)arg2 ;
+(id)_urlRepresentationForCurrentLocation;
+(id)_urlToShowCurrentLocationAndPlaces:(id)arg0 currentLocationIndex:(NSUInteger)arg1 options:(id)arg2 ;
+(id)_urlToShowCurrentLocationWithOptions:(id)arg0 ;
+(id)_urlToShowPlaces:(id)arg0 options:(id)arg1 ;
+(id)_urlToShowURLRepresentations:(id)arg0 options:(id)arg1 ;
+(id)placeForPlaceData:(id)arg0 ;
-(BOOL)_isEquivalentURLRepresentationTo:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)radialDistance;
-(id)_urlForDirectionsFromCurrentLocationWithOptions:(id)arg0 ;
-(id)_urlForDirectionsFromPlace:(id)arg0 options:(id)arg1 ;
-(id)_urlForDirectionsToCurrentLocationWithOptions:(id)arg0 ;
-(id)_urlForDirectionsToPlace:(id)arg0 options:(id)arg1 ;
-(id)_urlToShowWithOptions:(id)arg0 ;
-(id)addressGeocodeAccuracyAsString:(int)arg0 ;
-(id)arrivalMapRegion;
-(id)arrivalMapRegionForTransportType:(int)arg0 ;
-(id)bestName;
-(id)businessAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)entryPointAtIndex:(NSUInteger)arg0 ;
-(id)geoMapItem;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 addressDictionary:(id)arg2 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 placeType:(int)arg2 ;
-(id)initWithLocation:(id)arg0 addressDictionary:(id)arg1 name:(id)arg2 businessURL:(id)arg3 phoneNumber:(id)arg4 muid:(NSUInteger)arg5 attributionID:(id)arg6 sampleSizeForUserRatingScore:(unsigned int)arg7 normalizedUserRatingScore:(float)arg8 ;
-(id)initWithName:(id)arg0 placeType:(int)arg1 areaInMeters:(CGFloat)arg2 ;
-(id)initWithPlaceInfo:(id)arg0 entity:(id)arg1 addressObject:(id)arg2 bounds:(id)arg3 roadAccessInfo:(id)arg4 ;
-(id)initWithUrlRepresentation:(id)arg0 ;
-(id)jsonRepresentation;
-(id)referenceFrameAsString:(int)arg0 ;
-(id)roadAccessPointsAtIndex:(NSUInteger)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(id)urlRepresentation;
-(int)StringAsAddressGeocodeAccuracy:(id)arg0 ;
-(int)StringAsReferenceFrame:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(struct ? )coordinate;
-(void)addBusiness:(id)arg0 ;
-(void)addEntryPoint:(id)arg0 ;
-(void)addRoadAccessPoints:(id)arg0 ;
-(void)clearBusiness;
-(void)clearEntryPoints;
-(void)clearRoadAccessPoints;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)setNSTimeZone:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif