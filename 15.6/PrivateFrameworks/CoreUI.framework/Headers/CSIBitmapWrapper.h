// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSIBITMAPWRAPPER_H
#define CSIBITMAPWRAPPER_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface CSIBitmapWrapper : NSObject {
    *CGContext _bitmapContext;
    NSData *_pixelData;
    unsigned int _width;
    unsigned int _height;
    NSUInteger _rowbytes;
    BOOL _allowsCompactCompression;
    *CGImage _sourceImage;
    *CGImage _destImage;
    NSInteger _texturePixelFormat;
    unsigned int _imageAlpha;
}


@property BOOL allowsCompactCompression;
@property BOOL allowsDeepmap2ImageCompression; // ivar: _allowsDeepmap2ImageCompression
@property BOOL allowsDeepmapImageCompression; // ivar: _allowsDeepmapImageCompression
@property BOOL allowsHevcCompression; // ivar: _allowsHevcCompression
@property BOOL allowsMultiPassEncoding; // ivar: _allowsMultiPassEncoding
@property BOOL allowsOptimalRowbytesPacking; // ivar: _allowsOptimalRowbytesPacking
@property BOOL allowsPaletteImageCompression; // ivar: _allowsPaletteImageCompression
@property (nonatomic) NSUInteger colorSpaceID; // ivar: _colorSpaceID
@property (nonatomic) CGFloat compressionQuality; // ivar: _compressionQuality
@property NSInteger compressionType; // ivar: _compressionType
@property (nonatomic) int exifOrientation; // ivar: _exifOrientation
@property (nonatomic) BOOL flipped; // ivar: _flipped
@property (nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned int pixelFormat; // ivar: _pixelFormat
@property NSInteger targetPlatform; // ivar: _targetPlatform
@property (nonatomic) NSInteger textureInterpretation; // ivar: _textureInterpretation


-(NSUInteger)rowbytes;
-(id)compressedData:(BOOL)arg0 usedEncoding:(*int)arg1 andRowChunkSize:(*unsigned int)arg2 ;
-(id)initWithCGImage:(struct CGImage *)arg0 width:(unsigned int)arg1 height:(unsigned int)arg2 texturePixelFormat:(NSInteger)arg3 ;
-(id)initWithPixelWidth:(unsigned int)arg0 pixelHeight:(unsigned int)arg1 ;
-(id)pixelData;
-(struct CGContext *)bitmapContext;
-(unsigned int)height;
-(unsigned int)sourceAlphaInfo;
-(unsigned int)width;
-(void)dealloc;
-(void)setPixelData:(id)arg0 ;
-(void)setSourceAlphaInfo:(unsigned int)arg0 ;


@end


#endif