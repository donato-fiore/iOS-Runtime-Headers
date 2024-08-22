// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASRSCHEMAASREMBEDDEDSPEECHPROCESSCONTEXT_H
#define ASRSCHEMAASREMBEDDEDSPEECHPROCESSCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "ASRSchemaASREmbeddedSpeechProcessStarted.h"

@interface ASRSchemaASREmbeddedSpeechProcessContext : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasStartedOrChanged; // ivar: _hasStartedOrChanged
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) ASRSchemaASREmbeddedSpeechProcessStarted *startedOrChanged; // ivar: _startedOrChanged
@property (readonly, nonatomic) NSUInteger whichContextevent; // ivar: _whichContextevent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteStartedOrChanged;
-(void)writeTo:(id)arg0 ;


@end


#endif