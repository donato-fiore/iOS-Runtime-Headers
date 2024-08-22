// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWLINKSCHEMAFLOWLINKACTIONEXECUTIONENDED_H
#define FLOWLINKSCHEMAFLOWLINKACTIONEXECUTIONENDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWLINKSchemaFLOWLINKActionExecutionEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasHasOutputToPresent;
@property (nonatomic) BOOL hasOutputToPresent; // ivar: _hasOutputToPresent
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteHasOutputToPresent;
-(void)writeTo:(id)arg0 ;


@end


#endif