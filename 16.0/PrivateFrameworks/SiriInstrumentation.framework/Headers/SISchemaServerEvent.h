// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMASERVEREVENT_H
#define SISCHEMASERVEREVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "SISchemaServerEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "SISchemaConversationTrace.h"
#import "SISchemaDeviceFixedContext.h"
#import "SISchemaServerGeneratedDismissal.h"
#import "SISchemaSpeechResultSelected.h"
#import "SISchemaTurnInteraction.h"
#import "SISchemaUserSpeechDuration.h"

@interface SISchemaServerEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) SISchemaServerEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasServerConversationTrace; // ivar: _hasServerConversationTrace
@property (nonatomic) BOOL hasServerDeviceFixedContext; // ivar: _hasServerDeviceFixedContext
@property (nonatomic) BOOL hasServerGeneratedDismissal; // ivar: _hasServerGeneratedDismissal
@property (nonatomic) BOOL hasSpeechResultSelected; // ivar: _hasSpeechResultSelected
@property (nonatomic) BOOL hasTurnInteraction; // ivar: _hasTurnInteraction
@property (nonatomic) BOOL hasUserSpeechDuration; // ivar: _hasUserSpeechDuration
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaConversationTrace *serverConversationTrace; // ivar: _serverConversationTrace
@property (retain, nonatomic) SISchemaDeviceFixedContext *serverDeviceFixedContext; // ivar: _serverDeviceFixedContext
@property (retain, nonatomic) SISchemaServerGeneratedDismissal *serverGeneratedDismissal; // ivar: _serverGeneratedDismissal
@property (retain, nonatomic) SISchemaSpeechResultSelected *speechResultSelected; // ivar: _speechResultSelected
@property (retain, nonatomic) SISchemaTurnInteraction *turnInteraction; // ivar: _turnInteraction
@property (retain, nonatomic) SISchemaUserSpeechDuration *userSpeechDuration; // ivar: _userSpeechDuration
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


+(int)joinability;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)getComponentId;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)componentName;
-(int)getAnyEventType;
-(void)deleteEventMetadata;
-(void)deleteServerConversationTrace;
-(void)deleteServerDeviceFixedContext;
-(void)deleteServerGeneratedDismissal;
-(void)deleteSpeechResultSelected;
-(void)deleteTurnInteraction;
-(void)deleteUserSpeechDuration;
-(void)writeTo:(id)arg0 ;


@end


#endif