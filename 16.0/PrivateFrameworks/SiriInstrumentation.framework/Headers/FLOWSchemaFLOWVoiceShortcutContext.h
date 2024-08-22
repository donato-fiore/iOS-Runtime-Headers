// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWVOICESHORTCUTCONTEXT_H
#define FLOWSCHEMAFLOWVOICESHORTCUTCONTEXT_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWVoiceShortcutContext : SISchemaInstrumentationMessage

@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *voiceShortcutActions; // ivar: _voiceShortcutActions


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)voiceShortcutActionCount;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(id)voiceShortcutActionAtIndex:(NSUInteger)arg0 ;
-(void)addVoiceShortcutAction:(id)arg0 ;
-(void)clearVoiceShortcutAction;
-(void)deleteVoiceShortcutAction;
-(void)writeTo:(id)arg0 ;


@end


#endif