// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUNIRENDERER_H
#define NUNIRENDERER_H


#import <Foundation/Foundation.h>


@interface NUNIRenderer : NSObject

@property (readonly, nonatomic) NSUInteger pixelFormat; // ivar: _pixelFormat
@property (readonly, nonatomic) NSUInteger rendererStyle; // ivar: _rendererStyle


+(id)sharedInstanceWithPixelFormat:(NSUInteger)arg0 textureSuffix:(id)arg1 rendererStyle:(NSUInteger)arg2 ;
+(void)_deallocInstanceWithPixelFormat:(NSUInteger)arg0 rendererStyle:(NSUInteger)arg1 ;
-(id)initWithPixelFormat:(NSUInteger)arg0 textureSuffix:(id)arg1 rendererStyle:(NSUInteger)arg2 ;
-(void)_asyncDeallocInstance;
-(void)dealloc;
-(void)discard;
-(void)purgeUnusedWithScene:(id)arg0 ;
-(void)renderOffscreenWithScene:(id)arg0 viewport:(struct NUNIViewport )arg1 commandBuffer:(id)arg2 ;
-(void)renderWithScene:(id)arg0 viewport:(struct NUNIViewport )arg1 commandBuffer:(id)arg2 passDescriptor:(id)arg3 ;
-(void)renderWithScene:(id)arg0 viewport:(struct NUNIViewport )arg1 renderEncoder:(id)arg2 ;


@end


#endif