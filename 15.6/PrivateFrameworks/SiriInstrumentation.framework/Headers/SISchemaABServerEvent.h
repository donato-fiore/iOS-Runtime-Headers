// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMAABSERVEREVENT_H
#define SISCHEMAABSERVEREVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "SISchemaABSeverEventMetadata.h"
#import "SISchemaABExperimentServerFeatureTriggered.h"

@interface SISchemaABServerEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaABSeverEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasServerFeatureTriggered; // ivar: _hasServerFeatureTriggered
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaABExperimentServerFeatureTriggered *serverFeatureTriggered; // ivar: _serverFeatureTriggered
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)getAnyEventType;
-(void)deleteEventMetadata;
-(void)deleteServerFeatureTriggered;
-(void)writeTo:(id)arg0 ;


@end


#endif