// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DFRAMEBUFFERTRANSFORMPIPELINE_H
#define TSCH3DFRAMEBUFFERTRANSFORMPIPELINE_H

@protocol TSCH3DPipelineLinkable;


#import "TSCH3DLinkablePipeline.h"
#import "TSCH3DFramebuffer.h"

@interface TSCH3DFramebufferTransformPipeline : TSCH3DLinkablePipeline {
    TSCH3DFramebuffer *_input;
}


@property (retain, nonatomic) NSObject<TSCH3DPipelineLinkable> *source; // ivar: _source
@property (retain, nonatomic) TSCH3DFramebuffer *target; // ivar: _target


-(BOOL)prepareFramebuffer;
-(BOOL)run;
-(void)dealloc;
-(void)loadSource;


@end


#endif