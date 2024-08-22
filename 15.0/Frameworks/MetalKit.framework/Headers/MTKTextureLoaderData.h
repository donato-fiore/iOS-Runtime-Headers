// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTKTEXTURELOADERDATA_H
#define MTKTEXTURELOADERDATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTKTextureLoaderData : NSObject

@property (nonatomic) NSUInteger depth; // ivar: _depth
@property (nonatomic) NSUInteger height; // ivar: _height
@property (retain, nonatomic) NSString *imageOrigin; // ivar: _imageOrigin
@property (nonatomic) NSUInteger numArrayElements; // ivar: _numArrayElements
@property (nonatomic) NSUInteger numFaces; // ivar: _numFaces
@property (nonatomic) NSUInteger numMipmapLevels; // ivar: _numMipmapLevels
@property (nonatomic) NSUInteger pixelFormat; // ivar: _pixelFormat
@property (nonatomic) NSUInteger textureType; // ivar: _textureType
@property (nonatomic) NSUInteger width; // ivar: _width


-(id)getDataForArrayElement:(NSUInteger)arg0 face:(NSUInteger)arg1 level:(NSUInteger)arg2 depthPlane:(NSUInteger)arg3 bytesPerRow:(*NSUInteger)arg4 bytesPerImage:(*NSUInteger)arg5 ;
-(id)init;
-(void)dealloc;


@end


#endif