// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HALSCHEMAHALVOICETRIGGERCONTEXT_H
#define HALSCHEMAHALVOICETRIGGERCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface HALSchemaHALVoiceTriggerContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasTimeSinceVoiceTriggerHeardInSeconds;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger timeSinceVoiceTriggerHeardInSeconds; // ivar: _timeSinceVoiceTriggerHeardInSeconds


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif