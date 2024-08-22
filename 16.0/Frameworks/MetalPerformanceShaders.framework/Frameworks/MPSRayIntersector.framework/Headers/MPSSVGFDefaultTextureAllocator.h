// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSSVGFDEFAULTTEXTUREALLOCATOR_H
#define MPSSVGFDEFAULTTEXTUREALLOCATOR_H

@class NSMutableArray, NSString;
@protocol MPSSVGFTextureAllocator, MTLDevice;

#import <Foundation/Foundation.h>


@interface MPSSVGFDefaultTextureAllocator : NSObject <MPSSVGFTextureAllocator>

 {
    NSMutableArray *_textures;
}


@property (readonly, nonatomic) NSUInteger allocatedTextureCount; // ivar: _allocatedTextureCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDevice:(id)arg0 ;
-(id)textureWithPixelFormat:(NSUInteger)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)reset;
-(void)returnTexture:(id)arg0 ;


@end


#endif