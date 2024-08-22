// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXBLENDINGLAYERHYPERPARAMETERS_H
#define ATXBLENDINGLAYERHYPERPARAMETERS_H

@class NSDictionary, NSString;
@protocol ATXUniversalBlendingLayerHyperParametersProtocol;

#import <Foundation/Foundation.h>


@interface ATXBlendingLayerHyperParameters : NSObject <ATXUniversalBlendingLayerHyperParametersProtocol>

 {
    NSDictionary *_parameters;
    NSDictionary *_clientModelsToConsiderForConsumerSubType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)abHelperWithMobileAssets;
+(id)abHelperWithTrialAssets;
+(id)sharedInstance;
-(BOOL)isSuggestionEligibleForAppPredictionPanel:(id)arg0 ;
-(BOOL)isSuggestionEligibleForSuggestionsWidget:(id)arg0 ;
-(BOOL)uiConfidenceLevelMetBySuggestion:(id)arg0 ;
-(BOOL)uiIsEnabledForSuggestion:(id)arg0 consumerSubType:(unsigned char)arg1 ;
-(BOOL)uiSupportsClientModelIdForSuggestion:(id)arg0 consumerSubType:(unsigned char)arg1 ;
-(BOOL)uiSupportsExecutableTypeForSuggestion:(id)arg0 consumerSubType:(unsigned char)arg1 ;
-(BOOL)uiSupportsLayoutType:(NSInteger)arg0 consumerSubType:(unsigned char)arg1 ;
-(BOOL)uiSupportsSuggestion:(id)arg0 consumerSubType:(unsigned char)arg1 ;
-(CGFloat)maxAgeOfStackSuggestionToConsiderStaleInSeconds;
-(CGFloat)sessionLogSamplingRate;
-(NSInteger)minConfidenceCategoryToConsider;
-(NSUInteger)lohStacksToConsiderAboveAndBelowForDeduplication;
-(id)abGroup;
-(id)clientModelPriorityOrder;
-(id)clientModelsToConsiderForConsumerSubType;
-(id)clientModelsToConsiderForConsumerSubType:(unsigned char)arg0 ;
-(id)consumerSubTypesToConsiderForClientModelIds:(id)arg0 ;
-(id)executableTypesToConsiderForConsumerSubType:(unsigned char)arg0 ;
-(id)init;
-(id)initForTestingWithMobileAssetAssetsOnly;
-(id)initForTestingWithTrialAssetsOnly;
-(id)layoutsToConsiderForConsumerSubType:(unsigned char)arg0 ;


@end


#endif