// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMAINSTRUMENTATIONMESSAGE_H
#define SISCHEMAINSTRUMENTATIONMESSAGE_H

@class PBCodable;



@interface SISchemaInstrumentationMessage : PBCodable



-(BOOL)shouldSuppressMessageUnderConditions:(id)arg0 ;
-(id)_pruneSuppressedMessagesFromArray:(id)arg0 underConditions:(id)arg1 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)formattedJsonBody;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(void)unwrapMessageWithCompletion:(id)arg0 ;
-(void)willProduceDictionaryRepresentation:(id)arg0 ;


@end


#endif