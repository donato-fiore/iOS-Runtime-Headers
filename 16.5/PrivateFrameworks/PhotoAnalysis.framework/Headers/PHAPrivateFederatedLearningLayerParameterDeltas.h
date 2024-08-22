// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHAPRIVATEFEDERATEDLEARNINGLAYERPARAMETERDELTAS_H
#define PHAPRIVATEFEDERATEDLEARNINGLAYERPARAMETERDELTAS_H

@class MAFloatVector;

#import <Foundation/Foundation.h>


@interface PHAPrivateFederatedLearningLayerParameterDeltas : NSObject

@property (retain, nonatomic) MAFloatVector *biasDeltas; // ivar: _biasDeltas
@property (retain, nonatomic) MAFloatVector *weightDeltas; // ivar: _weightDeltas


+(id)deltasFromLayerParameters:(id)arg0 toLayerParameters:(id)arg1 ;
-(id)initWithWeightDeltas:(id)arg0 biasDeltas:(id)arg1 ;


@end


#endif