// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGTEXTUREDATACOLORLOOKUPCUBE_H
#define PXGTEXTUREDATACOLORLOOKUPCUBE_H

@class NSData;
@protocol MTLDevice, MTLTexture;


#import "PXGColorLookupCube.h"

@interface PXGTextureDataColorLookupCube : PXGColorLookupCube {
    id<MTLDevice> *_device;
    id<MTLTexture> *_texture;
}


@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSUInteger pixelFormat; // ivar: _pixelFormat


-(BOOL)shouldCache;
-(id)center;
-(id)createTextureWithContext:(id)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 edgeSize:(NSInteger)arg1 pixelFormat:(NSUInteger)arg2 ;
-(id)textureData;


@end


#endif