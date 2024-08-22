// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLOWSCHEMAFLOWSERVEREVENT_H
#define FLOWSCHEMAFLOWSERVEREVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "FLOWSchemaFLOWEventMetadata.h"
#import "FLOWSchemaFLOWStep.h"

@interface FLOWSchemaFLOWServerEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) FLOWSchemaFLOWEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (retain, nonatomic) FLOWSchemaFLOWStep *flowStep; // ivar: _flowStep
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasFlowStep; // ivar: _hasFlowStep
@property (readonly, nonatomic) NSData *jsonData;
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
-(void)deleteFlowStep;
-(void)writeTo:(id)arg0 ;


@end


#endif