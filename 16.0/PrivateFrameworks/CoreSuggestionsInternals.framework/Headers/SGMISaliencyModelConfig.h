// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMISALIENCYMODELCONFIG_H
#define SGMISALIENCYMODELCONFIG_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface SGMISaliencyModelConfig : NSObject

@property (readonly) NSArray *featureNames; // ivar: _featureNames
@property (readonly) NSArray *groundTruthEstimatorFeatures; // ivar: _groundTruthEstimatorFeatures
@property (readonly) NSArray *groundTruthEstimatorRules; // ivar: _groundTruthEstimatorRules
@property (readonly) NSArray *mean; // ivar: _mean
@property (readonly, nonatomic) NSUInteger minCountToConsiderATokenAsExtremelyDiscriminant; // ivar: _minCountToConsiderATokenAsExtremelyDiscriminant
@property (readonly, nonatomic) NSUInteger minCountToConsiderATokenAsHighlyDiscriminant; // ivar: _minCountToConsiderATokenAsHighlyDiscriminant
@property (readonly, nonatomic) CGFloat ratioToConsiderATokenAsExtremelyDiscriminant; // ivar: _ratioToConsiderATokenAsExtremelyDiscriminant
@property (readonly, nonatomic) CGFloat ratioToConsiderATokenAsHighlyDiscriminant; // ivar: _ratioToConsiderATokenAsHighlyDiscriminant
@property (readonly) NSArray *saliencyOverrideRules; // ivar: _saliencyOverrideRules
@property (readonly) NSArray *std; // ivar: _std
@property (readonly) NSNumber *threshold; // ivar: _threshold


+(id)defaultConfig;
+(id)groundTruthVersion;
+(id)inferenceVersion;
+(id)rulesFromFeatures:(id)arg0 lowerBounds:(id)arg1 upperBounds:(id)arg2 outputs:(id)arg3 ;
-(id)init;
-(id)initWithSaliencyOverrideRules:(id)arg0 featureNames:(id)arg1 mean:(id)arg2 std:(id)arg3 groundTruthEstimatorRules:(id)arg4 threshold:(id)arg5 minCountToConsiderATokenAsHighlyDiscriminant:(id)arg6 ratioToConsiderATokenAsHighlyDiscriminant:(id)arg7 minCountToConsiderATokenAsExtremelyDiscriminant:(id)arg8 ratioToConsiderATokenAsExtremelyDiscriminant:(id)arg9 ;


@end


#endif