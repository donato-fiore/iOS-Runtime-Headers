// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MHSCHEMAMHENDPOINTDELAYCONTEXT_H
#define MHSCHEMAMHENDPOINTDELAYCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHEndpointDelayContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger endpointDelayInNs; // ivar: _endpointDelayInNs
@property (nonatomic) NSUInteger endpointModelDelayInNs; // ivar: _endpointModelDelayInNs
@property (nonatomic) BOOL hasEndpointDelayInNs;
@property (nonatomic) BOOL hasEndpointModelDelayInNs;
@property (nonatomic) BOOL hasSpeakingEndInNs;
@property (nonatomic) BOOL hasSpeakingStartInNs;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger speakingEndInNs; // ivar: _speakingEndInNs
@property (nonatomic) NSUInteger speakingStartInNs; // ivar: _speakingStartInNs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteEndpointDelayInNs;
-(void)deleteEndpointModelDelayInNs;
-(void)deleteSpeakingEndInNs;
-(void)deleteSpeakingStartInNs;
-(void)writeTo:(id)arg0 ;


@end


#endif