// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FEATUREEXTRACTOR_H
#define FEATUREEXTRACTOR_H



#import "EspressoModel.h"

@interface FeatureExtractor : EspressoModel

@property (nonatomic) BOOL baseStage; // ivar: _baseStage
@property (readonly, nonatomic) int numLevels; // ivar: _numLevels
@property NSUInteger outputChannels; // ivar: _outputChannels


-(BOOL)extractFeaturesFromImage:(struct __CVBuffer *)arg0 toFeatures:(struct ? *)arg1 callback:(id)arg2 ;
-(id)initWithMode:(NSInteger)arg0 ;
-(void)getOutputTensorSize:(struct ? *)arg0 level:(unsigned int)arg1 ;


@end


#endif