// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RFGSCHEMARFGCLIENTEVENT_H
#define RFGSCHEMARFGCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "RFSchemaRFGClientEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "RFSchemaRFGVisualResponseShownLink.h"
#import "RFSchemaRFGVisualResponseShownTier1.h"

@interface RFGSchemaRFGClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) RFSchemaRFGClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasVisualResponseShownLink; // ivar: _hasVisualResponseShownLink
@property (nonatomic) BOOL hasVisualResponseShownTier1; // ivar: _hasVisualResponseShownTier1
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) RFSchemaRFGVisualResponseShownLink *visualResponseShownLink; // ivar: _visualResponseShownLink
@property (retain, nonatomic) RFSchemaRFGVisualResponseShownTier1 *visualResponseShownTier1; // ivar: _visualResponseShownTier1
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
-(int)getAnyEventType;
-(void)deleteEventMetadata;
-(void)deleteVisualResponseShownLink;
-(void)deleteVisualResponseShownTier1;
-(void)writeTo:(id)arg0 ;


@end


#endif