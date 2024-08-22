// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNNBINARYARITHMETICNODE_H
#define MPSNNBINARYARITHMETICNODE_H



#import "MPSNNFilterNode.h"

@interface MPSNNBinaryArithmeticNode : MPSNNFilterNode

@property (nonatomic) float bias; // ivar: _bias
@property (nonatomic) float maximumValue; // ivar: _maximumValue
@property (nonatomic) float minimumValue; // ivar: _minimumValue
@property (nonatomic) float primaryScale; // ivar: _primaryScale
@property (nonatomic) NSUInteger primaryStrideInFeatureChannels; // ivar: _primaryStrideInFeatureChannels
@property (nonatomic) NSUInteger primaryStrideInPixelsX; // ivar: _primaryStrideInPixelsX
@property (nonatomic) NSUInteger primaryStrideInPixelsY; // ivar: _primaryStrideInPixelsY
@property (nonatomic) float secondaryScale; // ivar: _secondaryScale
@property (nonatomic) NSUInteger secondaryStrideInFeatureChannels; // ivar: _secondaryStrideInFeatureChannels
@property (nonatomic) NSUInteger secondaryStrideInPixelsX; // ivar: _secondaryStrideInPixelsX
@property (nonatomic) NSUInteger secondaryStrideInPixelsY; // ivar: _secondaryStrideInPixelsY


+(id)nodeWithLeftSource:(id)arg0 rightSource:(id)arg1 ;
+(id)nodeWithSources:(id)arg0 ;
-(Class)gradientClass;
-(id)gradientFilterWithSources:(id)arg0 ;
-(id)gradientFiltersWithSources:(id)arg0 ;
-(id)initWithLeftSource:(id)arg0 rightSource:(id)arg1 ;
-(id)initWithSources:(id)arg0 ;


@end


#endif