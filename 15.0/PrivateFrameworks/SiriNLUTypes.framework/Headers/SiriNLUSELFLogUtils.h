// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUSELFLOGUTILS_H
#define SIRINLUSELFLOGUTILS_H


#import <Foundation/Foundation.h>


@interface SiriNLUSELFLogUtils : NSObject



+(BOOL)isLegacyNlContextNotEmpty:(id)arg0 ;
+(BOOL)isNlContextNotEmpty:(id)arg0 ;
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
+(id)createCDMRequestEndedLog:(id)arg0 metadata:(id)arg1 ;
+(id)createCDMRequestFailedLog:(int)arg0 metadata:(id)arg1 ;
+(id)createCDMRequestFailedLog:(int)arg0 originalCode:(NSInteger)arg1 metadata:(id)arg2 ;
+(id)createCDMRequestStartedLog:(id)arg0 metadata:(id)arg1 ;
+(id)createContextUpdateEndedLog:(id)arg0 contextUpdateResponse:(id)arg1 metadata:(id)arg2 ;
+(id)createDelegatedUserDialogActTier1Event:(id)arg0 withLinkId:(id)arg1 ;
+(id)createMatchingSpanEndedLog:(id)arg0 spanMatchResponse:(id)arg1 metadata:(id)arg2 ;
+(id)createMatchingSpanTier1Event:(id)arg0 withlinkId:(id)arg1 ;
+(id)createNLXClientEventMetadataWithNlId:(id)arg0 andWithResultCandidateId:(id)arg1 ;
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
+(int)convertUSOEntityIdentifierNluComponent:(int)arg0 ;
+(int)convertUsoBackingAppBundleType:(id)arg0 ;
+(void)populateEventsWithMetadata:(id)arg0 metadata:(id)arg1 ;


@end


#endif