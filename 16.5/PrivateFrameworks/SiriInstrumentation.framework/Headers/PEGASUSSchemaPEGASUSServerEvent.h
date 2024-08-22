// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PEGASUSSCHEMAPEGASUSSERVEREVENT_H
#define PEGASUSSCHEMAPEGASUSSERVEREVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "PEGASUSSchemaPEGASUSServerEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "PEGASUSSchemaPEGASUSRequestContext.h"
#import "PEGASUSSchemaPEGASUSRewrittenUtterancesReported.h"
#import "PEGASUSSchemaPEGASUSRewrittenUtterancesReportedTier1.h"
#import "PEGASUSSchemaPEGASUSUtteranceUnderstandingReported.h"
#import "PEGASUSSchemaPEGASUSUtteranceUnderstandingReportedTier1.h"

@interface PEGASUSSchemaPEGASUSServerEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) PEGASUSSchemaPEGASUSServerEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasPegasusRequestContext; // ivar: _hasPegasusRequestContext
@property (nonatomic) BOOL hasPegasusRewrittenUtterancesReported; // ivar: _hasPegasusRewrittenUtterancesReported
@property (nonatomic) BOOL hasPegasusRewrittenUtterancesReportedTier1; // ivar: _hasPegasusRewrittenUtterancesReportedTier1
@property (nonatomic) BOOL hasPegasusUtteranceUnderstandingReported; // ivar: _hasPegasusUtteranceUnderstandingReported
@property (nonatomic) BOOL hasPegasusUtteranceUnderstandingReportedTier1; // ivar: _hasPegasusUtteranceUnderstandingReportedTier1
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSRequestContext *pegasusRequestContext; // ivar: _pegasusRequestContext
@property (retain, nonatomic) PEGASUSSchemaPEGASUSRewrittenUtterancesReported *pegasusRewrittenUtterancesReported; // ivar: _pegasusRewrittenUtterancesReported
@property (retain, nonatomic) PEGASUSSchemaPEGASUSRewrittenUtterancesReportedTier1 *pegasusRewrittenUtterancesReportedTier1; // ivar: _pegasusRewrittenUtterancesReportedTier1
@property (retain, nonatomic) PEGASUSSchemaPEGASUSUtteranceUnderstandingReported *pegasusUtteranceUnderstandingReported; // ivar: _pegasusUtteranceUnderstandingReported
@property (retain, nonatomic) PEGASUSSchemaPEGASUSUtteranceUnderstandingReportedTier1 *pegasusUtteranceUnderstandingReportedTier1; // ivar: _pegasusUtteranceUnderstandingReportedTier1
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
-(void)deleteEventMetadata;
-(void)deletePegasusRequestContext;
-(void)deletePegasusRewrittenUtterancesReported;
-(void)deletePegasusRewrittenUtterancesReportedTier1;
-(void)deletePegasusUtteranceUnderstandingReported;
-(void)deletePegasusUtteranceUnderstandingReportedTier1;
-(void)writeTo:(id)arg0 ;


@end


#endif