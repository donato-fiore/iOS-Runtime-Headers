// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWHOMECOMMUNICATIONCONTEXT_H
#define FLOWSCHEMAFLOWHOMECOMMUNICATIONCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWSchemaFLOWHomeContext.h"
#import "FLOWSchemaFLOWHomeCommunicationSendOrReply.h"

@interface FLOWSchemaFLOWHomeCommunicationContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasHomeContext; // ivar: _hasHomeContext
@property (nonatomic) BOOL hasSendOrReplyContext; // ivar: _hasSendOrReplyContext
@property (nonatomic) BOOL hasTaskType;
@property (retain, nonatomic) FLOWSchemaFLOWHomeContext *homeContext; // ivar: _homeContext
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) FLOWSchemaFLOWHomeCommunicationSendOrReply *sendOrReplyContext; // ivar: _sendOrReplyContext
@property (nonatomic) int taskType; // ivar: _taskType
@property (readonly, nonatomic) NSUInteger whichTaskcontext; // ivar: _whichTaskcontext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteHomeContext;
-(void)deleteSendOrReplyContext;
-(void)deleteTaskType;
-(void)writeTo:(id)arg0 ;


@end


#endif