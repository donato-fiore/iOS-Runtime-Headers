// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIDOWNSAMPLER_H
#define SIDOWNSAMPLER_H

@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface SIDownsampler : NSObject {
    int _scaleFactor;
    id<MTLComputePipelineState> *_pipelineState;
}




-(id)initWithFactory:(id)arg0 scaleFactor:(int)arg1 ;
-(void)encodeToCommandBuffer:(id)arg0 input:(id)arg1 output:(id)arg2 ;


@end


#endif