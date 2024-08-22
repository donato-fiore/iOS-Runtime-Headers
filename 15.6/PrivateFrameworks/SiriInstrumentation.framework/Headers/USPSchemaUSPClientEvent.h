// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef USPSCHEMAUSPCLIENTEVENT_H
#define USPSCHEMAUSPCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "USPSchemaUSPClientEventMetadata.h"
#import "USPSchemaUSPIterationEnded.h"
#import "USPSchemaUSPIterationStarted.h"
#import "USPSchemaUSPLoggingInitalized.h"
#import "USPSchemaUSPLoggingReported.h"
#import "USPSchemaUSPMeasureEnded.h"
#import "USPSchemaUSPMeasureStarted.h"

@interface USPSchemaUSPClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) USPSchemaUSPClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasIterationEnded; // ivar: _hasIterationEnded
@property (nonatomic) BOOL hasIterationStarted; // ivar: _hasIterationStarted
@property (nonatomic) BOOL hasLoggingInitialized; // ivar: _hasLoggingInitialized
@property (nonatomic) BOOL hasLoggingReported; // ivar: _hasLoggingReported
@property (nonatomic) BOOL hasMeasureEnded; // ivar: _hasMeasureEnded
@property (nonatomic) BOOL hasMeasureStarted; // ivar: _hasMeasureStarted
@property (retain, nonatomic) USPSchemaUSPIterationEnded *iterationEnded; // ivar: _iterationEnded
@property (retain, nonatomic) USPSchemaUSPIterationStarted *iterationStarted; // ivar: _iterationStarted
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) USPSchemaUSPLoggingInitalized *loggingInitialized; // ivar: _loggingInitialized
@property (retain, nonatomic) USPSchemaUSPLoggingReported *loggingReported; // ivar: _loggingReported
@property (retain, nonatomic) USPSchemaUSPMeasureEnded *measureEnded; // ivar: _measureEnded
@property (retain, nonatomic) USPSchemaUSPMeasureStarted *measureStarted; // ivar: _measureStarted
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
-(void)deleteEventMetadata;
-(void)deleteIterationEnded;
-(void)deleteIterationStarted;
-(void)deleteLoggingInitialized;
-(void)deleteLoggingReported;
-(void)deleteMeasureEnded;
-(void)deleteMeasureStarted;
-(void)writeTo:(id)arg0 ;


@end


#endif