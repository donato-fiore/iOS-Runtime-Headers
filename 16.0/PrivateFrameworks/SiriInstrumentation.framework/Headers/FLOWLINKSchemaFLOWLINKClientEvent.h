// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWLINKSCHEMAFLOWLINKCLIENTEVENT_H
#define FLOWLINKSCHEMAFLOWLINKCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "FLOWLINKSchemaFLOWLINKActionConfirmationContext.h"
#import "FLOWLINKSchemaFLOWLINKActionConversionContext.h"
#import "FLOWLINKSchemaFLOWLINKActionExecutionContext.h"
#import "FLOWLINKSchemaFLOWLINKActionParameterConfirmationContext.h"
#import "FLOWLINKSchemaFLOWLINKActionParameterDisambiguationContext.h"
#import "FLOWLINKSchemaFLOWLINKActionParametersUpdated.h"
#import "FLOWLINKSchemaFLOWLINKActionPromptForValueContext.h"
#import "FLOWLINKSchemaFLOWLINKAutoShortcutTemplateUsed.h"
#import "FLOWLINKSchemaFLOWLINKEntityDisambiguationContext.h"
#import "FLOWSchemaFLOWEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "FLOWLINKSchemaFLOWLINKActionContext.h"
#import "FLOWLINKSchemaFLOWLINKActionTier1.h"

@interface FLOWLINKSchemaFLOWLINKClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionConfirmationContext *actionConfirmationContext; // ivar: _actionConfirmationContext
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionConversionContext *actionConversionContext; // ivar: _actionConversionContext
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionExecutionContext *actionExecutionContext; // ivar: _actionExecutionContext
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionParameterConfirmationContext *actionParameterConfirmationContext; // ivar: _actionParameterConfirmationContext
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionParameterDisambiguationContext *actionParameterDisambiguationContext; // ivar: _actionParameterDisambiguationContext
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionParametersUpdated *actionParameterUpdated; // ivar: _actionParameterUpdated
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionPromptForValueContext *actionPromptForValueContext; // ivar: _actionPromptForValueContext
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKAutoShortcutTemplateUsed *autoShortcutTemplateUsed; // ivar: _autoShortcutTemplateUsed
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKEntityDisambiguationContext *entityDisambiguationContext; // ivar: _entityDisambiguationContext
@property (retain, nonatomic) FLOWSchemaFLOWEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasActionConfirmationContext; // ivar: _hasActionConfirmationContext
@property (nonatomic) BOOL hasActionConversionContext; // ivar: _hasActionConversionContext
@property (nonatomic) BOOL hasActionExecutionContext; // ivar: _hasActionExecutionContext
@property (nonatomic) BOOL hasActionParameterConfirmationContext; // ivar: _hasActionParameterConfirmationContext
@property (nonatomic) BOOL hasActionParameterDisambiguationContext; // ivar: _hasActionParameterDisambiguationContext
@property (nonatomic) BOOL hasActionParameterUpdated; // ivar: _hasActionParameterUpdated
@property (nonatomic) BOOL hasActionPromptForValueContext; // ivar: _hasActionPromptForValueContext
@property (nonatomic) BOOL hasAutoShortcutTemplateUsed; // ivar: _hasAutoShortcutTemplateUsed
@property (nonatomic) BOOL hasEntityDisambiguationContext; // ivar: _hasEntityDisambiguationContext
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasLinkActionContext; // ivar: _hasLinkActionContext
@property (nonatomic) BOOL hasLinkActionTier1; // ivar: _hasLinkActionTier1
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionContext *linkActionContext; // ivar: _linkActionContext
@property (retain, nonatomic) FLOWLINKSchemaFLOWLINKActionTier1 *linkActionTier1; // ivar: _linkActionTier1
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
-(void)deleteActionConfirmationContext;
-(void)deleteActionConversionContext;
-(void)deleteActionExecutionContext;
-(void)deleteActionParameterConfirmationContext;
-(void)deleteActionParameterDisambiguationContext;
-(void)deleteActionParameterUpdated;
-(void)deleteActionPromptForValueContext;
-(void)deleteAutoShortcutTemplateUsed;
-(void)deleteEntityDisambiguationContext;
-(void)deleteEventMetadata;
-(void)deleteLinkActionContext;
-(void)deleteLinkActionTier1;
-(void)writeTo:(id)arg0 ;


@end


#endif