// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POMMESSCHEMAPOMMESCLIENTEVENT_H
#define POMMESSCHEMAPOMMESCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "POMMESSchemaPOMMESClientEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "POMMESSchemaPOMMESOnDeviceIndexSearchContext.h"
#import "POMMESSchemaPOMMESPegasusKitPegasusRequestContext.h"
#import "POMMESSchemaPOMMESPegasusRequestContext.h"
#import "POMMESSchemaPOMMESDebugPerformanceReported.h"
#import "POMMESSchemaPOMMESRequestContext.h"
#import "POMMESSchemaPOMMESServiceClassifierScoreReported.h"
#import "POMMESSchemaPOMMESProfileSliceResolutionRequestContext.h"

@interface POMMESSchemaPOMMESClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) POMMESSchemaPOMMESClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasOnDeviceIndexSearchContext; // ivar: _hasOnDeviceIndexSearchContext
@property (nonatomic) BOOL hasPegasusKitRequestContext; // ivar: _hasPegasusKitRequestContext
@property (nonatomic) BOOL hasPegasusRequestContext; // ivar: _hasPegasusRequestContext
@property (nonatomic) BOOL hasPerformanceReported; // ivar: _hasPerformanceReported
@property (nonatomic) BOOL hasPommesRequestContext; // ivar: _hasPommesRequestContext
@property (nonatomic) BOOL hasPommesServiceClassifierScoreReported; // ivar: _hasPommesServiceClassifierScoreReported
@property (nonatomic) BOOL hasProfileResolutionRequestContext; // ivar: _hasProfileResolutionRequestContext
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) POMMESSchemaPOMMESOnDeviceIndexSearchContext *onDeviceIndexSearchContext; // ivar: _onDeviceIndexSearchContext
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusKitPegasusRequestContext *pegasusKitRequestContext; // ivar: _pegasusKitRequestContext
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestContext *pegasusRequestContext; // ivar: _pegasusRequestContext
@property (retain, nonatomic) POMMESSchemaPOMMESDebugPerformanceReported *performanceReported; // ivar: _performanceReported
@property (retain, nonatomic) POMMESSchemaPOMMESRequestContext *pommesRequestContext; // ivar: _pommesRequestContext
@property (retain, nonatomic) POMMESSchemaPOMMESServiceClassifierScoreReported *pommesServiceClassifierScoreReported; // ivar: _pommesServiceClassifierScoreReported
@property (retain, nonatomic) POMMESSchemaPOMMESProfileSliceResolutionRequestContext *profileResolutionRequestContext; // ivar: _profileResolutionRequestContext
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
-(void)deleteOnDeviceIndexSearchContext;
-(void)deletePegasusKitRequestContext;
-(void)deletePegasusRequestContext;
-(void)deletePerformanceReported;
-(void)deletePommesRequestContext;
-(void)deletePommesServiceClassifierScoreReported;
-(void)deleteProfileResolutionRequestContext;
-(void)writeTo:(id)arg0 ;


@end


#endif