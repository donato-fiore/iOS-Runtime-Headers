// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ORCHSCHEMAORCHCLIENTEVENT_H
#define ORCHSCHEMAORCHCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "ORCHSchemaORCHASRBridgeContext.h"
#import "ORCHSchemaORCHAssetsReported.h"
#import "ORCHSchemaORCHCDMBridgeContext.h"
#import "ORCHSchemaORCHConversationContextSubmitted.h"
#import "ORCHSchemaORCHClientEventMetadata.h"
#import "ORCHSchemaORCHExecutionBridgeContext.h"
#import "ORCHSchemaORCHFlowOutputSubmitted.h"
#import "SISchemaInstrumentationMessage.h"
#import "ORCHSchemaORCHMultiUserResultCandidateReceived.h"
#import "ORCHSchemaORCHMultiUserResultCandidateSelected.h"
#import "ORCHSchemaORCHMUXBridgeContext.h"
#import "ORCHSchemaORCHDeviceDynamicContext.h"
#import "ORCHSchemaORCHPommesBridgeContext.h"
#import "ORCHSchemaORCHRequestContext.h"
#import "ORCHSchemaORCHResourceUtilizationMetadata.h"
#import "ORCHSchemaORCHResultCandidateReceived.h"
#import "ORCHSchemaORCHResultSelected.h"
#import "ORCHSchemaORCHServerFallbackContext.h"

@interface ORCHSchemaORCHClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) ORCHSchemaORCHASRBridgeContext *asrBridgeContext; // ivar: _asrBridgeContext
@property (retain, nonatomic) ORCHSchemaORCHAssetsReported *availableAssets; // ivar: _availableAssets
@property (retain, nonatomic) ORCHSchemaORCHCDMBridgeContext *cdmBridgeContext; // ivar: _cdmBridgeContext
@property (retain, nonatomic) ORCHSchemaORCHConversationContextSubmitted *contextSubmissionMessage; // ivar: _contextSubmissionMessage
@property (retain, nonatomic) ORCHSchemaORCHClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (retain, nonatomic) ORCHSchemaORCHExecutionBridgeContext *executionBridgeContext; // ivar: _executionBridgeContext
@property (retain, nonatomic) ORCHSchemaORCHFlowOutputSubmitted *flowOutputSubmitted; // ivar: _flowOutputSubmitted
@property (nonatomic) BOOL hasAsrBridgeContext; // ivar: _hasAsrBridgeContext
@property (nonatomic) BOOL hasAvailableAssets; // ivar: _hasAvailableAssets
@property (nonatomic) BOOL hasCdmBridgeContext; // ivar: _hasCdmBridgeContext
@property (nonatomic) BOOL hasContextSubmissionMessage; // ivar: _hasContextSubmissionMessage
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasExecutionBridgeContext; // ivar: _hasExecutionBridgeContext
@property (nonatomic) BOOL hasFlowOutputSubmitted; // ivar: _hasFlowOutputSubmitted
@property (nonatomic) BOOL hasMultiUserResultCandidate; // ivar: _hasMultiUserResultCandidate
@property (nonatomic) BOOL hasMultiUserResultSelected; // ivar: _hasMultiUserResultSelected
@property (nonatomic) BOOL hasMuxBridgeContext; // ivar: _hasMuxBridgeContext
@property (nonatomic) BOOL hasOrchDeviceDynamicContext; // ivar: _hasOrchDeviceDynamicContext
@property (nonatomic) BOOL hasPommesBridgeContext; // ivar: _hasPommesBridgeContext
@property (nonatomic) BOOL hasRequestContext; // ivar: _hasRequestContext
@property (nonatomic) BOOL hasResourceUtilizationMetadata; // ivar: _hasResourceUtilizationMetadata
@property (nonatomic) BOOL hasResultCandidate; // ivar: _hasResultCandidate
@property (nonatomic) BOOL hasResultSelected; // ivar: _hasResultSelected
@property (nonatomic) BOOL hasServerFallbackContext; // ivar: _hasServerFallbackContext
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) ORCHSchemaORCHMultiUserResultCandidateReceived *multiUserResultCandidate; // ivar: _multiUserResultCandidate
@property (retain, nonatomic) ORCHSchemaORCHMultiUserResultCandidateSelected *multiUserResultSelected; // ivar: _multiUserResultSelected
@property (retain, nonatomic) ORCHSchemaORCHMUXBridgeContext *muxBridgeContext; // ivar: _muxBridgeContext
@property (retain, nonatomic) ORCHSchemaORCHDeviceDynamicContext *orchDeviceDynamicContext; // ivar: _orchDeviceDynamicContext
@property (retain, nonatomic) ORCHSchemaORCHPommesBridgeContext *pommesBridgeContext; // ivar: _pommesBridgeContext
@property (retain, nonatomic) ORCHSchemaORCHRequestContext *requestContext; // ivar: _requestContext
@property (retain, nonatomic) ORCHSchemaORCHResourceUtilizationMetadata *resourceUtilizationMetadata; // ivar: _resourceUtilizationMetadata
@property (retain, nonatomic) ORCHSchemaORCHResultCandidateReceived *resultCandidate; // ivar: _resultCandidate
@property (retain, nonatomic) ORCHSchemaORCHResultSelected *resultSelected; // ivar: _resultSelected
@property (retain, nonatomic) ORCHSchemaORCHServerFallbackContext *serverFallbackContext; // ivar: _serverFallbackContext
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
-(void)deleteAsrBridgeContext;
-(void)deleteAvailableAssets;
-(void)deleteCdmBridgeContext;
-(void)deleteContextSubmissionMessage;
-(void)deleteEventMetadata;
-(void)deleteExecutionBridgeContext;
-(void)deleteFlowOutputSubmitted;
-(void)deleteMultiUserResultCandidate;
-(void)deleteMultiUserResultSelected;
-(void)deleteMuxBridgeContext;
-(void)deleteOrchDeviceDynamicContext;
-(void)deletePommesBridgeContext;
-(void)deleteRequestContext;
-(void)deleteResourceUtilizationMetadata;
-(void)deleteResultCandidate;
-(void)deleteResultSelected;
-(void)deleteServerFallbackContext;
-(void)writeTo:(id)arg0 ;


@end


#endif