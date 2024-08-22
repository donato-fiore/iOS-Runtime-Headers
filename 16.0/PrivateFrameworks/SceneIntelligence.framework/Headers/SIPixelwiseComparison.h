// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIPIXELWISECOMPARISON_H
#define SIPIXELWISECOMPARISON_H

@class NSString;
@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface SIPixelwiseComparison : NSObject {
    id<MTLComputePipelineState> *_computePipeline;
    ? _threadGroupSize;
    NSString *_comparisonLabel;
}




-(id)initWithFactory:(id)arg0 comparisonOperator:(NSInteger)arg1 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 value:(float)arg2 destinationTexture:(id)arg3 ;


@end


#endif