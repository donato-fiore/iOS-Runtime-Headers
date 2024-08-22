// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DPIXELBUFFER_H
#define TSCH3DPIXELBUFFER_H


#import <Foundation/Foundation.h>


@interface TSCH3DPixelBuffer : NSObject

@property (readonly, nonatomic) box<glm::detail::tvec2<int>> bounds;
@property (readonly, nonatomic) char * buffer;
@property (readonly, nonatomic) NSUInteger components; // ivar: _components
@property (readonly, nonatomic) *CGContext context; // ivar: _bitmapContext
@property (readonly, nonatomic) tvec2<int> size; // ivar: _size


+(id)pixelBufferFromFramebuffer:(id)arg0 processor:(id)arg1 session:(id)arg2 sourceRegion:(*void)arg3 components:(NSUInteger)arg4 flipped:(BOOL)arg5 ;
+(id)pixelBufferWithSize:(*void)arg0 components:(NSUInteger)arg1 ;
-(*void)data;
-(BOOL)copyPixelsFromFramebuffer:(id)arg0 processor:(id)arg1 session:(id)arg2 sourceRegion:(*void)arg3 targetRegion:(*void)arg4 flipped:(BOOL)arg5 ;
-(id)TSUImage;
-(id)initWithSize:(*void)arg0 components:(NSUInteger)arg1 ;
-(void)copyPixelsFromData:(*void)arg0 ;
-(void)copyPixelsFromSourceBuffer:(id)arg0 sourceRegion:(*void)arg1 targetRegion:(*void)arg2 flipped:(BOOL)arg3 ;
-(void)dealloc;
-(void)flip;


@end


#endif