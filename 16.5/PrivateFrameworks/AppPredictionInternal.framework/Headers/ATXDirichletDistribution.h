// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDIRICHLETDISTRIBUTION_H
#define ATXDIRICHLETDISTRIBUTION_H


#import <Foundation/Foundation.h>


@interface ATXDirichletDistribution : NSObject {
    CGFloat kGlobalScoreMultiplier;
    CGFloat kBlendedScoreNormalizationConstant;
}




+(CGFloat)getGammaDistributionShapeParameterForComputingGlobalAppScoresWithAlpha:(CGFloat)arg0 andNormalizationConstant:(CGFloat)arg1 ;
+(id)sharedInstance;
-(id)getBlendedLocalAndGlobalScoresWithLocalCounts:(id)arg0 andGlobalScores:(id)arg1 withSamplingEnabled:(BOOL)arg2 ;
-(id)init;
-(id)sampleProbabilitiesFromDirichletWithNormalizedParameters:(id)arg0 andNormalizationConstant:(CGFloat)arg1 ;


@end


#endif