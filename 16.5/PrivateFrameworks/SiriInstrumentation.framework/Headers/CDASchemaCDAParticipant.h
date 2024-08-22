// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDASCHEMACDAPARTICIPANT_H
#define CDASCHEMACDAPARTICIPANT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CDASchemaCDAParticipant : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int deviceClass; // ivar: _deviceClass
@property (nonatomic) unsigned int goodnessScore; // ivar: _goodnessScore
@property (nonatomic) BOOL hasDeviceClass;
@property (nonatomic) BOOL hasGoodnessScore;
@property (nonatomic) BOOL hasProductType;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int productType; // ivar: _productType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDeviceClass;
-(void)deleteGoodnessScore;
-(void)deleteProductType;
-(void)writeTo:(id)arg0 ;


@end


#endif