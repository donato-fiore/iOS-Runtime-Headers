// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POMMESSCHEMAPOMMESPEGASUSQUERYMETADATA_H
#define POMMESSCHEMAPOMMESPEGASUSQUERYMETADATA_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface POMMESSchemaPOMMESPegasusQueryMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasCountryCode; // ivar: _hasCountryCode
@property (nonatomic) BOOL hasHasCountryCode;
@property (nonatomic) BOOL hasHasLatitude;
@property (nonatomic) BOOL hasHasLongitude;
@property (nonatomic) BOOL hasHasSiriLocale;
@property (nonatomic) BOOL hasHasStorefront;
@property (nonatomic) BOOL hasHeySiriEnabled;
@property (nonatomic) BOOL hasInstalledAppsSignatureLength;
@property (nonatomic) BOOL hasIsNavigationMode;
@property (nonatomic) BOOL hasLatitude; // ivar: _hasLatitude
@property (nonatomic) BOOL hasLongitude; // ivar: _hasLongitude
@property (nonatomic) BOOL hasMeasurementSystem;
@property (nonatomic) BOOL hasSiriLocale; // ivar: _hasSiriLocale
@property (nonatomic) BOOL hasStorefront; // ivar: _hasStorefront
@property (nonatomic) BOOL hasStorefrontValue; // ivar: _hasStorefrontValue
@property (nonatomic) BOOL hasTemperatureScale;
@property (nonatomic) BOOL hasUiScale;
@property (nonatomic) BOOL heySiriEnabled; // ivar: _heySiriEnabled
@property (nonatomic) unsigned int installedAppsSignatureLength; // ivar: _installedAppsSignatureLength
@property (nonatomic) BOOL isNavigationMode; // ivar: _isNavigationMode
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int measurementSystem; // ivar: _measurementSystem
@property (copy, nonatomic) NSString *storefrontValue; // ivar: _storefrontValue
@property (nonatomic) int temperatureScale; // ivar: _temperatureScale
@property (nonatomic) float uiScale; // ivar: _uiScale


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteHasCountryCode;
-(void)deleteHasLatitude;
-(void)deleteHasLongitude;
-(void)deleteHasSiriLocale;
-(void)deleteHasStorefront;
-(void)deleteHeySiriEnabled;
-(void)deleteInstalledAppsSignatureLength;
-(void)deleteIsNavigationMode;
-(void)deleteMeasurementSystem;
-(void)deleteStorefrontValue;
-(void)deleteTemperatureScale;
-(void)deleteUiScale;
-(void)writeTo:(id)arg0 ;


@end


#endif