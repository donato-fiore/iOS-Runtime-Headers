// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NURENDERPIPELINEREGISTRY_H
#define NURENDERPIPELINEREGISTRY_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NURenderPipelineRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_registry;
}




+(id)sharedRegistry;
-(id)_renderPipelineForIdentifier:(id)arg0 ;
-(id)description;
-(id)init;
-(id)renderPipelineForIdentifier:(id)arg0 ;
-(void)_registerRenderPipeline:(id)arg0 forIdentifier:(id)arg1 ;
-(void)registerRenderPipeline:(id)arg0 forIdentifier:(id)arg1 ;


@end


#endif