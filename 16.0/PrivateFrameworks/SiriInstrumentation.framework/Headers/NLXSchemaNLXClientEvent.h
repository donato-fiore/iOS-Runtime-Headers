// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLXSCHEMANLXCLIENTEVENT_H
#define NLXSCHEMANLXCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "NLXSchemaCDMAllServicesSetupContext.h"
#import "NLXSchemaCDMClientSetupContext.h"
#import "NLXSchemaCDMContextUpdateEnded.h"
#import "NLXSchemaCDMDelegatedUserDialogActTier1.h"
#import "NLXSchemaCDMMatchingSpanEnded.h"
#import "NLXSchemaCDMMatchingSpanEndedTier1.h"
#import "NLXSchemaCDMMatchingSpanTier1.h"
#import "NLXSchemaCDMRequestContext.h"
#import "NLXSchemaCDMServiceContext.h"
#import "NLXSchemaCDMSingleServiceSetupAttemptContext.h"
#import "NLXSchemaCDMSingleServiceSetupAttemptFailed.h"
#import "NLXSchemaCDMSpanMatcherContext.h"
#import "NLXSchemaCDMSystemDialogActTier1.h"
#import "NLXSchemaCDMTokenizationEnded.h"
#import "NLXSchemaCDMUsoGraphTier1.h"
#import "NLXSchemaNLXClientEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "NLXSchemaMARRSContextualSpanMatcherEnded.h"
#import "NLXSchemaMARRSContextualSpanMatcherEndedTier1.h"
#import "NLXSchemaMARRSMentionDetectorEnded.h"
#import "NLXSchemaMARRSMentionDetectorEndedTier1.h"
#import "NLXSchemaMARRSMentionResolverEnded.h"
#import "NLXSchemaMARRSMentionResolverEndedTier1.h"
#import "NLXSchemaMARRSQueryRewriteContext.h"
#import "NLXSchemaMARRSQueryRewriteEvaluatedTier1.h"
#import "NLXSchemaMARRSRepetitionDetectionContext.h"
#import "NLXSchemaNLXCurareContext.h"
#import "NLXSchemaNLXDeviceFixedContext.h"
#import "NLXSchemaNLXLegacyNLContextTier1.h"

