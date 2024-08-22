// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGEXTRACTIONDISSECTOR_H
#define SGEXTRACTIONDISSECTOR_H

@class NSXPCConnection, _PASLock, NSString;
@protocol SGMailMessageProcessing, SGTextMessageProcessing, SGInteractionProcessing, SGReverseTemplateJS;


#import "SGPipelineDissector.h"

@interface SGExtractionDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing, SGInteractionProcessing>

 {
    NSXPCConnection *_xpcConnection;
    id<SGReverseTemplateJS> *_reverseTemplateJSNoXPC;
    _PASLock *_classifierCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldIgnoreMailMessage:(id)arg0 ;
+(id)addParams:(id)arg0 toParameterizedString:(id)arg1 ;
+(id)addParams:(id)arg0 toParameterizedString:(id)arg1 allowAlternatives:(BOOL)arg2 ;
+(id)addressDictionaryToString:(id)arg0 ;
-(BOOL)exceedsMaxHTMLContentLength:(NSUInteger)arg0 ;
-(BOOL)isStructuredEventCandidateForURL:(id)arg0 title:(id)arg1 ;
-(BOOL)shouldDownloadFull:(id)arg0 ;
-(id)diffSchemas:(id)arg0 withExpectedSchemas:(id)arg1 ;
-(id)enrichmentsFromSchemas:(id)arg0 inMessage:(id)arg1 parentEntity:(id)arg2 ;
-(id)entityForOutputItem:(id)arg0 parentEntity:(id)arg1 outputExceptions:(id)arg2 outputInfos:(id)arg3 ;
-(id)entityForOutputItem:(id)arg0 parentEntity:(id)arg1 outputExceptions:(id)arg2 outputInfos:(id)arg3 interaction:(id)arg4 ;
-(id)entityForOutputItem:(id)arg0 withSiblings:(id)arg1 parentEntity:(id)arg2 outputExceptions:(id)arg3 outputInfos:(id)arg4 interaction:(id)arg5 ;
-(id)eventActivitiesForReservationWithReference:(id)arg0 inParentEntity:(id)arg1 interaction:(id)arg2 ;
-(id)eventClassificationForMailMessage:(id)arg0 ;
-(id)eventClassificationWithoutXPCForMailMessage:(id)arg0 ;
-(id)eventsFromSchemaOrgItems:(id)arg0 ;
-(id)getAndRemoveItemReferencesFromSchemas:(id)arg0 ;
-(id)init;
-(id)jsDictForResolveCandidates:(id)arg0 forCategory:(id)arg1 label:(id)arg2 rawIndexSet:(id)arg3 taggedCharacterRanges:(id)arg4 ;
-(id)jsonLdOutputFromMailMessage:(id)arg0 ;
-(id)jsonLdOutputFromPackedJSEntity:(id)arg0 ;
-(id)jsonLdOutputFromTextMessage:(id)arg0 ;
-(id)jsonLdOutputFromURL:(id)arg0 title:(id)arg1 payload:(id)arg2 extractionDate:(id)arg3 ;
-(id)mergeSchemas:(id)arg0 withExpectedSchemas:(id)arg1 ;
-(id)outputFromPackedJSMailMessage:(id)arg0 ;
-(id)outputFromPackedJSSchema:(id)arg0 ;
-(id)outputFromPackedJSTextMessage:(id)arg0 ;
-(id)packedJSInteractionFromInteraction:(id)arg0 bundleIdentifier:(id)arg1 creationTimestamp:(CGFloat)arg2 ;
-(id)packedJSMailMessageFromMailMessage:(id)arg0 ;
-(id)packedJSMailMessageFromMailMessage:(id)arg0 context:(id)arg1 ;
-(id)packedJSSchemaFromSchemaOrgItems:(id)arg0 ;
-(id)packedJSTextMessageFromTextMessage:(id)arg0 ;
-(id)packedJSURLFromURL:(id)arg0 title:(id)arg1 payload:(id)arg2 ;
-(id)packedJSURLFromURL:(id)arg0 title:(id)arg1 payload:(id)arg2 creationTimestamp:(CGFloat)arg3 ;
-(id)parseHTML:(id)arg0 ;
-(id)privacyAwareLogsForMLExtractions:(id)arg0 ;
-(id)resolveCandidates:(id)arg0 forCategory:(id)arg1 label:(id)arg2 rawIndexSet:(id)arg3 taggedCharacterRanges:(id)arg4 ;
-(id)resolveCandidatesWithoutXPC:(id)arg0 forCategory:(id)arg1 label:(id)arg2 rawIndexSet:(id)arg3 taggedCharacterRanges:(id)arg4 ;
-(id)reverseMapMailMessage:(id)arg0 withPreprocessedHTML:(id)arg1 forCategory:(id)arg2 withSchemExpectation:(id)arg3 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_addEnrichmentsToEntityForOutput:(id)arg0 entity:(id)arg1 startTime:(NSUInteger)arg2 backPressureHazard:(int)arg3 ;
-(void)_addEnrichmentsToEntityForOutput:(id)arg0 interaction:(id)arg1 entity:(id)arg2 startTime:(NSUInteger)arg3 backPressureHazard:(int)arg4 ;
-(void)addEnrichmentsToEntityForOutputItems:(id)arg0 exceptions:(id)arg1 jsMessageLogs:(id)arg2 interaction:(id)arg3 entity:(id)arg4 startTime:(NSUInteger)arg5 backPressureHazard:(int)arg6 ;
-(void)addInteractionTagsToEnrichment:(id)arg0 inEntity:(id)arg1 interaction:(id)arg2 ;
-(void)dealloc;
-(void)dissectInteraction:(id)arg0 entity:(id)arg1 context:(id)arg2 ;
-(void)dissectMailMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;
-(void)dissectTextMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;
-(void)dissectURL:(id)arg0 title:(id)arg1 htmlPayload:(id)arg2 entity:(id)arg3 ;


@end


#endif