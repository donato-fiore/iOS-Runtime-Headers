// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARIMAGESCALINGTECHNIQUE_H
#define ARIMAGESCALINGTECHNIQUE_H

@class NSMutableArray;


#import "ARTechnique.h"

@interface ARImageScalingTechnique : ARTechnique {
    NSMutableArray *_scalingPasses;
    CGSize _scalingInputSize;
    BOOL _shouldUseScaleFactor;
}


@property (nonatomic) unsigned int conversionPixelFormatType; // ivar: _conversionPixelFormatType
@property (readonly, nonatomic) unsigned char downscaleFactor; // ivar: _downscaleFactor
@property (readonly, nonatomic) CGSize scaledSize; // ivar: _scaledSize


+(id)scalingPassDescriptionForInputSize:(struct CGSize )arg0 scaledSize:(struct CGSize )arg1 conversionPixelFormat:(unsigned int)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)requiredSensorDataTypes;
-(id)initWithDownscaleFactor:(unsigned char)arg0 ;
-(id)initWithScaledSize:(struct CGSize )arg0 ;
-(id)processData:(id)arg0 ;
-(struct __CVBuffer *)_applyScalingPasses:(struct __CVBuffer *)arg0 ;
-(void)_createScalingPassesForInputSize:(struct CGSize )arg0 ;


@end


#endif