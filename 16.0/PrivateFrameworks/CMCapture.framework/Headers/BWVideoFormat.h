// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWVIDEOFORMAT_H
#define BWVIDEOFORMAT_H

@class NSDictionary;


#import "BWFormat.h"

@interface BWVideoFormat : BWFormat

@property (nonatomic) NSUInteger bytesPerRowAlignment; // ivar: _bytesPerRowAlignment
@property (nonatomic) unsigned int cacheMode; // ivar: _cacheMode
@property (readonly, nonatomic) int colorSpaceProperties; // ivar: _colorSpaceProperties
@property (nonatomic) NSUInteger extendedHeight; // ivar: _extendedHeight
@property (nonatomic) NSUInteger extendedWidth; // ivar: _extendedWidth
@property (nonatomic) NSUInteger height; // ivar: _height
@property (nonatomic) BOOL memoryPoolUseAllowed; // ivar: _memoryPoolUseAllowed
@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes; // ivar: _pixelBufferAttributes
@property (nonatomic) unsigned int pixelFormat; // ivar: _pixelFormat
@property (nonatomic) NSUInteger planeAlignment; // ivar: _planeAlignment
@property (nonatomic) BOOL prewireBuffers; // ivar: _prewireBuffers
@property (nonatomic) NSUInteger width; // ivar: _width


+(id)colorInfoWithSourceColorSpace:(int)arg0 sourcePixelFormat:(unsigned int)arg1 sourceDimensions:(struct ? )arg2 requestedPixelFormat:(unsigned int)arg3 ;
+(id)formatByResolvingRequirements:(id)arg0 ;
+(id)formatByResolvingRequirements:(id)arg0 printErrors:(BOOL)arg1 ;
+(id)pixelBufferAttachmentsForColorSpaceProperties:(int)arg0 ;
+(int)colorSpacePropertiesForPixelBufferAttachments:(id)arg0 ;
+(int)colorSpacePropertiesForSourceThatSupportsWideColor:(BOOL)arg0 sourceColorSpace:(int)arg1 sourcePixelFormat:(unsigned int)arg2 sourceDimensions:(struct ? )arg3 requestedPixelFormat:(unsigned int)arg4 ;
+(int)colorSpacePropertiesForSourceThatSupportsWideColor:(BOOL)arg0 sourceColorSpace:(int)arg1 sourcePixelFormat:(unsigned int)arg2 sourceDimensions:(struct ? )arg3 requestedPixelFormat:(unsigned int)arg4 supportedColorSpaces:(id)arg5 ;
+(int)colorSpacePropertiesWithSourceColorSpace:(int)arg0 sourcePixelFormat:(unsigned int)arg1 sourceDimensions:(struct ? )arg2 requestedPixelFormat:(unsigned int)arg3 ;
+(int)colorSpacePropertiesWithSourceColorSpace:(int)arg0 sourcePixelFormat:(unsigned int)arg1 sourceDimensions:(struct ? )arg2 requestedPixelFormat:(unsigned int)arg3 supportedColorSpaces:(id)arg4 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHLGColorSpace;
-(id)debugDescription;
-(id)description;
-(struct opaqueCMFormatDescription *)formatDescription;
-(unsigned int)mediaType;
-(void)dealloc;


@end


#endif