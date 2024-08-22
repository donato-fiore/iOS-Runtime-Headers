// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSTRUCTUREDADDRESS_H
#define GEOSTRUCTUREDADDRESS_H

@class PBCodable, PBUnknownFields, NSString, NSMutableArray;
@protocol GEOURLSerializable, NSCopying;



@interface GEOStructuredAddress : PBCodable <GEOURLSerializable, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _geoIds;
    NSString *_administrativeAreaCode;
    NSString *_administrativeArea;
    NSMutableArray *_areaOfInterests;
    NSString *_countryCode;
    NSString *_country;
    NSMutableArray *_dependentLocalitys;
    NSString *_fullThoroughfare;
    NSString *_inlandWater;
    NSString *_locality;
    NSString *_ocean;
    NSString *_postCodeExtension;
    NSString *_postCodeFull;
    NSString *_postCode;
    NSString *_premises;
    NSString *_premise;
    NSString *_subAdministrativeArea;
    NSString *_subLocality;
    NSMutableArray *_subPremises;
    NSString *_subThoroughfare;
    NSString *_thoroughfare;
}


@property (retain, nonatomic) NSString *administrativeArea;
@property (retain, nonatomic) NSString *administrativeAreaCode;
@property (retain, nonatomic) NSMutableArray *areaOfInterests;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *dependentLocalitys;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *fullThoroughfare;
@property (readonly, nonatomic) *NSInteger geoIds;
@property (readonly, nonatomic) NSUInteger geoIdsCount;
@property (readonly, nonatomic) BOOL hasAdministrativeArea;
@property (readonly, nonatomic) BOOL hasAdministrativeAreaCode;
@property (readonly, nonatomic) BOOL hasCountry;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (readonly, nonatomic) BOOL hasFullThoroughfare;
@property (readonly, nonatomic) BOOL hasInlandWater;
@property (readonly, nonatomic) BOOL hasLocality;
@property (readonly, nonatomic) BOOL hasOcean;
@property (readonly, nonatomic) BOOL hasPostCode;
@property (readonly, nonatomic) BOOL hasPostCodeExtension;
@property (readonly, nonatomic) BOOL hasPostCodeFull;
@property (readonly, nonatomic) BOOL hasPremise;
@property (readonly, nonatomic) BOOL hasPremises;
@property (readonly, nonatomic) BOOL hasSubAdministrativeArea;
@property (readonly, nonatomic) BOOL hasSubLocality;
@property (readonly, nonatomic) BOOL hasSubThoroughfare;
@property (readonly, nonatomic) BOOL hasThoroughfare;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *inlandWater;
@property (retain, nonatomic) NSString *locality;
@property (retain, nonatomic) NSString *ocean;
@property (retain, nonatomic) NSString *postCode;
@property (retain, nonatomic) NSString *postCodeExtension;
@property (retain, nonatomic) NSString *postCodeFull;
@property (retain, nonatomic) NSString *premise;
@property (retain, nonatomic) NSString *premises;
@property (retain, nonatomic) NSString *subAdministrativeArea;
@property (retain, nonatomic) NSString *subLocality;
@property (retain, nonatomic) NSMutableArray *subPremises;
@property (retain, nonatomic) NSString *subThoroughfare;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *thoroughfare;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)areaOfInterestType;
+(Class)dependentLocalityType;
+(Class)subPremiseType;
-(BOOL)_isEquivalentURLRepresentationTo:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)geoIdAtIndex:(NSUInteger)arg0 ;
-(id)addressDictionary;
-(id)areaOfInterestAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dependentLocalityAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithAddressDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithPostalAddress:(id)arg0 ;
-(id)initWithUrlRepresentation:(id)arg0 ;
-(id)jsonRepresentation;
-(id)postalAddress;
-(id)subPremiseAtIndex:(NSUInteger)arg0 ;
-(id)urlRepresentation;
-(void)addAreaOfInterest:(id)arg0 ;
-(void)addDependentLocality:(id)arg0 ;
-(void)addGeoId:(NSInteger)arg0 ;
-(void)addSubPremise:(id)arg0 ;
-(void)clearAreaOfInterests;
-(void)clearDependentLocalitys;
-(void)clearGeoIds;
-(void)clearSubPremises;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif