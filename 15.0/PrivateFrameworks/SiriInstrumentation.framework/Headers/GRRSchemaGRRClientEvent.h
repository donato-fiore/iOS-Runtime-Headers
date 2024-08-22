// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GRRSCHEMAGRRCLIENTEVENT_H
#define GRRSCHEMAGRRCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "GRRSchemaGRRClientEventMetadata.h"
#import "GRRSchemaGRRFeatureExtractionContext.h"
#import "GRRSchemaGRRHypothesisRankingContext.h"
#import "GRRSchemaGRRSystemErrorOccurred.h"

@interface GRRSchemaGRRClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) GRRSchemaGRRClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (retain, nonatomic) GRRSchemaGRRFeatureExtractionContext *featureExtractionContext; // ivar: _featureExtractionContext
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasFeatureExtractionContext; // ivar: _hasFeatureExtractionContext
@property (nonatomic) BOOL hasHypothesisRankingContext; // ivar: _hasHypothesisRankingContext
@property (nonatomic) BOOL hasSystemErrorOccurred; // ivar: _hasSystemErrorOccurred
@property (retain, nonatomic) GRRSchemaGRRHypothesisRankingContext *hypothesisRankingContext; // ivar: _hypothesisRankingContext
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) GRRSchemaGRRSystemErrorOccurred *systemErrorOccurred; // ivar: _systemErrorOccurred
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