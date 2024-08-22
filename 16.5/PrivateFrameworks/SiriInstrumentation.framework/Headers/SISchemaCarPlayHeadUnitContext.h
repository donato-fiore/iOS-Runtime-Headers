// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMACARPLAYHEADUNITCONTEXT_H
#define SISCHEMACARPLAYHEADUNITCONTEXT_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaCarPlayHeadUnitContext : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasVehicleManufacturer; // ivar: _hasVehicleManufacturer
@property (nonatomic) BOOL hasVehicleModel; // ivar: _hasVehicleModel
@property (nonatomic) BOOL hasVehicleName; // ivar: _hasVehicleName
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *vehicleManufacturer; // ivar: _vehicleManufacturer
@property (copy, nonatomic) NSString *vehicleModel; // ivar: _vehicleModel
@property (copy, nonatomic) NSString *vehicleName; // ivar: _vehicleName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteVehicleManufacturer;
-(void)deleteVehicleModel;
-(void)deleteVehicleName;
-(void)writeTo:(id)arg0 ;


@end


#endif