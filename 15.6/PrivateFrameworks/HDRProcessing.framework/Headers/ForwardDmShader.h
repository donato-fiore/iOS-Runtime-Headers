// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FORWARDDMSHADER_H
#define FORWARDDMSHADER_H

@class NSString;
@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface ForwardDmShader : NSObject {
    NSString *_computeKernelName;
    id<MTLComputePipelineState> *_computePipeline;
}




-(id)getComputePipeLineStateForDevice:(id)arg0 Library:(id)arg1 ;
-(id)getComputePipeLineStateForDevice:(id)arg0 Library:(id)arg1 Constants:(*BOOL)arg2 ConstantNumber:(unsigned int)arg3 ;
-(id)initShaderWithName:(id)arg0 ;


@end


#endif