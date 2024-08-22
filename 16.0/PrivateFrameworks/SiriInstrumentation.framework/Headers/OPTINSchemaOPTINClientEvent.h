// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OPTINSCHEMAOPTINCLIENTEVENT_H
#define OPTINSCHEMAOPTINCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "OPTINSchemaOPTINInconsistentStateDetected.h"
#import "SISchemaInstrumentationMessage.h"

@interface OPTINSchemaOPTINClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (nonatomic) BOOL hasInconsistentStateDetected; // ivar: _hasInconsistentStateDetected
@property (retain, nonatomic) OPTINSchemaOPTINInconsistentStateDetected *inconsistentStateDetected; // ivar: _inconsistentStateDetected
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
-(void)deleteInconsistentStateDetected;
-(void)writeTo:(id)arg0 ;


@end


#endif