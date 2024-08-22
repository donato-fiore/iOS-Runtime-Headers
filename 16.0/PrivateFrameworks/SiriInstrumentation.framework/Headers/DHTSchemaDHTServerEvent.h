// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DHTSCHEMADHTSERVEREVENT_H
#define DHTSCHEMADHTSERVEREVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "DHTSchemaDHTDeleteTrigger.h"
#import "SISchemaInstrumentationMessage.h"

@interface DHTSchemaDHTServerEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) DHTSchemaDHTDeleteTrigger *deleteTrigger; // ivar: _deleteTrigger
@property (nonatomic) BOOL hasDeleteTrigger; // ivar: _hasDeleteTrigger
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
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
-(void)deleteDeleteTrigger;
-(void)writeTo:(id)arg0 ;


@end


#endif