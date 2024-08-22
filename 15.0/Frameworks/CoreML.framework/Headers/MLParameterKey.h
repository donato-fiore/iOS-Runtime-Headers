// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLPARAMETERKEY_H
#define MLPARAMETERKEY_H



#import "MLKey.h"

@interface MLParameterKey : MLKey



+(id)beta1;
+(id)beta2;
+(id)biases;
+(id)epochs;
+(id)eps;
+(id)learningRate;
+(id)linkedModelFileName;
+(id)linkedModelSearchPath;
+(id)maxDepth;
+(id)minChildWeight;
+(id)miniBatchSize;
+(id)momentum;
+(id)numClasses;
+(id)numTrees;
+(id)numberOfNeighbors;
+(id)objective;
+(id)seed;
+(id)shuffle;
+(id)updateType;
+(id)weights;
-(id)deletingPrefixingScope:(id)arg0 ;
-(id)initWithKeyName:(id)arg0 ;
-(id)scopedTo:(id)arg0 ;


@end


#endif