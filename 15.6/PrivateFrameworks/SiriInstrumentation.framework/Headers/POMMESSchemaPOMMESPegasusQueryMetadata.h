// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POMMESSCHEMAPOMMESPEGASUSQUERYMETADATA_H
#define POMMESSCHEMAPOMMESPEGASUSQUERYMETADATA_H

@class NSData;


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
@property (nonatomic) BOOL hasLatitude; // ivar: _hasLatitude
@property (nonatomic) BOOL hasLongitude; // ivar: _hasLongitude
@property (nonatomic) BOOL hasSiriLocale; // ivar: _hasSiriLocale
@property (nonatomic) BOOL hasStorefront; // ivar: _hasStorefront
@property (readonly, nonatomic) NSData *jsonData;


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
-(void)writeTo:(id)arg0 ;


@end


#endif