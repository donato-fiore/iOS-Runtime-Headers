// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODMSIRISCHEMAODMSIRICLIENTEVENT_H
#define ODMSIRISCHEMAODMSIRICLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "ODMSiriSchemaODMSiriCountsReported.h"
#import "ODMSiriSchemaODMSiriEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "ODMSiriSchemaODMSiriTaskCountsReported.h"

@interface ODMSiriSchemaODMSiriClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) ODMSiriSchemaODMSiriCountsReported *countsReported; // ivar: _countsReported
@property (retain, nonatomic) ODMSiriSchemaODMSiriEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasCountsReported; // ivar: _hasCountsReported
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasTaskCountsReported; // ivar: _hasTaskCountsReported
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) ODMSiriSchemaODMSiriTaskCountsReported *taskCountsReported; // ivar: _taskCountsReported
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
-(int)clockIsolationLevel;
-(int)getAnyEventType;
-(void)deleteCountsReported;
-(void)deleteEventMetadata;
-(void)deleteTaskCountsReported;
-(void)writeTo:(id)arg0 ;


@end


#endif