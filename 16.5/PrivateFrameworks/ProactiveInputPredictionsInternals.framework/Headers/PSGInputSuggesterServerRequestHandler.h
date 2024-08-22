// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGINPUTSUGGESTERSERVERREQUESTHANDLER_H
#define PSGINPUTSUGGESTERSERVERREQUESTHANDLER_H

@class _PASBundleIdResolver, NSString;
@protocol PSGInputSuggesterProtocol;

#import <Foundation/Foundation.h>

#import "PSGExperimentResolver.h"
#import "PSGInputSuggesterMetricsLogger.h"

@interface PSGInputSuggesterServerRequestHandler : NSObject <PSGInputSuggesterProtocol>

 {
    id<PSGInputSuggesterProtocol> *_clientProxy;
    PSGExperimentResolver *_experimentResolver;
    PSGInputSuggesterMetricsLogger *_metricsLogger;
}


@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver; // ivar: _bundleIdResolver
@property (copy, nonatomic) NSString *clientProcessName; // ivar: _clientProcessName


-(id)_getExperimentConfigForLogging:(id)arg0 ;
-(id)_mlStringsFromResponseItems:(id)arg0 ;
-(id)_quickResponsesConfigFromPSGInputSuggestionsRequest:(id)arg0 ;
-(id)_quickResponsesForResponseContext:(id)arg0 conversationTurns:(id)arg1 localeIdentifier:(id)arg2 maxResponses:(NSUInteger)arg3 recipients:(id)arg4 chunkPath:(id)arg5 plistPath:(id)arg6 espressoBinFilePath:(id)arg7 vocabFilePath:(id)arg8 ;
-(id)_quickTypeTriggerForContext:(id)arg0 localeIdentifier:(id)arg1 modelConfigPath:(id)arg2 espressoBinFilePath:(id)arg3 ;
-(id)_wordBoundaryResponseForRequest:(id)arg0 config:(id)arg1 ;
-(id)_zkwResponseForRequest:(id)arg0 config:(id)arg1 ;
-(id)init;
-(id)initWithExperimentResolver:(id)arg0 metricsLogger:(id)arg1 ;
-(void)_forwardFeedbackToPortraitWithResponseItems:(id)arg0 feedbackType:(unsigned int)arg1 ;
-(void)_forwardFeedbackToQuickResponsesPersonalizationWithResponseItems:(id)arg0 request:(id)arg1 isSelected:(BOOL)arg2 ;
-(void)_logRequest:(id)arg0 config:(id)arg1 ;
-(void)inputSuggestionsWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)logEngagement:(id)arg0 request:(id)arg1 position:(NSUInteger)arg2 ;
-(void)logErrorForRequest:(id)arg0 trigger:(id)arg1 errorType:(unsigned char)arg2 ;
-(void)logImpression:(id)arg0 request:(id)arg1 ;
-(void)logPrediction:(id)arg0 request:(id)arg1 latencyMillis:(CGFloat)arg2 ;
-(void)logSpeedMetricForLocaleIdentifier:(id)arg0 messageDurationMilliseconds:(int)arg1 messageLength:(int)arg2 messageWords:(int)arg3 ;
-(void)logTrigger:(id)arg0 request:(id)arg1 ;
-(void)setRemoteObjectProxy:(id)arg0 ;
-(void)warmUpWithCompletion:(id)arg0 ;


@end


#endif