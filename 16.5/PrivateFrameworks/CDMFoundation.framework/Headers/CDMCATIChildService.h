// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMCATICHILDSERVICE_H
#define CDMCATICHILDSERVICE_H

@class NSBundle, NSString, NSArray, NSDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "CDMCATIManifest.h"
#import "CATIBloomFilter.h"
#import "_TtC13CDMFoundation23CDMCATISwiftBloomFilter.h"

@interface CDMCATIChildService : NSObject {
    NSInteger _embeddingDimensionCATI;
    NSInteger _embeddingDimensionCATIPlusOne;
    NSBundle *_catiAssetBundle;
    NSBundle *_modelBundle;
    NSString *_manifestPath;
    NSString *_posOverridesDirectoryPath;
    NSString *_weightsDirectoryPath;
    CDMCATIManifest *_catiManifest;
    CATIBloomFilter *_positiveOverridesInvocationBloomFilterLegacy;
    _TtC13CDMFoundation23CDMCATISwiftBloomFilter *_positiveOverridesInvocationBloomFilter;
    NSArray *_positiveOverridesInvocationIndividualBloomFilters;
    NSDictionary *_positiveOverridesDictionary;
    NSArray *_multiturnEnabledExactMatchIntents;
    float _confidenceThreshold;
    float _multiturnConfidenceThreshold;
    unique_ptr<float[], std::default_delete<float[]>> _weightPtr;
    unique_ptr<float[], std::default_delete<float[]>> _multiturnWeightPtr;
    NSUInteger _numModels;
    NSUInteger _numMultiturnModels;
    NSMutableArray *_invocationGUIDs;
    NSMutableArray *_multiturnGUIDs;
    int _algoType;
    NSString *_usoEntity;
    int _usoElementId;
    NSString *_usoVerb;
    NSString *_usoEdge;
    BOOL _multiturnEnabled;
    int _expectedPositiveUtterances;
    BOOL _invocationWeightsEnabled;
    BOOL _invocationOverridesEnabled;
    BOOL _multiturnWeightsEnabled;
    BOOL _isLegacyCATIOverrideSystem;
}




-(BOOL)getBloomFilterAt:(id)arg0 ;
-(BOOL)getInvocationOverridesEnabled;
-(BOOL)isMultiTurnEnabled;
-(BOOL)shouldSuppressCATIInvocationDueTo:(id)arg0 ;
-(NSUInteger)getSuppressionState;
-(id)buildCrisisSupportUserParse:(id)arg0 confidenceScore:(float)arg1 ;
-(id)buildLegacyBloomFilterAndExactMatchDictForInvocation:(id)arg0 ;
-(id)buildSocialConversationUserParse:(id)arg0 confidenceScore:(float)arg1 ;
-(id)buildUserParse:(id)arg0 confidenceScore:(float)arg1 ;
-(id)checkExactMatch:(id)arg0 ;
-(id)checkExactMatchForUtterances:(id)arg0 ;
-(id)checkExactMatchFromPossibleGuids:(id)arg0 forUtterance:(id)arg1 modelType:(NSUInteger)arg2 ;
-(id)createUserParse:(float)arg0 ;
-(id)getBloomFilter;
-(id)getIntentLookup;
-(id)getInvocationInferenceResults:(struct vector<float, std::allocator<float>> )arg0 ;
-(id)getManifest;
-(id)getManifestFromPath:(id)arg0 ;
-(id)getMultiturnInferenceResults:(struct vector<float, std::allocator<float>> )arg0 ;
-(id)getMultiturnIntentsFromSystemGaveOptions:(id)arg0 ;
-(id)getMultiturnIntentsFromSystemInformed:(id)arg0 ;
-(id)getNewBloomFilter;
-(id)getPosOverridesDirectoryPath;
-(id)getPositiveOverrideDictionary;
-(id)getProductAreaName;
-(id)getUsoEntity;
-(id)handle:(id)arg0 assetVersion:(NSInteger)arg1 ;
-(id)initWithAssetBundle:(id)arg0 ;
-(id)runCATIModelInferenceWithWeights:(id)arg0 ;
-(id)setup:(id)arg0 assetVersion:(NSInteger)arg1 ;
-(struct vector<float, std::allocator<float>> )getCATIEmbeddingTensor:(id)arg0 ;
-(void)buildMultiturnFeatures:(id)arg0 ;
-(void)constructWeightMatrixForInference:(id)arg0 numModels:(NSUInteger)arg1 guids:(id)arg2 modelType:(NSUInteger)arg3 ;
-(void)setConfidenceThreshold:(float)arg0 ;
-(void)setInvocationWeightsEnabled:(BOOL)arg0 ;
-(void)setMultiturnConfidenceThreshold:(float)arg0 ;
-(void)setMultiturnEnabled:(BOOL)arg0 ;
-(void)setMultiturnWeightsEnabled:(BOOL)arg0 ;
-(void)setPositiveOverridesDictionary:(id)arg0 ;
-(void)setUsoEdge:(id)arg0 ;
-(void)setUsoEntity:(id)arg0 ;
-(void)setUsoVerb:(id)arg0 ;


@end


#endif