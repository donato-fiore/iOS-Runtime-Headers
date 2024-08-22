// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMSCHEMACAMCLIENTEVENT_H
#define CAMSCHEMACAMCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "CAMSchemaCAMAutoSendFeaturesGenerated.h"
#import "CAMSchemaCAMClientEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "CAMSchemaCAMModelExecuted.h"
#import "CAMSchemaCAMRequestReceived.h"
#import "CAMSchemaCAMResponseGenerated.h"

@interface CAMSchemaCAMClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) CAMSchemaCAMAutoSendFeaturesGenerated *autoSendFeaturesGenerated; // ivar: _autoSendFeaturesGenerated
@property (retain, nonatomic) CAMSchemaCAMClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasAutoSendFeaturesGenerated; // ivar: _hasAutoSendFeaturesGenerated
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasModelExecuted; // ivar: _hasModelExecuted
@property (nonatomic) BOOL hasRequestReceived; // ivar: _hasRequestReceived
@property (nonatomic) BOOL hasResponseGenerated; // ivar: _hasResponseGenerated
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) CAMSchemaCAMModelExecuted *modelExecuted; // ivar: _modelExecuted
@property (retain, nonatomic) CAMSchemaCAMRequestReceived *requestReceived; // ivar: _requestReceived
@property (retain, nonatomic) CAMSchemaCAMResponseGenerated *responseGenerated; // ivar: _responseGenerated
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
-(void)deleteAutoSendFeaturesGenerated;
-(void)deleteEventMetadata;
-(void)deleteModelExecuted;
-(void)deleteRequestReceived;
-(void)deleteResponseGenerated;
-(void)writeTo:(id)arg0 ;


@end


#endif