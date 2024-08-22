// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIUPSAMPLER_H
#define SIUPSAMPLER_H

@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface SIUpsampler : NSObject {
    id<MTLComputePipelineState> *_pipelineState;
}




-(id)initWithFactory:(id)arg0 ;
-(void)encodeToCommandBuffer:(id)arg0 input:(id)arg1 output:(id)arg2 ;


@end


#endif