// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMAHARDWAREBUTTONINVOCATIONCONTEXT_H
#define SISCHEMAHARDWAREBUTTONINVOCATIONCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaHardwareButtonInvocationContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) float hardwareButtonActivationThresholdInSec; // ivar: _hardwareButtonActivationThresholdInSec
@property (nonatomic) int hardwareButtonLongPressBehavior; // ivar: _hardwareButtonLongPressBehavior
@property (nonatomic) BOOL hasHardwareButtonActivationThresholdInSec;
@property (nonatomic) BOOL hasHardwareButtonLongPressBehavior;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteHardwareButtonActivationThresholdInSec;
-(void)deleteHardwareButtonLongPressBehavior;
-(void)writeTo:(id)arg0 ;


@end


#endif