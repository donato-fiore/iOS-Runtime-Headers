// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATILOGISTICSREGRESSIONMODEL_H
#define CATILOGISTICSREGRESSIONMODEL_H


#import <Foundation/Foundation.h>


@interface CATILogisticsRegressionModel : NSObject



-(id)getBestIntent:(struct vector<float, std::allocator<float>> )arg0 numberOfModels:(NSUInteger)arg1 weightMatrix:(*void)arg2 guids:(id)arg3 usoEdgeKey:(id)arg4 ;


@end


#endif