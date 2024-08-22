// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUGSCHEMASUGCLIENTEVENT_H
#define SUGSCHEMASUGCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "SUGSchemaSUGEngagementReported.h"
#import "SUGSchemaSUGClientEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "SUGSchemaSUGSuggestionsGenerated.h"

@interface SUGSchemaSUGClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) SUGSchemaSUGEngagementReported *engagementReported; // ivar: _engagementReported
@property (retain, nonatomic) SUGSchemaSUGClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEngagementReported; // ivar: _hasEngagementReported
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasSuggestionsGenerated; // ivar: _hasSuggestionsGenerated
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SUGSchemaSUGSuggestionsGenerated *suggestionsGenerated; // ivar: _suggestionsGenerated
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
-(int)clockIsolationLevel;
-(int)getAnyEventType;
-(void)deleteEngagementReported;
-(void)deleteEventMetadata;
-(void)deleteSuggestionsGenerated;
-(void)writeTo:(id)arg0 ;


@end


#endif