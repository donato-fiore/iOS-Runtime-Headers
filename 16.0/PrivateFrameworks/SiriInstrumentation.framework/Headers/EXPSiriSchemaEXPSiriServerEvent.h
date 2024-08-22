// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXPSIRISCHEMAEXPSIRISERVEREVENT_H
#define EXPSIRISCHEMAEXPSIRISERVEREVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "EXPSiriSchemaEXPServerCounterfactualTriggeredTier1.h"
#import "EXPSiriSchemaEXPServerExperimentTriggeredTier1.h"
#import "SISchemaInstrumentationMessage.h"

@interface EXPSiriSchemaEXPSiriServerEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) EXPSiriSchemaEXPServerCounterfactualTriggeredTier1 *counterfactualTriggered; // ivar: _counterfactualTriggered
@property (retain, nonatomic) EXPSiriSchemaEXPServerExperimentTriggeredTier1 *experimentTriggered; // ivar: _experimentTriggered
@property (nonatomic) BOOL hasCounterfactualTriggered; // ivar: _hasCounterfactualTriggered
@property (nonatomic) BOOL hasExperimentTriggered; // ivar: _hasExperimentTriggered
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
-(void)deleteCounterfactualTriggered;
-(void)deleteExperimentTriggered;
-(void)writeTo:(id)arg0 ;


@end


#endif