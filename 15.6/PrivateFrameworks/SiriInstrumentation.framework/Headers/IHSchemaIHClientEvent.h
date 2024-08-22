// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IHSCHEMAIHCLIENTEVENT_H
#define IHSCHEMAIHCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "IHSchemaIHClientEventMetadata.h"
#import "IHSchemaIHModelEvaluationContext.h"

@interface IHSchemaIHClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) IHSchemaIHClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasModelEvaluationContext; // ivar: _hasModelEvaluationContext
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) IHSchemaIHModelEvaluationContext *modelEvaluationContext; // ivar: _modelEvaluationContext
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
-(void)deleteModelEvaluationContext;
-(void)writeTo:(id)arg0 ;


@end


#endif