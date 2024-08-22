// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWVIDEODEPTHSAMPLEBUFFERPROPAGATOR_H
#define BWVIDEODEPTHSAMPLEBUFFERPROPAGATOR_H

@class NSString;
@protocol BWInferencePropagatable;


#import "BWInferenceSampleBufferPropagator.h"

@interface BWVideoDepthSampleBufferPropagator : BWInferenceSampleBufferPropagator <BWInferencePropagatable>



@property (readonly, nonatomic) BOOL allowsAsyncPropagation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithVideoRequirements:(id)arg0 cloneRequirements:(id)arg1 ;


@end


#endif