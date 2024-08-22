// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLPINSTSCHEMACLPCLIENTEVENT_H
#define CLPINSTSCHEMACLPCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "CLPInstSchemaCLPCurareAppIntentSampleClassificationContext.h"
#import "CLPInstSchemaCLPCurareAppIntentTaskClassificationContext.h"
#import "CLPInstSchemaCLPClientEventMetadata.h"
#import "CLPInstSchemaCLPNLv4SampleEvaluationContext.h"
#import "CLPInstSchemaCLPNLv4TaskEvaluationContext.h"

@interface CLPInstSchemaCLPClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) CLPInstSchemaCLPCurareAppIntentSampleClassificationContext *curareAppIntentSampleClassificationContext; // ivar: _curareAppIntentSampleClassificationContext
@property (retain, nonatomic) CLPInstSchemaCLPCurareAppIntentTaskClassificationContext *curareAppIntentTaskClassificationContext; // ivar: _curareAppIntentTaskClassificationContext
@property (retain, nonatomic) CLPInstSchemaCLPClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasCurareAppIntentSampleClassificationContext; // ivar: _hasCurareAppIntentSampleClassificationContext
@property (nonatomic) BOOL hasCurareAppIntentTaskClassificationContext; // ivar: _hasCurareAppIntentTaskClassificationContext
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasNlv4SampleEvaluationContext; // ivar: _hasNlv4SampleEvaluationContext
@property (nonatomic) BOOL hasNlv4TaskEvaluationContext; // ivar: _hasNlv4TaskEvaluationContext
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) CLPInstSchemaCLPNLv4SampleEvaluationContext *nlv4SampleEvaluationContext; // ivar: _nlv4SampleEvaluationContext
@property (retain, nonatomic) CLPInstSchemaCLPNLv4TaskEvaluationContext *nlv4TaskEvaluationContext; // ivar: _nlv4TaskEvaluationContext
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(int)getAnyEventType;
-(void)writeTo:(id)arg0 ;


@end


#endif