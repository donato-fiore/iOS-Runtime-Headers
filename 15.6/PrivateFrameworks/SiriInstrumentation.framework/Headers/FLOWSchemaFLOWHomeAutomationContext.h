// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLOWSCHEMAFLOWHOMEAUTOMATIONCONTEXT_H
#define FLOWSCHEMAFLOWHOMEAUTOMATIONCONTEXT_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWSchemaFLOWHomeAutomationCommand.h"
#import "FLOWSchemaFLOWHomeContext.h"

@interface FLOWSchemaFLOWHomeAutomationContext : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasHomeAutomationCommand; // ivar: _hasHomeAutomationCommand
@property (nonatomic) BOOL hasHomeContext; // ivar: _hasHomeContext
@property (retain, nonatomic) FLOWSchemaFLOWHomeAutomationCommand *homeAutomationCommand; // ivar: _homeAutomationCommand
@property (retain, nonatomic) FLOWSchemaFLOWHomeContext *homeContext; // ivar: _homeContext
@property (copy, nonatomic) NSArray *homeKitServiceResponses; // ivar: _homeKitServiceResponses
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)homeKitServiceResponseCount;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)homeKitServiceResponseAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addHomeKitServiceResponse:(id)arg0 ;
-(void)clearHomeKitServiceResponse;
-(void)deleteHomeAutomationCommand;
-(void)deleteHomeContext;
-(void)deleteHomeKitServiceResponse;
-(void)writeTo:(id)arg0 ;


@end


#endif