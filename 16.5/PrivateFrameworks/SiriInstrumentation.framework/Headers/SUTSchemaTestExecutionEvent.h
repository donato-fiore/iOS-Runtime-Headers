// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUTSCHEMATESTEXECUTIONEVENT_H
#define SUTSCHEMATESTEXECUTIONEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "SISchemaInstrumentationMessage.h"
#import "SUTSchemaTestExecutionMetadata.h"
#import "SUTSchemaTestAssociatedSchemaIdentifier.h"
#import "SUTSchemaTestExecutionBegin.h"
#import "SUTSchemaTestExecutionEnd.h"
#import "SUTSchemaTestOutcomeRecorded.h"

@interface SUTSchemaTestExecutionEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (nonatomic) BOOL hasMetadata; // ivar: _hasMetadata
@property (nonatomic) BOOL hasTestAssociatedSchemaIdentifier; // ivar: _hasTestAssociatedSchemaIdentifier
@property (nonatomic) BOOL hasTestExecutionBegin; // ivar: _hasTestExecutionBegin
@property (nonatomic) BOOL hasTestExecutionEnd; // ivar: _hasTestExecutionEnd
@property (nonatomic) BOOL hasTestOutcomeRecorded; // ivar: _hasTestOutcomeRecorded
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SUTSchemaTestExecutionMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) SUTSchemaTestAssociatedSchemaIdentifier *testAssociatedSchemaIdentifier; // ivar: _testAssociatedSchemaIdentifier
@property (retain, nonatomic) SUTSchemaTestExecutionBegin *testExecutionBegin; // ivar: _testExecutionBegin
@property (retain, nonatomic) SUTSchemaTestExecutionEnd *testExecutionEnd; // ivar: _testExecutionEnd
@property (retain, nonatomic) SUTSchemaTestOutcomeRecorded *testOutcomeRecorded; // ivar: _testOutcomeRecorded
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
-(void)deleteMetadata;
-(void)deleteTestAssociatedSchemaIdentifier;
-(void)deleteTestExecutionBegin;
-(void)deleteTestExecutionEnd;
-(void)deleteTestOutcomeRecorded;
-(void)writeTo:(id)arg0 ;


@end


#endif