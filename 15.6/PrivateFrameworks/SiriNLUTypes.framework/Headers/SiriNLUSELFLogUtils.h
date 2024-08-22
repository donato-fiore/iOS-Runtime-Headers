// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUSELFLOGUTILS_H
#define SIRINLUSELFLOGUTILS_H


#import <Foundation/Foundation.h>


@interface SiriNLUSELFLogUtils : NSObject



+(BOOL)isLegacyNlContextPresent:(id)arg0 ;
+(BOOL)isNlContextPresent:(id)arg0 ;
+(id)convertAccepted:(id)arg0 ;
+(id)convertAcknowledged:(id)arg0 ;
+(id)convertCancelled:(id)arg0 ;
+(id)convertDelegated:(id)arg0 ;
+(id)convertGaveOptions:(id)arg0 ;
+(id)convertInformed:(id)arg0 ;
+(id)convertInternalSpanData:(id)arg0 ;
+(id)convertLegacyNLContext:(id)arg0 ;
+(id)convertMatchingSpan:(id)arg0 ;
+(id)convertMatchingSpanTier1:(id)arg0 ;
+(id)convertMentionDetectorSpanData:(id)arg0 ;
+(id)convertMentionResolverSpanData:(id)arg0 ;
+(id)convertNLContext:(id)arg0 ;
+(id)convertNonTier1UsoGraph:(id)arg0 ;
+(id)convertNonTier1UsoGraph:(id)arg0 identifiers:(id)arg1 ;
+(id)convertOffered:(id)arg0 ;
+(id)convertPLUMSpanData:(id)arg0 ;
+(id)convertParser:(id)arg0 ;
+(id)convertPrompted:(id)arg0 ;
+(id)convertReformedTurnInputBundle:(id)arg0 ;
+(id)convertRejected:(id)arg0 ;
+(id)convertRepetitionResult:(id)arg0 ;
+(id)convertReportedFailure:(id)arg0 ;
+(id)convertReportedSuccess:(id)arg0 ;
+(id)convertSiriVocabularySpanData:(id)arg0 ;
+(id)convertSystemDialogAct:(id)arg0 ;
+(id)convertTask:(id)arg0 ;
+(id)convertToken:(id)arg0 ;
+(id)convertTokenChain:(id)arg0 ;
+(id)convertTurnContext:(id)arg0 ;
+(id)convertTurnInput:(id)arg0 ;
+(id)convertUUID:(id)arg0 ;
+(id)convertUserDialogAct:(id)arg0 ;
+(id)convertUserParse:(id)arg0 ;
+(id)convertUserStatedTask:(id)arg0 ;
+(id)convertUsoEdge:(id)arg0 ;
+(id)convertUsoEntityIdentifier:(id)arg0 ;
+(id)convertUsoEntityIdentifier:(id)arg0 index:(NSInteger)arg1 ;
+(id)convertUsoEntityIdentifierTier1:(id)arg0 index:(NSInteger)arg1 ;
+(id)convertUsoGraph:(id)arg0 ;
+(id)convertUsoNode:(id)arg0 ;
+(id)convertUsoNodeDataTier1:(id)arg0 index:(NSInteger)arg1 ;
+(id)convertUtteranceAlignment:(id)arg0 ;
+(id)convertUtteranceSpan:(id)arg0 ;
+(id)convertVersion:(id)arg0 ;
+(id)convertWantedToPause:(id)arg0 ;
+(id)convertWantedToProceed:(id)arg0 ;
+(id)convertWantedToRepeat:(id)arg0 ;
+(id)createAllZeroUUID;
+(id)createCDMAllServicesSetupEndedLog:(id)arg0 ;
+(id)createCDMAllServicesSetupFailedLog:(id)arg0 ;
+(id)createCDMAllServicesSetupStartedLog:(id)arg0 ;
+(id)createCDMClientSetupEndedLog:(id)arg0 ;
+(id)createCDMClientSetupFailedLog:(id)arg0 reason:(int)arg1 ;
+(id)createCDMClientSetupStartedLog:(id)arg0 ;
+(id)createCDMRequestEndedLog:(id)arg0 metadata:(id)arg1 ;
+(id)createCDMRequestFailedLog:(int)arg0 metadata:(id)arg1 ;
+(id)createCDMRequestFailedLog:(int)arg0 originalCode:(NSInteger)arg1 metadata:(id)arg2 ;
+(id)createCDMRequestStartedLog:(id)arg0 metadata:(id)arg1 ;
+(id)createCDMSingleServiceSetupAttemptEndedLog:(id)arg0 metadata:(id)arg1 ;
+(id)createCDMSingleServiceSetupAttemptFailedLog:(int)arg0 retryNumber:(unsigned int)arg1 reason:(int)arg2 metadata:(id)arg3 ;
+(id)createCDMSingleServiceSetupAttemptStartedLog:(id)arg0 serviceType:(int)arg1 retryNumber:(unsigned int)arg2 metadata:(id)arg3 ;
+(id)createCDMSpanMatcherEndedLog:(id)arg0 metadata:(id)arg1 ;
+(id)createCDMSpanMatcherStartedLog:(id)arg0 matcherName:(int)arg1 metadata:(id)arg2 ;
+(id)createContextUpdateEndedLog:(id)arg0 contextUpdateResponse:(id)arg1 metadata:(id)arg2 ;
+(id)createDelegatedUserDialogActTier1Event:(id)arg0 withLinkId:(id)arg1 ;
+(id)createMatchingSpanEndedLog:(id)arg0 spanMatchResponse:(id)arg1 metadata:(id)arg2 ;
+(id)createMatchingSpanTier1Event:(id)arg0 withlinkId:(id)arg1 ;
+(id)createMultiHypoTokenizationEndedLog:(id)arg0 tokenizationResponses:(id)arg1 tokenizationInputType:(int)arg2 metadata:(id)arg3 ;
+(id)createNLXClientEventMetadataWithNlId:(id)arg0 andWithResultCandidateId:(id)arg1 ;
+(id)createNLXClientEventMetadataWithNlId:(id)arg0 andWithResultCandidateId:(id)arg1 andWithRequester:(*int)arg2 ;
+(id)createNLXCurareContext:(id)arg0 metadata:(id)arg1 ;
+(id)createNLXLegacyNLContextTier1Event:(id)arg0 withLinkId:(id)arg1 ;
+(id)createNLXRequestLinkWithTarget:(int)arg0 andTargetId:(id)arg1 metadata:(id)arg2 ;
+(id)createServiceContextEndedLog:(id)arg0 metadata:(id)arg1 ;
+(id)createServiceContextFailedLog:(id)arg0 failureCode:(int)arg1 metadata:(id)arg2 ;
+(id)createServiceContextStartedLog:(id)arg0 serviceName:(int)arg1 metadata:(id)arg2 ;
+(id)createSystemDialogActTier1Event:(id)arg0 withLinkId:(id)arg1 ;
+(id)createTokenizationEndedLog:(id)arg0 tokenizationResponse:(id)arg1 metadata:(id)arg2 ;
+(id)createTokenizationEndedLog:(id)arg0 tokenizationResponse:(id)arg1 tokenizationInputType:(int)arg2 metadata:(id)arg3 ;
+(id)getObjCUsoGraphFromOntologyUsoGraph:(struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> )arg0 ;
+(id)getReferenceFromAccepted:(id)arg0 ;
+(id)getReferenceFromAcknowledged:(id)arg0 ;
+(id)getReferenceFromCancelled:(id)arg0 ;
+(id)getReferenceFromRejected:(id)arg0 ;
+(id)getReferenceFromWantedToPause:(id)arg0 ;
+(id)getReferenceFromWantedToProceed:(id)arg0 ;
+(id)getReferenceFromWantedToRepeat:(id)arg0 ;
+(id)getTaskFromUserStatedTask:(id)arg0 ;
+(int)convertCDMMatcherName:(int)arg0 ;
+(int)convertCDMParserAlgorithmType:(int)arg0 ;
+(int)convertCDMReformType:(int)arg0 ;
+(int)convertCDMRepetitionType:(int)arg0 ;
+(int)convertCDMRewriteType:(int)arg0 ;
+(int)convertUSOEntityIdentifierNluComponent:(int)arg0 ;
+(int)convertUsoBackingAppBundleType:(id)arg0 ;
+(void)populateEventsWithMetadata:(id)arg0 metadata:(id)arg1 ;


@end


#endif