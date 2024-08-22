// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLLOCALOUTLIERFACTOR_H
#define MLLOCALOUTLIERFACTOR_H

@protocol MLNearestNeighborsIndex;


#import "MLModel.h"
#import "MLParameterContainer.h"

@interface MLLocalOutlierFactor : MLModel {
    id<MLNearestNeighborsIndex> *_index;
    NSUInteger _numberOfDimensions;
    NSUInteger _numberOfNeighbors;
    vector<float, std::allocator<float>> _cachedKDistances;
    MLParameterContainer *_parameterContainer;
}




-(CGFloat)computeLOFForQueryPoint:(id)arg0 ;
-(CGFloat)localReachabilityDensityForIndex:(NSUInteger)arg0 ;
-(CGFloat)localReachabilityDensityForQeuryPoint:(*void)arg0 ;
-(CGFloat)localReachabilityDensityOfNeighbors:(*void)arg0 ;
-(float)kDistanceToIndex:(NSUInteger)arg0 ;
-(id)initWithKNearestNeighborsModelAtURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)inputMultiArray:(id)arg0 error:(*id)arg1 ;
-(id)parameterValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> )findNearestNeighborsToIndex:(NSUInteger)arg0 ;
-(struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> )findNearestNeighborsToQueryPoint:(*void)arg0 ;
-(void)updateToValidDistance:(*void)arg0 ;


@end


#endif