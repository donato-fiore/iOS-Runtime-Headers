// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKUIMETALRESOURCEPOOL_H
#define CLKUIMETALRESOURCEPOOL_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CLKUIMetalResourcePool : NSObject {
    NSObject<OS_dispatch_queue> *_buffersQueue;
    NSMutableArray *_resourcePool;
    NSUInteger _expectedCountPerFrame;
    id *_creationBlock;
}




+(id)bufferPoolWithLength:(NSUInteger)arg0 andOptions:(NSUInteger)arg1 expectedCountPerFrame:(NSUInteger)arg2 ;
+(id)texturePoolWithDescriptor:(id)arg0 expectedCountPerFrame:(NSUInteger)arg1 ;
-(id)dequeueReusableResource;
-(id)dequeueReusableResourceForUseOnCommandBuffer:(id)arg0 ;
// -(id)initWithCreationBlock:(id)arg0 expectedCountPerFrame:(unk)arg1  ;
-(void)returnReusableResource:(id)arg0 ;


@end


#endif