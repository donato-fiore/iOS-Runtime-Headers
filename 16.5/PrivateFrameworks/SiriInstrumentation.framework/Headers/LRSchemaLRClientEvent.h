// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LRSCHEMALRCLIENTEVENT_H
#define LRSCHEMALRCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "SISchemaInstrumentationMessage.h"
#import "LRSchemaLRRedactionSummaryReported.h"

@interface LRSchemaLRClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (nonatomic) BOOL hasRedactionSummaryReported; // ivar: _hasRedactionSummaryReported
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) LRSchemaLRRedactionSummaryReported *redactionSummaryReported; // ivar: _redactionSummaryReported
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


+(int)joinability;
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
-(void)deleteRedactionSummaryReported;
-(void)writeTo:(id)arg0 ;


@end


#endif