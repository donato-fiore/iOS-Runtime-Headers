// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLGPUDEBUGPIPELINESTATEINFOENCODER_H
#define MTLGPUDEBUGPIPELINESTATEINFOENCODER_H

@protocol MTLArgumentEncoder;

#import <Foundation/Foundation.h>


@interface MTLGPUDebugPipelineStateInfoEncoder : NSObject {
    id<MTLArgumentEncoder> *_argumentEncoder;
}


@property (readonly, nonatomic) NSUInteger encodedLength;


-(id)initWithDevice:(id)arg0 ;
-(void)dealloc;
-(void)setArgumentBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)setComputePipelineState:(id)arg0 ;
-(void)setRenderPipelineState:(id)arg0 ;


@end


#endif