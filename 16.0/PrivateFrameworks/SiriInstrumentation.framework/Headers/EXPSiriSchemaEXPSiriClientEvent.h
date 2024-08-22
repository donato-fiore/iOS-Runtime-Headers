// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXPSIRISCHEMAEXPSIRICLIENTEVENT_H
#define EXPSIRISCHEMAEXPSIRICLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "EXPSiriSchemaEXPClientSiriRequestExperimentTriggeredTier1.h"
#import "EXPSiriSchemaEXPAllocationChangelogSnapshot.h"
#import "EXPSiriSchemaEXPAllocationSnapshot.h"
#import "EXPSiriSchemaEXPClientExperimentTriggeredTier1.h"
#import "SISchemaInstrumentationMessage.h"

@interface EXPSiriSchemaEXPSiriClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) EXPSiriSchemaEXPClientSiriRequestExperimentTriggeredTier1 *SiriRequestExperimentTriggered; // ivar: _SiriRequestExperimentTriggered
@property (retain, nonatomic) EXPSiriSchemaEXPAllocationChangelogSnapshot *allocationChangelogSnapshot; // ivar: _allocationChangelogSnapshot
@property (retain, nonatomic) EXPSiriSchemaEXPAllocationSnapshot *allocationSnapshot; // ivar: _allocationSnapshot
@property (retain, nonatomic) EXPSiriSchemaEXPClientExperimentTriggeredTier1 *experimentTriggered; // ivar: _experimentTriggered
@property (nonatomic) BOOL hasAllocationChangelogSnapshot; // ivar: _hasAllocationChangelogSnapshot
@property (nonatomic) BOOL hasAllocationSnapshot; // ivar: _hasAllocationSnapshot
@property (nonatomic) BOOL hasExperimentTriggered; // ivar: _hasExperimentTriggered
@property (nonatomic) BOOL hasSiriRequestExperimentTriggered; // ivar: _hasSiriRequestExperimentTriggered
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
-(void)deleteAllocationChangelogSnapshot;
-(void)deleteAllocationSnapshot;
-(void)deleteExperimentTriggered;
-(void)writeTo:(id)arg0 ;


@end


#endif