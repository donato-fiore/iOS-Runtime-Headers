// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXPSEARCHSCHEMAEXPSEARCHCLIENTEVENT_H
#define EXPSEARCHSCHEMAEXPSEARCHCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "SISchemaInstrumentationMessage.h"
#import "EXPSearchSchemaEXPSearchSessionExperiments.h"

@interface EXPSearchSchemaEXPSearchClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (nonatomic) BOOL hasSessionExperiments; // ivar: _hasSessionExperiments
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) EXPSearchSchemaEXPSearchSessionExperiments *sessionExperiments; // ivar: _sessionExperiments
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
-(void)deleteSessionExperiments;
-(void)writeTo:(id)arg0 ;


@end


#endif