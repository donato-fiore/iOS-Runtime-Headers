// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVTEXTURECONVERSIONESTIMATE_H
#define ASVTEXTURECONVERSIONESTIMATE_H



#import "ASVTextureDescription.h"

@interface ASVTextureConversionEstimate : ASVTextureDescription

@property (nonatomic) NSInteger converterType; // ivar: _converterType
@property (nonatomic) ? estimatedMemoryDelta; // ivar: _estimatedMemoryDelta
@property (readonly, nonatomic) NSUInteger weight;


+(NSUInteger)peakMemoryForConversionEstimates:(id)arg0 ;
+(id)conversionEstimatesFromTextureDescriptions:(id)arg0 toFitAvailableMemory:(NSUInteger)arg1 withConverters:(id)arg2 preferredMaxTextureSize:(*NSInteger)arg3 outcome;
+(id)conversionEstimatesSortedByPeakMemoryUsage:(id)arg0 ;
+(id)heaviestConversionEstimate:(id)arg0 withMinimumDestinationSize;
+(id)textureDescription:(id)arg0 downsampledToTryAndFitDestinationWithinSize;
-(NSUInteger)peakMemoryUsage;
-(id)debugDescription;
-(id)initWithTextureDescription:(id)arg0 converter:(id)arg1 ;
-(void)updateFromConverter:(id)arg0 ;


@end


#endif