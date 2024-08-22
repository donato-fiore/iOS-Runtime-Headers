// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NETSCHEMANETDEBUGSESSIONCONNECTIONQUALITY_H
#define NETSCHEMANETDEBUGSESSIONCONNECTIONQUALITY_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NETSchemaNETDebugSessionConnectionQuality : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasSymptomsCellularHistorical;
@property (nonatomic) BOOL hasSymptomsCellularInstant;
@property (nonatomic) BOOL hasSymptomsWiFiHistorical;
@property (nonatomic) BOOL hasSymptomsWiFiInstant;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int symptomsCellularHistorical; // ivar: _symptomsCellularHistorical
@property (nonatomic) int symptomsCellularInstant; // ivar: _symptomsCellularInstant
@property (nonatomic) int symptomsWiFiHistorical; // ivar: _symptomsWiFiHistorical
@property (nonatomic) int symptomsWiFiInstant; // ivar: _symptomsWiFiInstant


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSymptomsCellularHistorical;
-(void)deleteSymptomsCellularInstant;
-(void)deleteSymptomsWiFiHistorical;
-(void)deleteSymptomsWiFiInstant;
-(void)writeTo:(id)arg0 ;


@end


#endif