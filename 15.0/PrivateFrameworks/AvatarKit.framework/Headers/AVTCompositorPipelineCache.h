// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTCOMPOSITORPIPELINECACHE_H
#define AVTCOMPOSITORPIPELINECACHE_H

@class NSMutableDictionary;
@protocol MTLLibrary;

#import <Foundation/Foundation.h>


@interface AVTCompositorPipelineCache : NSObject {
    id<MTLLibrary> *_library;
    NSMutableDictionary *_pipelines;
}




+(id)pipelineForPropertyName:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)pipelineForPropertyName:(id)arg0 ;


@end


#endif