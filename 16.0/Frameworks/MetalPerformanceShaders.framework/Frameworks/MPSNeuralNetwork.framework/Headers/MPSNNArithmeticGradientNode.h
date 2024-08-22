// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNNARITHMETICGRADIENTNODE_H
#define MPSNNARITHMETICGRADIENTNODE_H



#import "MPSNNGradientFilterNode.h"

@interface MPSNNArithmeticGradientNode : MPSNNGradientFilterNode

@property (nonatomic) float bias; // ivar: _bias
@property (readonly, nonatomic) BOOL isSecondarySourceFilter; // ivar: _isSecondarySourceFilter
@property (nonatomic) float maximumValue; // ivar: _maximumValue
@property (nonatomic) float minimumValue; // ivar: _minimumValue
@property (nonatomic) float primaryScale; // ivar: _primaryScale
@property (nonatomic) float secondaryScale; // ivar: _secondaryScale
@property (nonatomic) NSUInteger secondaryStrideInFeatureChannels; // ivar: _secondaryStrideInFeatureChannels
@property (nonatomic) NSUInteger secondaryStrideInPixelsX; // ivar: _secondaryStrideInPixelsX
@property (nonatomic) NSUInteger secondaryStrideInPixelsY; // ivar: _secondaryStrideInPixelsY


+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 isSecondarySourceFilter:(BOOL)arg3 ;
-(id)initWithGradientImages:(id)arg0 forwardFilter:(id)arg1 isSecondarySourceFilter:(BOOL)arg2 ;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 isSecondarySourceFilter:(BOOL)arg3 ;


@end


#endif