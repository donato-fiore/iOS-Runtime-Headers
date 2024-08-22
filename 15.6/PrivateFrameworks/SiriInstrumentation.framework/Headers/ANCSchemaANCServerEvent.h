// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANCSCHEMAANCSERVEREVENT_H
#define ANCSCHEMAANCSERVEREVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "ANCSchemaANCServerEventMetadata.h"
#import "ANCSchemaANCServerUserResponseEvaluated.h"

@interface ANCSchemaANCServerEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) ANCSchemaANCServerEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasUserResponseEvaluated; // ivar: _hasUserResponseEvaluated
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) ANCSchemaANCServerUserResponseEvaluated *userResponseEvaluated; // ivar: _userResponseEvaluated
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
-(void)deleteUserResponseEvaluated;
-(void)writeTo:(id)arg0 ;


@end


#endif