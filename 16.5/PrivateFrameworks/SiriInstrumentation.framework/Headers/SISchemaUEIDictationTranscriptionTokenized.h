// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMAUEIDICTATIONTRANSCRIPTIONTOKENIZED_H
#define SISCHEMAUEIDICTATIONTRANSCRIPTIONTOKENIZED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaUEIDictationTranscriptionTokenized : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasNumTokens;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int numTokens; // ivar: _numTokens


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteNumTokens;
-(void)writeTo:(id)arg0 ;


@end


#endif