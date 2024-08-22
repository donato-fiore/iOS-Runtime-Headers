// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWSCHEMAFLOWHOLEHOUSEAUDIODESTINATIONCONTEXT_H
#define FLOWSCHEMAFLOWHOLEHOUSEAUDIODESTINATIONCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWholeHouseAudioDestinationContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int deviceSuccessCount; // ivar: _deviceSuccessCount
@property (nonatomic) unsigned int eligibleDeviceCount; // ivar: _eligibleDeviceCount
@property (nonatomic) BOOL hasDeviceSuccessCount;
@property (nonatomic) BOOL hasEligibleDeviceCount;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDeviceSuccessCount;
-(void)deleteEligibleDeviceCount;
-(void)writeTo:(id)arg0 ;


@end


#endif