@interface NLXSchemaNLXClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) NLXSchemaCDMAllServicesSetupContext *cdmAllServicesSetupContext; // ivar: _cdmAllServicesSetupContext
@property (retain, nonatomic) NLXSchemaCDMClientSetupContext *cdmClientSetupContext; // ivar: _cdmClientSetupContext
@property (retain, nonatomic) NLXSchemaCDMContextUpdateEnded *cdmContextUpdateEnded; // ivar: _cdmContextUpdateEnded
@property (retain, nonatomic) NLXSchemaCDMDelegatedUserDialogActTier1 *cdmDelegatedUserDialogActTier1; // ivar: _cdmDelegatedUserDialogActTier1
@property (retain, nonatomic) NLXSchemaCDMMatchingSpanEnded *cdmMatchingSpanEnded; // ivar: _cdmMatchingSpanEnded
@property (retain, nonatomic) NLXSchemaCDMMatchingSpanEndedTier1 *cdmMatchingSpanEndedTier1; // ivar: _cdmMatchingSpanEndedTier1
@property (retain, nonatomic) NLXSchemaCDMMatchingSpanTier1 *cdmMatchingSpanTier1; // ivar: _cdmMatchingSpanTier1
@property (retain, nonatomic) NLXSchemaCDMRequestContext *cdmRequestContext; // ivar: _cdmRequestContext
@property (retain, nonatomic) NLXSchemaCDMServiceContext *cdmServiceContext; // ivar: _cdmServiceContext
@property (retain, nonatomic) NLXSchemaCDMSingleServiceSetupAttemptContext *cdmSingleServiceSetupAttemptContext; // ivar: _cdmSingleServiceSetupAttemptContext
@property (retain, nonatomic) NLXSchemaCDMSingleServiceSetupAttemptFailed *cdmSingleServiceSetupAttemptFailed; // ivar: _cdmSingleServiceSetupAttemptFailed
@property (retain, nonatomic) NLXSchemaCDMSpanMatcherContext *cdmSpanMatcherContext; // ivar: _cdmSpanMatcherContext
@property (retain, nonatomic) NLXSchemaCDMSystemDialogActTier1 *cdmSystemDialogActTier1; // ivar: _cdmSystemDialogActTier1
@property (retain, nonatomic) NLXSchemaCDMTokenizationEnded *cdmTokenizationEnded; // ivar: _cdmTokenizationEnded
@property (retain, nonatomic) NLXSchemaCDMUsoGraphTier1 *cdmUsoGraphTier1; // ivar: _cdmUsoGraphTier1
@property (retain, nonatomic) NLXSchemaNLXClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasCdmAllServicesSetupContext; // ivar: _hasCdmAllServicesSetupContext
@property (nonatomic) BOOL hasCdmClientSetupContext; // ivar: _hasCdmClientSetupContext
@property (nonatomic) BOOL hasCdmContextUpdateEnded; // ivar: _hasCdmContextUpdateEnded
@property (nonatomic) BOOL hasCdmDelegatedUserDialogActTier1; // ivar: _hasCdmDelegatedUserDialogActTier1
@property (nonatomic) BOOL hasCdmMatchingSpanEnded; // ivar: _hasCdmMatchingSpanEnded
@property (nonatomic) BOOL hasCdmMatchingSpanEndedTier1; // ivar: _hasCdmMatchingSpanEndedTier1
@property (nonatomic) BOOL hasCdmMatchingSpanTier1; // ivar: _hasCdmMatchingSpanTier1
@property (nonatomic) BOOL hasCdmRequestContext; // ivar: _hasCdmRequestContext
@property (nonatomic) BOOL hasCdmServiceContext; // ivar: _hasCdmServiceContext
@property (nonatomic) BOOL hasCdmSingleServiceSetupAttemptContext; // ivar: _hasCdmSingleServiceSetupAttemptContext
@property (nonatomic) BOOL hasCdmSingleServiceSetupAttemptFailed; // ivar: _hasCdmSingleServiceSetupAttemptFailed
@property (nonatomic) BOOL hasCdmSpanMatcherContext; // ivar: _hasCdmSpanMatcherContext
@property (nonatomic) BOOL hasCdmSystemDialogActTier1; // ivar: _hasCdmSystemDialogActTier1
@property (nonatomic) BOOL hasCdmTokenizationEnded; // ivar: _hasCdmTokenizationEnded
@property (nonatomic) BOOL hasCdmUsoGraphTier1; // ivar: _hasCdmUsoGraphTier1
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasMarrsContextualSpanMatcherEnded; // ivar: _hasMarrsContextualSpanMatcherEnded
@property (nonatomic) BOOL hasMarrsContextualSpanMatcherEndedTier1; // ivar: _hasMarrsContextualSpanMatcherEndedTier1
@property (nonatomic) BOOL hasMarrsMentionDetectorEnded; // ivar: _hasMarrsMentionDetectorEnded
@property (nonatomic) BOOL hasMarrsMentionDetectorEndedTier1; // ivar: _hasMarrsMentionDetectorEndedTier1
@property (nonatomic) BOOL hasMarrsMentionResolverEnded; // ivar: _hasMarrsMentionResolverEnded
@property (nonatomic) BOOL hasMarrsMentionResolverEndedTier1; // ivar: _hasMarrsMentionResolverEndedTier1
@property (nonatomic) BOOL hasMarrsQueryRewriteContext; // ivar: _hasMarrsQueryRewriteContext
@property (nonatomic) BOOL hasMarrsQueryRewriteEvaluatedTier1; // ivar: _hasMarrsQueryRewriteEvaluatedTier1
@property (nonatomic) BOOL hasMarrsRepetitionDetectionContext; // ivar: _hasMarrsRepetitionDetectionContext
@property (nonatomic) BOOL hasNlxCurareContext; // ivar: _hasNlxCurareContext
@property (nonatomic) BOOL hasNlxDeviceFixedContext; // ivar: _hasNlxDeviceFixedContext
@property (nonatomic) BOOL hasNlxLegacyNLContextTier1; // ivar: _hasNlxLegacyNLContextTier1
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) NLXSchemaMARRSContextualSpanMatcherEnded *marrsContextualSpanMatcherEnded; // ivar: _marrsContextualSpanMatcherEnded
@property (retain, nonatomic) NLXSchemaMARRSContextualSpanMatcherEndedTier1 *marrsContextualSpanMatcherEndedTier1; // ivar: _marrsContextualSpanMatcherEndedTier1
@property (retain, nonatomic) NLXSchemaMARRSMentionDetectorEnded *marrsMentionDetectorEnded; // ivar: _marrsMentionDetectorEnded
@property (retain, nonatomic) NLXSchemaMARRSMentionDetectorEndedTier1 *marrsMentionDetectorEndedTier1; // ivar: _marrsMentionDetectorEndedTier1
@property (retain, nonatomic) NLXSchemaMARRSMentionResolverEnded *marrsMentionResolverEnded; // ivar: _marrsMentionResolverEnded
@property (retain, nonatomic) NLXSchemaMARRSMentionResolverEndedTier1 *marrsMentionResolverEndedTier1; // ivar: _marrsMentionResolverEndedTier1
@property (retain, nonatomic) NLXSchemaMARRSQueryRewriteContext *marrsQueryRewriteContext; // ivar: _marrsQueryRewriteContext
@property (retain, nonatomic) NLXSchemaMARRSQueryRewriteEvaluatedTier1 *marrsQueryRewriteEvaluatedTier1; // ivar: _marrsQueryRewriteEvaluatedTier1
@property (retain, nonatomic) NLXSchemaMARRSRepetitionDetectionContext *marrsRepetitionDetectionContext; // ivar: _marrsRepetitionDetectionContext
@property (retain, nonatomic) NLXSchemaNLXCurareContext *nlxCurareContext; // ivar: _nlxCurareContext
@property (retain, nonatomic) NLXSchemaNLXDeviceFixedContext *nlxDeviceFixedContext; // ivar: _nlxDeviceFixedContext
@property (retain, nonatomic) NLXSchemaNLXLegacyNLContextTier1 *nlxLegacyNLContextTier1; // ivar: _nlxLegacyNLContextTier1
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
-(void)deleteCdmAllServicesSetupContext;
-(void)deleteCdmClientSetupContext;
-(void)deleteCdmContextUpdateEnded;
-(void)deleteCdmDelegatedUserDialogActTier1;
-(void)deleteCdmMatchingSpanEnded;
-(void)deleteCdmMatchingSpanEndedTier1;
-(void)deleteCdmMatchingSpanTier1;
-(void)deleteCdmRequestContext;
-(void)deleteCdmServiceContext;
-(void)deleteCdmSingleServiceSetupAttemptContext;
-(void)deleteCdmSingleServiceSetupAttemptFailed;
-(void)deleteCdmSpanMatcherContext;
-(void)deleteCdmSystemDialogActTier1;
-(void)deleteCdmTokenizationEnded;
-(void)deleteCdmUsoGraphTier1;
-(void)deleteEventMetadata;
-(void)deleteMarrsContextualSpanMatcherEnded;
-(void)deleteMarrsContextualSpanMatcherEndedTier1;
-(void)deleteMarrsMentionDetectorEnded;
-(void)deleteMarrsMentionDetectorEndedTier1;
-(void)deleteMarrsMentionResolverEnded;
-(void)deleteMarrsMentionResolverEndedTier1;
-(void)deleteMarrsQueryRewriteContext;
-(void)deleteMarrsQueryRewriteEvaluatedTier1;
-(void)deleteMarrsRepetitionDetectionContext;
-(void)deleteNlxCurareContext;
-(void)deleteNlxDeviceFixedContext;
-(void)deleteNlxLegacyNLContextTier1;
-(void)writeTo:(id)arg0 ;


@end


#endif