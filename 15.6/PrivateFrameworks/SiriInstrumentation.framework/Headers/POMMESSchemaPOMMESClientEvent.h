// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POMMESSCHEMAPOMMESCLIENTEVENT_H
#define POMMESSCHEMAPOMMESCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "POMMESSchemaPOMMESClientEventMetadata.h"
#import "POMMESSchemaPOMMESOnDeviceIndexSearchContext.h"
#import "POMMESSchemaPOMMESPegasusRequestContext.h"
#import "POMMESSchemaPOMMESDebugPerformanceReported.h"
#import "POMMESSchemaPOMMESRequestContext.h"
#import "POMMESSchemaPOMMESServiceClassifierScoreReported.h"

@interface POMMESSchemaPOMMESClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) POMMESSchemaPOMMESClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasOnDeviceIndexSearchContext; // ivar: _hasOnDeviceIndexSearchContext
@property (nonatomic) BOOL hasPegasusRequestContext; // ivar: _hasPegasusRequestContext
@property (nonatomic) BOOL hasPerformanceReported; // ivar: _hasPerformanceReported
@property (nonatomic) BOOL hasPommesRequestContext; // ivar: _hasPommesRequestContext
@property (nonatomic) BOOL hasPommesServiceClassifierScoreReported; // ivar: _hasPommesServiceClassifierScoreReported
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) POMMESSchemaPOMMESOnDeviceIndexSearchContext *onDeviceIndexSearchContext; // ivar: _onDeviceIndexSearchContext
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestContext *pegasusRequestContext; // ivar: _pegasusRequestContext
@property (retain, nonatomic) POMMESSchemaPOMMESDebugPerformanceReported *performanceReported; // ivar: _performanceReported
@property (retain, nonatomic) POMMESSchemaPOMMESRequestContext *pommesRequestContext; // ivar: _pommesRequestContext
@property (retain, nonatomic) POMMESSchemaPOMMESServiceClassifierScoreReported *pommesServiceClassifierScoreReported; // ivar: _pommesServiceClassifierScoreReported
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
-(void)deleteOnDeviceIndexSearchContext;
-(void)deletePegasusRequestContext;
-(void)deletePerformanceReported;
-(void)deletePommesRequestContext;
-(void)deletePommesServiceClassifierScoreReported;
-(void)writeTo:(id)arg0 ;


@end


#endif