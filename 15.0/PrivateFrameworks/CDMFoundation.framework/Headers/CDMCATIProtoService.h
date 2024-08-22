// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMCATIPROTOSERVICE_H
#define CDMCATIPROTOSERVICE_H

@class NSBundle, NSArray, NSString, NSDictionary, NSMutableArray;


#import "CDMDAGBaseService.h"
#import "CATIBloomFilter.h"

@interface CDMCATIProtoService : CDMDAGBaseService {
    NSBundle *_catiBundle;
    NSBundle *_modelBundle;
    NSBundle *_weightsBundle;
    NSArray *_enabledModels;
    NSArray *_positiveOverrides;
    NSString *_manifestPath;
    NSString *_posOverridesDirectoryPath;
    NSArray *_negativeOverrides;
    NSString *_negOverridesDirectoryPath;
    CATIBloomFilter *_positiveOverridesBloomFilter;
    NSDictionary *_positiveOverridesDictionary;
    float _threshold;
    unique_ptr<float [][193], std::default_delete<float [][193]>> _weightPtr;
    NSUInteger _num_models;
    NSMutableArray *_catIDs;
    int _algoType;
    NSString *_usoEntity;
    NSString *_usoVerb;
    NSString *_usoCATId;
}




+(id)assetFolderName;
+(id)trialFactorName;
-(BOOL)isEnabled;
-(BOOL)shouldSuppressDueTo:(id)arg0 ;
-(NSInteger)getServiceState;
-(id)buildCATIBloomFilterForPositiveRules:(id)arg0 ;
-(id)buildCATIResponse:(id)arg0 confidenceScore:(float)arg1 ;
-(id)checkExactMatchForUtterances:(id)arg0 ;
-(id)createEmptyParseDueToNotMeetingInternalThreshold;
-(id)createEmptyParseForUnsupportedUseCases;
-(id)getEnabledModels;
-(id)getEnabledUseCases:(id)arg0 directoryContents:(id)arg1 typeOfUseCase:(id)arg2 ;
-(id)getManifest:(id)arg0 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)runCATIModelInferenceWithWeights:(id)arg0 ;
-(id)setup:(id)arg0 ;
-(id)setupErrorResponse:(id)arg0 serviceState:(NSInteger)arg1 ;
-(void)constructWeightMatrixForInference:(id)arg0 ;


@end


#endif