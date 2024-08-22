// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAINSTRUMENTATIONMESSAGE_H
#define SISCHEMAINSTRUMENTATIONMESSAGE_H

@class PBCodable;



@interface SISchemaInstrumentationMessage : PBCodable



-(id)formattedJsonBody;
-(id)qualifiedMessageName;
-(void)unwrapMessageWithCompletion:(id)arg0 ;
-(void)willProduceDictionaryRepresentation:(id)arg0 ;


@end


#endif