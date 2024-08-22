// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTEXTURELOADER_H
#define PKTEXTURELOADER_H

@protocol MTLDevice, MTLBuffer;

#import <Foundation/Foundation.h>


@interface PKTextureLoader : NSObject {
    os_unfair_lock_s _lock;
    NSUInteger _storageMode;
    vImage_CGImageFormat _sourceFormat;
    *CGColorSpace _sourceColorSpace;
    vImage_CGImageFormat _destinationFormat;
    *CGColorSpace _destinationColorSpace;
    id<MTLDevice> *_device;
    *CGImage _image;
    *vImageConverter _converter;
    id<MTLBuffer> *_buffer;
    NSUInteger _width;
    NSUInteger _height;
    NSUInteger _bytesPerRow;
}


@property (readonly, nonatomic) NSUInteger format; // ivar: _format


-(id)init;
-(void)dealloc;
-(void)decode;
-(void)read:(id)arg0 ;


@end


#endif