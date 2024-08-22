// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWINFORMATIONPLUGINCONTEXT_H
#define FLOWSCHEMAFLOWINFORMATIONPLUGINCONTEXT_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWInformationPluginContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int eventType; // ivar: _eventType
@property (copy, nonatomic) NSString *executedPegasusDomain; // ivar: _executedPegasusDomain
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) BOOL hasExecutedPegasusDomain; // ivar: _hasExecutedPegasusDomain
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteEventType;
-(void)deleteExecutedPegasusDomain;
-(void)writeTo:(id)arg0 ;


@end


#endif