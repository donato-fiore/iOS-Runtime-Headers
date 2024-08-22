// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRERESPONSESEXPERIMENT_H
#define PRERESPONSESEXPERIMENT_H

@class RKMessageResponseManager, _PASLRUCache;
@protocol PREExperimentResolverProtocol, PREResponsesMetricsProtocol, PREResponsesProtocol;

#import <Foundation/Foundation.h>

#import "PREResponsesGeneratedEvent.h"

@interface PREResponsesExperiment : NSObject {
    NSObject<PREExperimentResolverProtocol> *_experimentResolver;
    NSObject<PREResponsesMetricsProtocol> *_metrics;
    NSObject<PREResponsesProtocol> *_xpcClient;
    RKMessageResponseManager *_rkClient;
    _PASLRUCache *_responsesGeneratedCache;
    PREResponsesGeneratedEvent *_cachedResponsesGeneratedEvent;
}


@property (nonatomic) BOOL registerDisplayed; // ivar: _registerDisplayed


+(id)_getFormattedPREResponseItems:(id)arg0 options:(NSUInteger)arg1 ;
+(id)sharedManager;
-(BOOL)isStringEmpty:(id)arg0 ;
-(BOOL)shouldUseDefaultRKTreatment;
-(BOOL)shouldUseDefaultRKTreatmentForLanguage:(id)arg0 ;
-(id)activeExperimentNameForLanguage:(id)arg0 ;
-(id)cacheKeyForMessage:(id)arg0 maxResponses:(NSUInteger)arg1 time:(id)arg2 language:(id)arg3 ;
-(id)clippedMessageIfNecessary:(id)arg0 ;
-(id)handlesFromRecipients:(id)arg0 ;
-(id)init;
-(id)initWithExperimentResolver:(id)arg0 metricsClient:(id)arg1 xpcClient:(id)arg2 rkClient:(id)arg3 ;
-(id)inputMethodStringFrom:(int)arg0 ;
-(id)responsesCache;
-(id)responsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 forConversationHistory:(id)arg2 forContext:(id)arg3 time:(id)arg4 withLanguage:(id)arg5 recipientHandles:(id)arg6 options:(NSUInteger)arg7 ;
-(id)responsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 forConversationHistory:(id)arg2 forContext:(id)arg3 time:(id)arg4 withLanguage:(id)arg5 recipients:(id)arg6 options:(NSUInteger)arg7 ;
-(id)stringArrayFromConversationTurns:(id)arg0 ;
-(id)stringArrayFromPreResponseItems:(id)arg0 ;
-(id)waitForPreResponseItemsForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 forConversationHistory:(id)arg2 forContext:(id)arg3 time:(id)arg4 withLanguage:(id)arg5 recipientHandles:(id)arg6 options:(NSUInteger)arg7 ;
-(int)preInputMethodFrom:(id)arg0 ;
-(void)preResponseItemsForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 forConversationHistory:(id)arg2 forContext:(id)arg3 time:(id)arg4 withLanguage:(id)arg5 recipientHandles:(id)arg6 options:(NSUInteger)arg7 completionBlock:(id)arg8 ;
-(void)primeResponsesExperimentsIfNeeded;
-(void)registerGenerationWithPreResponseItems:(id)arg0 language:(id)arg1 isCached:(BOOL)arg2 responseTimePerf:(NSUInteger)arg3 promptMessage:(id)arg4 generationStatus:(int)arg5 ;
-(void)registerResponse:(id)arg0 forMessage:(id)arg1 time:(id)arg2 metadata:(id)arg3 withLanguage:(id)arg4 ;
-(void)registerResponseDisplayedAtIndex:(id)arg0 ;
-(void)responsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 forConversationHistory:(id)arg2 forContext:(id)arg3 time:(id)arg4 withLanguage:(id)arg5 recipientHandles:(id)arg6 options:(NSUInteger)arg7 completionBlock:(id)arg8 ;
-(void)responsesForMessage:(id)arg0 maximumResponses:(NSUInteger)arg1 forConversationHistory:(id)arg2 forContext:(id)arg3 time:(id)arg4 withLanguage:(id)arg5 recipients:(id)arg6 options:(NSUInteger)arg7 completionBlock:(id)arg8 ;


@end


#endif