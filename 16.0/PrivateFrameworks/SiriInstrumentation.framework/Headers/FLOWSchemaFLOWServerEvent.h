// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWSERVEREVENT_H
#define FLOWSCHEMAFLOWSERVEREVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "FLOWSchemaFLOWEventMetadata.h"
#import "FLOWSchemaFLOWStep.h"
#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWServerEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) FLOWSchemaFLOWEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (retain, nonatomic) FLOWSchemaFLOWStep *flowStep; // ivar: _flowStep
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasFlowStep; // ivar: _hasFlowStep
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
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
-(void)deleteFlowStep;
-(void)writeTo:(id)arg0 ;


@end


#endif