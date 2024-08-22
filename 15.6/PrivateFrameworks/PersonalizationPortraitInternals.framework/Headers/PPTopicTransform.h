// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTOPICTRANSFORM_H
#define PPTOPICTRANSFORM_H

@class NSData;

#import <Foundation/Foundation.h>


@interface PPTopicTransform : NSObject {
    NSData *_data;
    header_s _header;
    *float _bias;
    *unsigned int _qids;
    *unsigned int _matrixIndices;
    *float _matrixElts;
    char * _payloads;
    unsigned char _featureSmoothingType;
    unsigned char _featureScalingType;
    unsigned char _featureNormalizationType;
    unsigned char _outputScalingType;
    unsigned char _activationType;
    float _featureSmoothingFactor;
    float _featureScalingFactor;
    float _outputScalingFactor;
    float _attenuationFactor;
}


@property (readonly, nonatomic) NSUInteger outputTopicCount;
@property (readonly, nonatomic) float threshold; // ivar: _threshold


-(BOOL)containsMappedTopic:(id)arg0 ;
-(id)QIDWeightsWithMappedTopicIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 mappingId:(id)arg1 ;
-(id)payloadForTopic:(unsigned int)arg0 ;
-(void)addBias:(*float)arg0 ;
-(void)addWeightedTopicScoreToBuffer:(*float)arg0 countNonZeroComponentsInBuffer:(*unsigned short)arg1 qid:(unsigned int)arg2 score:(float)arg3 ;
-(void)addWeightedTopicScoreToBuffer:(*float)arg0 qid:(unsigned int)arg1 score:(float)arg2 ;
-(void)applyFeatureNormalization:(*float)arg0 vectorLength:(int)arg1 ;
-(void)applyFeatureScaling:(*float)arg0 vectorLength:(int)arg1 ;
-(void)applyFeatureSmoothing:(*float)arg0 vectorLength:(int)arg1 ;
-(void)applyOutputActivation:(*float)arg0 ;
-(void)applyOutputAttenuation:(*float)arg0 nonzeroCounts:(*unsigned short)arg1 ;
-(void)applyOutputScaling:(*float)arg0 vectorLength:(int)arg1 ;


@end


#endif