// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWHOMEAUTOMATIONCOMMAND_H
#define FLOWSCHEMAFLOWHOMEAUTOMATIONCOMMAND_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface FLOWSchemaFLOWHomeAutomationCommand : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int commandDuration; // ivar: _commandDuration
@property (nonatomic) int commandErrorReason; // ivar: _commandErrorReason
@property (retain, nonatomic) SISchemaUUID *commandId; // ivar: _commandId
@property (nonatomic) int commandOutcome; // ivar: _commandOutcome
@property (nonatomic) int commandType; // ivar: _commandType
@property (nonatomic) BOOL hasCommandDuration;
@property (nonatomic) BOOL hasCommandErrorReason;
@property (nonatomic) BOOL hasCommandId; // ivar: _hasCommandId
@property (nonatomic) BOOL hasCommandOutcome;
@property (nonatomic) BOOL hasCommandType;
@property (copy, nonatomic) NSArray *homeAutomationRequests; // ivar: _homeAutomationRequests
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)homeAutomationRequestsAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addHomeAutomationRequests:(id)arg0 ;
-(void)clearHomeAutomationRequests;
-(void)deleteCommandDuration;
-(void)deleteCommandErrorReason;
-(void)deleteCommandId;
-(void)deleteCommandOutcome;
-(void)deleteCommandType;
-(void)deleteHomeAutomationRequests;
-(void)writeTo:(id)arg0 ;


@end


#endif