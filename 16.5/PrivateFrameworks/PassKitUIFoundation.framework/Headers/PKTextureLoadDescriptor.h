// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTEXTURELOADDESCRIPTOR_H
#define PKTEXTURELOADDESCRIPTOR_H

@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface PKTextureLoadDescriptor : NSObject {
    NSUInteger _storageMode;
}


@property (readonly, nonatomic) *CGColorSpace colorSpace; // ivar: _colorSpace
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (nonatomic) BOOL premultiplyAlpha; // ivar: _premultiplyAlpha
@property (readonly, nonatomic) int renderingIntent; // ivar: _renderingIntent


-(id)createLoaderForCGImage:(struct CGImage *)arg0 ;
-(id)init;
-(id)initForDevice:(id)arg0 ;
-(void)dealloc;


@end


#endif