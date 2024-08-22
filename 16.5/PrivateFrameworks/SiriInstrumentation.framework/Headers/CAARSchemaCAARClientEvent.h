// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAARSCHEMACAARCLIENTEVENT_H
#define CAARSCHEMACAARCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "CAARSchemaCAARRequestContext.h"
#import "CAARSchemaCAARClientEventMetadata.h"
#import "CAARSchemaCAARFeaturesGenerated.h"
#import "SISchemaInstrumentationMessage.h"
#import "CAARSchemaCAARModelExecuted.h"

@interface CAARSchemaCAARClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) CAARSchemaCAARRequestContext *caarRequestContext; // ivar: _caarRequestContext
@property (retain, nonatomic) CAARSchemaCAARClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (retain, nonatomic) CAARSchemaCAARFeaturesGenerated *featuresGenerated; // ivar: _featuresGenerated
@property (nonatomic) BOOL hasCaarRequestContext; // ivar: _hasCaarRequestContext
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasFeaturesGenerated; // ivar: _hasFeaturesGenerated
@property (nonatomic) BOOL hasModelExecuted; // ivar: _hasModelExecuted
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) CAARSchemaCAARModelExecuted *modelExecuted; // ivar: _modelExecuted
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
-(void)deleteCaarRequestContext;
-(void)deleteEventMetadata;
-(void)deleteFeaturesGenerated;
-(void)deleteModelExecuted;
-(void)writeTo:(id)arg0 ;


@end


#endif