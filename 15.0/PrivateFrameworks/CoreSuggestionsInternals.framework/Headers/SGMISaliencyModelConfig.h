// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMISALIENCYMODELCONFIG_H
#define SGMISALIENCYMODELCONFIG_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface SGMISaliencyModelConfig : NSObject

@property (readonly) NSArray *bailOutRules; // ivar: _bailOutRules
@property (readonly) NSArray *featureNames; // ivar: _featureNames
@property (readonly) NSArray *groundTruthEstimatorFeatures; // ivar: _groundTruthEstimatorFeatures
@property (readonly) NSArray *groundTruthEstimatorRules; // ivar: _groundTruthEstimatorRules
@property (readonly) NSArray *mean; // ivar: _mean
@property (readonly) NSArray *saliencyOverrideRules; // ivar: _saliencyOverrideRules
@property (readonly) NSArray *std; // ivar: _std
@property (readonly) NSNumber *threshold; // ivar: _threshold


+(id)defaultConfig;
+(id)groundTruthVersion;
+(id)inferenceVersion;
+(id)rulesFromFeatures:(id)arg0 lowerBounds:(id)arg1 upperBounds:(id)arg2 ;
-(id)init;
-(id)initWithSaliencyOverrideRules:(id)arg0 bailOutRules:(id)arg1 featureNames:(id)arg2 mean:(id)arg3 std:(id)arg4 groundTruthEstimatorRules:(id)arg5 threshold:(id)arg6 ;


@end


#endif