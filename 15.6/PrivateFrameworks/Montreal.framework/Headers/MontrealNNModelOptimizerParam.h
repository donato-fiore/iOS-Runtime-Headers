// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MONTREALNNMODELOPTIMIZERPARAM_H
#define MONTREALNNMODELOPTIMIZERPARAM_H

@class NSString, NSNumber;
@protocol MontrealNNDescriptionProtocol;


#import "MontrealNNDescription.h"

@interface MontrealNNModelOptimizerParam : MontrealNNDescription <MontrealNNDescriptionProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSNumber *gradientClipMax; // ivar: _gradientClipMax
@property (readonly) NSNumber *gradientClipMin; // ivar: _gradientClipMin
@property (readonly) NSUInteger hash;
@property (readonly) float learningRate; // ivar: _learningRate
@property (readonly) float momentum; // ivar: _momentum
@property (readonly) NSUInteger optimizerType; // ivar: _optimizerType
@property (readonly) Class superclass;


-(id)initWithDictionary:(id)arg0 ;
-(id)initWithOptimizerType:(NSUInteger)arg0 learningRate:(float)arg1 momentum:(float)arg2 gradientClipMin:(id)arg3 gradientClipMax:(id)arg4 ;
-(void)description:(id)arg0 indent:(id)arg1 ;


@end


#endif