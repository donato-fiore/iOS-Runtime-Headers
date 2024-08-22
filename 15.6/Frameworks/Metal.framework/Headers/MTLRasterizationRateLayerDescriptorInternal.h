// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLRASTERIZATIONRATELAYERDESCRIPTORINTERNAL_H
#define MTLRASTERIZATIONRATELAYERDESCRIPTORINTERNAL_H



#import "MTLRasterizationRateLayerDescriptor.h"
#import "MTLRasterizationRateSampleArrayInternal.h"

@interface MTLRasterizationRateLayerDescriptorInternal : MTLRasterizationRateLayerDescriptor {
    *float _data;
    ? _size;
    ? _currentSampleCount;
    MTLRasterizationRateSampleArrayInternal *_horizontal;
    MTLRasterizationRateSampleArrayInternal *_vertical;
    BOOL _skipSampleValidationAndInterpolation;
}




-(*float)horizontalSampleStorage;
-(*float)verticalSampleStorage;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)horizontal;
-(id)init;
-(id)initWithSampleCount:(struct ? )arg0 ;
-(id)initWithSampleCount:(struct ? )arg0 horizontal:(*float)arg1 vertical:(*float)arg2 ;
-(id)vertical;
-(struct ? )maxSampleCount;
-(struct ? )sampleCount;
-(void)dealloc;
-(void)setSampleCount:(struct ? )arg0 ;


@end


#endif