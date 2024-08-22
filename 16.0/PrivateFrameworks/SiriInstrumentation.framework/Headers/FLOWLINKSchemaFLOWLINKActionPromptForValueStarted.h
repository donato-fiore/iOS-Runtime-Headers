// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWLINKSCHEMAFLOWLINKACTIONPROMPTFORVALUESTARTED_H
#define FLOWLINKSCHEMAFLOWLINKACTIONPROMPTFORVALUESTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWLINKSchemaFLOWLINKActionParameter.h"

@interface FLOWLINKSchemaFLOWLINKActionPromptForValueStarted : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasParameter; // ivar: _hasParameter
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionParameter *parameter; // ivar: _parameter


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteParameter;
-(void)writeTo:(id)arg0 ;


@end


#endif