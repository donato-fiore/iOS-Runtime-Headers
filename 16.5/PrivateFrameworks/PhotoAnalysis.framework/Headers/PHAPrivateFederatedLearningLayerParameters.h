// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHAPRIVATEFEDERATEDLEARNINGLAYERPARAMETERS_H
#define PHAPRIVATEFEDERATEDLEARNINGLAYERPARAMETERS_H

@class MAFloatVector;

#import <Foundation/Foundation.h>


@interface PHAPrivateFederatedLearningLayerParameters : NSObject

@property (retain, nonatomic) MAFloatVector *bias; // ivar: _bias
@property (retain, nonatomic) MAFloatVector *weights; // ivar: _weights


-(id)initWithWeights:(id)arg0 bias:(id)arg1 ;


@end


#endif