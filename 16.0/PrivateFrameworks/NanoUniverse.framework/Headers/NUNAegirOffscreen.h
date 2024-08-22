// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUNAEGIROFFSCREEN_H
#define NUNAEGIROFFSCREEN_H

@class MTLRenderPassDescriptor;
@protocol MTLTexture;

#import <Foundation/Foundation.h>


@interface NUNAegirOffscreen : NSObject

@property (nonatomic) int height; // ivar: _height
@property (retain, nonatomic) MTLRenderPassDescriptor *renderPassDescriptor; // ivar: _renderPassDescriptor
@property (retain, nonatomic) NSObject<MTLTexture> *texture0;
@property (retain, nonatomic) NSObject<MTLTexture> *texture1;
@property (nonatomic) int width; // ivar: _width


-(id)initWithDevice:(id)arg0 width:(int)arg1 height:(int)arg2 pixelFormat0:(NSUInteger)arg3 pixelFormat1:(NSUInteger)arg4 mipmaps:(BOOL)arg5 loadAction:(NSUInteger)arg6 clearColor0:(struct ? )arg7 clearColor1:(struct ? )arg8 ;
-(id)initWithDevice:(id)arg0 width:(int)arg1 height:(int)arg2 texture0:(id)arg3 texture1:(id)arg4 loadAction:(NSUInteger)arg5 clearColor0:(struct ? )arg6 clearColor1:(struct ? )arg7 ;


@end


#endif