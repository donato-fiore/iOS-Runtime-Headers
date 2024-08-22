// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DHTSCHEMADHTSERVEREVENT_H
#define DHTSCHEMADHTSERVEREVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "DHTSchemaDHTDeleteTrigger.h"

@interface DHTSchemaDHTServerEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) DHTSchemaDHTDeleteTrigger *deleteTrigger; // ivar: _deleteTrigger
@property (nonatomic) BOOL hasDeleteTrigger; // ivar: _hasDeleteTrigger
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