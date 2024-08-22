// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RFSCHEMARFCLIENTEVENT_H
#define RFSCHEMARFCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "RFSchemaRFComponentShown.h"
#import "RFSchemaRFClientEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "RFSchemaRFInteractionPerformed.h"
#import "RFSchemaRFPatternExecuted.h"
#import "RFSchemaRFSnippetRenderingContext.h"

@interface RFSchemaRFClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) RFSchemaRFComponentShown *componentShown; // ivar: _componentShown
@property (retain, nonatomic) RFSchemaRFClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasComponentShown; // ivar: _hasComponentShown
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasInteractionPerformed; // ivar: _hasInteractionPerformed
@property (nonatomic) BOOL hasPatternExecuted; // ivar: _hasPatternExecuted
@property (nonatomic) BOOL hasSnippetRenderingContext; // ivar: _hasSnippetRenderingContext
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) RFSchemaRFInteractionPerformed *interactionPerformed; // ivar: _interactionPerformed
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) RFSchemaRFPatternExecuted *patternExecuted; // ivar: _patternExecuted
@property (retain, nonatomic) RFSchemaRFSnippetRenderingContext *snippetRenderingContext; // ivar: _snippetRenderingContext
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
-(void)deleteComponentShown;
-(void)deleteEventMetadata;
-(void)deleteInteractionPerformed;
-(void)deletePatternExecuted;
-(void)deleteSnippetRenderingContext;
-(void)writeTo:(id)arg0 ;


@end


#endif