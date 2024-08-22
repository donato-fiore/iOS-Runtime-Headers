// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGMETALTEXTURECACHE_H
#define PXGMETALTEXTURECACHE_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXGMetalRenderContext.h"

@interface PXGMetalTextureCache : NSObject {
    NSMutableArray *_entries;
    NSUInteger _capacity;
    CGFloat _ageLimit;
    NSUInteger _sizeLimit;
    NSUInteger _peakCount;
    NSUInteger _peakMemory;
    NSObject<OS_dispatch_queue> *_queue;
}


@property CGFloat ageLimit;
@property NSUInteger capacity;
@property (readonly) NSUInteger count;
@property (readonly, nonatomic) PXGMetalRenderContext *metalRenderContext; // ivar: _metalRenderContext
@property (readonly) NSUInteger peakMemorySize;
@property (readonly) NSUInteger peakTextureCount;
@property NSUInteger sizeLimit;


-(id)_description;
-(id)description;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)textureWithSize:(struct CGSize )arg0 pixelFormat:(NSUInteger)arg1 ;
-(void)_enforceLimits;
-(void)_purgeOldestTexture;
-(void)recycleTexture:(id)arg0 ;


@end


#endif