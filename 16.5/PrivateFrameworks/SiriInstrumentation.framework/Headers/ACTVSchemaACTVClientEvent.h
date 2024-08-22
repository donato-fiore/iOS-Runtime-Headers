// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACTVSCHEMAACTVCLIENTEVENT_H
#define ACTVSCHEMAACTVCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "ACTVSchemaACTVButtonInteractionDetected.h"
#import "ACTVSchemaACTVClientEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "ACTVSchemaACTVTurnActivated.h"

@interface ACTVSchemaACTVClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) ACTVSchemaACTVButtonInteractionDetected *buttonInteractionDetected; // ivar: _buttonInteractionDetected
@property (retain, nonatomic) ACTVSchemaACTVClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasButtonInteractionDetected; // ivar: _hasButtonInteractionDetected
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasTurnActivated; // ivar: _hasTurnActivated
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) ACTVSchemaACTVTurnActivated *turnActivated; // ivar: _turnActivated
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
-(void)deleteButtonInteractionDetected;
-(void)deleteEventMetadata;
-(void)deleteTurnActivated;
-(void)writeTo:(id)arg0 ;


@end


#endif