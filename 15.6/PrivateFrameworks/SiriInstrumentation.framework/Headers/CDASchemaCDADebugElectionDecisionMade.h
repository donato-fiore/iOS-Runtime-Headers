// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDASCHEMACDADEBUGELECTIONDECISIONMADE_H
#define CDASCHEMACDADEBUGELECTIONDECISIONMADE_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CDASchemaCDADebugElectionDecisionMade : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *advertisementDatas; // ivar: _advertisementDatas
@property (nonatomic) unsigned int deviceGroup; // ivar: _deviceGroup
@property (nonatomic) BOOL hasDeviceGroup;
@property (nonatomic) BOOL hasIsCrossDeviceArbitrationAllowed;
@property (nonatomic) BOOL isCrossDeviceArbitrationAllowed; // ivar: _isCrossDeviceArbitrationAllowed
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)advertisementDataCount;
-(NSUInteger)hash;
-(id)advertisementDataAtIndex:(NSUInteger)arg0 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAdvertisementData:(id)arg0 ;
-(void)clearAdvertisementData;
-(void)deleteAdvertisementData;
-(void)deleteDeviceGroup;
-(void)deleteIsCrossDeviceArbitrationAllowed;
-(void)writeTo:(id)arg0 ;


@end


#endif