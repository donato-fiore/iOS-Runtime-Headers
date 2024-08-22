// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARDEPTHBASEDPERSONDETECTIONRESULT_H
#define ARDEPTHBASEDPERSONDETECTIONRESULT_H



#import "ARPersonDetectionResult.h"

@interface ARDepthBasedPersonDetectionResult : ARPersonDetectionResult {
    float _sumDepthValues;
    NSInteger _numberDepthPixels;
    float _sumDepthValuesWithHighConfidence;
    NSInteger _numberDepthPixelsWithHighConfidence;
}


@property (nonatomic) CGFloat initialBoundingBoxAvg; // ivar: _initialBoundingBoxAvg
@property (readonly, nonatomic) NSUInteger numberOfSamples;


-(float)meanValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBoundingBox:(struct CGRect )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addSampleValue:(float)arg0 ;
-(void)addSampleValueWithHighConfidence:(float)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif