// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRISETUPSCHEMASIRISETUPCLIENTEVENT_H
#define SIRISETUPSCHEMASIRISETUPCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceCompleted.h"
#import "SIRISETUPSchemaSIRISETUPPHSEnrollmentDigitalZeroDetectionCompleted.h"
#import "SIRISETUPSchemaSIRISETUPClientEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"

@interface SIRISETUPSchemaSIRISETUPClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceCompleted *enrollmentUtteranceCompleted; // ivar: _enrollmentUtteranceCompleted
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentDigitalZeroDetectionCompleted *enrollmentZeroDetectionCompleted; // ivar: _enrollmentZeroDetectionCompleted
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEnrollmentUtteranceCompleted; // ivar: _hasEnrollmentUtteranceCompleted
@property (nonatomic) BOOL hasEnrollmentZeroDetectionCompleted; // ivar: _hasEnrollmentZeroDetectionCompleted
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


+(int)joinability;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)getComponentId;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)componentName;
-(int)getAnyEventType;
-(void)deleteEnrollmentUtteranceCompleted;
-(void)deleteEnrollmentZeroDetectionCompleted;
-(void)deleteEventMetadata;
-(void)writeTo:(id)arg0 ;


@end


#endif