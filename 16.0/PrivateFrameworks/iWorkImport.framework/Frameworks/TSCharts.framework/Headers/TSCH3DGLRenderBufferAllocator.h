// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DGLRENDERBUFFERALLOCATOR_H
#define TSCH3DGLRENDERBUFFERALLOCATOR_H

@class NSString;
@protocol TSCH3DRenderBufferAllocator;

#import <Foundation/Foundation.h>

#import "TSCH3DRenderBufferStorage.h"

@interface TSCH3DGLRenderBufferAllocator : NSObject <TSCH3DRenderBufferAllocator>

 {
    TSCH3DRenderBufferStorage *_storage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isTexturable;
@property (readonly) Class superclass;


+(id)allocator;
+(id)allocatorWithStorage:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)bufferWithAllocatorInfo:(id)arg0 internalFormat:(unsigned int)arg1 attachment:(unsigned int)arg2 ;
-(id)colorbufferWithAllocatorInfo:(id)arg0 ;
-(id)depthbufferWithAllocatorInfo:(id)arg0 ;
-(id)initWithStorage:(id)arg0 ;


@end


#endif