// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGMETALTEXTURECACHE_H
#define PXGMETALTEXTURECACHE_H

@class NSMutableArray;
@protocol OS_dispatch_queue, MTLDevice;

#import <Foundation/Foundation.h>


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
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly) NSUInteger peakMemorySize;
@property (readonly) NSUInteger peakTextureCount;
@property NSUInteger sizeLimit;


-(id)_description;
-(id)description;
-(id)init;
-(id)initWithDevice:(id)arg0 ;
-(id)textureWithSize:(struct CGSize )arg0 pixelFormat:(NSUInteger)arg1 ;
-(void)_enforceLimits;
-(void)_purgeOldestTexture;
-(void)recycleTexture:(id)arg0 ;


@end


#endif