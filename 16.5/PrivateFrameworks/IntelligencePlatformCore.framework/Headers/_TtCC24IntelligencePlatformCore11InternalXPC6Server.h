// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC24INTELLIGENCEPLATFORMCORE11INTERNALXPC6SERVER_H
#define _TTCC24INTELLIGENCEPLATFORMCORE11INTERNALXPC6SERVER_H

@protocol GDInternalXPCProtocol;

#import <Foundation/Foundation.h>


@interface _TtCC24IntelligencePlatformCore11InternalXPC6Server : NSObject <GDInternalXPCProtocol>





-(?)behaviorUnderstandingEvaluateForBehaviorType:(?)arg0 modelName:(?)arg1 useTrialcompletion;
-(?)resolveEntityWithRequest:(?)arg0 enableSessionLogging:(?)arg1 configName:(?)arg2 encodedConfigcompletion;
-(?)vectorSearchBenchmarkWithConfigFilePathcompletion;
-(?)viewClearAllDataWithNamecompletion;
-(?)viewRunUpdateWithNamecompletion;
-(?)viewSetEnabledWithName:(?)arg0 enabledcompletion;
-(id)init;
-(void)behaviorUnderstandingClearAllDataWithShouldClearFeaturizer:(BOOL)arg0 shouldClearSampleGenerator:(BOOL)arg1 completion:(id)arg2 ;
-(void)behaviorUnderstandingDigestWithShouldDigestFeaturizer:(BOOL)arg0 shouldDigestSampleGenerator:(BOOL)arg1 completion:(id)arg2 ;
-(void)behaviorUnderstandingFeaturizeBehaviorOfType:(id)arg0 identifier:(id)arg1 usingContextAt:(id)arg2 completion:(id)arg3 ;
-(void)behaviorUnderstandingFeaturizedBehaviorsForFeatureName:(id)arg0 behaviorType:(id)arg1 completion:(id)arg2 ;
-(void)behaviorUnderstandingHistogramsOfKind:(id)arg0 behaviorType:(id)arg1 completion:(id)arg2 ;
-(void)behaviorUnderstandingRecentBehaviorsOfType:(id)arg0 completion:(id)arg1 ;
-(void)behaviorUnderstandingSampleEntityTaggingFeaturesForPersonID:(id)arg0 completion:(id)arg1 ;
-(void)behaviorUnderstandingStatusWithCompletion:(id)arg0 ;
-(void)behaviorUnderstandingTriggerEntityTaggingDataCollectionWithCompletion:(id)arg0 ;
-(void)benchmarkWithCompletion:(id)arg0 ;
-(void)photosMetadataWithStartDate:(id)arg0 endDate:(id)arg1 maxEvents:(NSInteger)arg2 newestFirst:(BOOL)arg3 completion:(id)arg4 ;
-(void)statsWithCompletion:(id)arg0 ;
-(void)statusWithCompletion:(id)arg0 ;
-(void)triplesQueryWithQuery:(id)arg0 completion:(id)arg1 ;
-(void)validateGraphWithCompletion:(id)arg0 ;
-(void)viewInfoWithCompletion:(id)arg0 ;
-(void)viewMarkNeedsUpdateWithSchedule:(id)arg0 completion:(id)arg1 ;
-(void)viewValidateWithCompletion:(id)arg0 ;


@end


#endif