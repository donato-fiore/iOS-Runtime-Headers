// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DODMLASRSCHEMADODMLASRPERSONALIZATIONEXPERIMENTSTARTED_H
#define DODMLASRSCHEMADODMLASRPERSONALIZATIONEXPERIMENTSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface DODMLASRSchemaDODMLASRPersonalizationExperimentStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int deviceThermalState; // ivar: _deviceThermalState
@property (nonatomic) BOOL exists; // ivar: _exists
@property (nonatomic) BOOL hasDeviceThermalState;
@property (nonatomic) BOOL hasExists;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDeviceThermalState;
-(void)deleteExists;
-(void)writeTo:(id)arg0 ;


@end


#endif