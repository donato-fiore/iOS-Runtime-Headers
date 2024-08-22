// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GLKTEXTURE_H
#define GLKTEXTURE_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface GLKTexture : NSObject {
    *CGImageBlockSet _blockSet;
    *__CFData _cfData;
    int _unpackAlignment;
    BOOL _requestIssuedForAlphaPremultiplication;
    BOOL _requestIssuedToReorientToGL;
    BOOL _requestIssuedToInterpretGrayAsAlpha;
    BOOL _requestIssuedForSRGB;
    unsigned int _primarySurfaceLength;
}


@property (nonatomic) unsigned int GLTextureName; // ivar: _GLTextureName
@property (nonatomic) unsigned int bindTarget; // ivar: _bindTarget
@property (nonatomic) unsigned int bitsPerPixel; // ivar: _bitsPerPixel
@property (nonatomic) int dataCategory; // ivar: _dataCategory
@property (nonatomic) unsigned int format; // ivar: _format
@property (nonatomic) BOOL hasAlpha; // ivar: _hasAlpha
@property (readonly) BOOL hasPremultipliedAlpha; // ivar: _hasPremultipliedAlpha
@property (nonatomic) unsigned int height; // ivar: _height
@property (readonly) NSData *imageData; // ivar: _imageData
@property (nonatomic) unsigned int index; // ivar: _index
@property (nonatomic) unsigned int internalFormat; // ivar: _internalFormat
@property (nonatomic) BOOL isCubeMap; // ivar: _isCubeMap
@property (nonatomic) BOOL isMipmapped; // ivar: _isMipmapped
@property (nonatomic) BOOL isPowerOfTwo; // ivar: _isPowerOfTwo
@property (nonatomic) BOOL isVerticalFlipped; // ivar: _isVerticalFlipped
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) int loadMode; // ivar: _loadMode
@property (nonatomic) unsigned int nComponents; // ivar: _nComponents
@property (nonatomic) unsigned int nPrimarySurfaces; // ivar: _nPrimarySurfaces
@property (nonatomic) unsigned int nSurfaces; // ivar: _nSurfaces
@property (nonatomic) unsigned int numMipMapLevels; // ivar: _numMipMapLevels
@property (nonatomic) unsigned int orientation; // ivar: _orientation
@property (nonatomic) BOOL reOrient; // ivar: _reOrient
@property (readonly) BOOL requestIssuedForMipmapGeneration; // ivar: _requestIssuedForMipmapGeneration
@property (nonatomic) unsigned int rowBytes; // ivar: _rowBytes
@property (nonatomic) int texelFormat; // ivar: _texelFormat
@property (nonatomic) unsigned int textureTarget; // ivar: _textureTarget
@property (nonatomic) unsigned int type; // ivar: _type
@property (nonatomic) unsigned int width; // ivar: _width


-(*void)alignmentFix:(unsigned int)arg0 data:(*void)arg1 ;
-(BOOL)_uploadToGLTexture:(unsigned int)arg0 data:(id)arg1 width:(int)arg2 height:(int)arg3 dataCategory:(int)arg4 cubeMapIndex:(int)arg5 mipMapIndex:(int)arg6 error:(*id)arg7 ;
-(BOOL)canHonorSRGBrequest;
-(BOOL)decodeCGImage:(struct CGImage *)arg0 ;
-(BOOL)decodeCGImageDataProvider:(struct CGImage *)arg0 ;
-(BOOL)decodeCGImageImageProvider:(struct CGImage *)arg0 CGImageProvider:(struct CGImageProvider *)arg1 ;
-(BOOL)determineCGImageBlockFormatWithComponentType:(int)arg0 andPixelSize:(NSUInteger)arg1 andColorModel:(int)arg2 ;
-(BOOL)determinePVRFormat:(unsigned int)arg0 ;
-(BOOL)loadCGImage:(struct CGImage *)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)loadPVRTCData:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadWithData:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)premultiplyWithAlpha:(*void)arg0 source:(*void)arg1 withWidth:(unsigned int)arg2 withHeight:(unsigned int)arg3 withRowBytes:(unsigned int)arg4 error:(*id)arg5 ;
-(BOOL)reorientToGL:(*void)arg0 source:(*void)arg1 withWidth:(unsigned int)arg2 withHeight:(unsigned int)arg3 withRowBytes:(unsigned int)arg4 error:(*id)arg5 ;
-(BOOL)shouldApplyPremultiplication;
-(BOOL)shouldApplyReorientToGL;
-(BOOL)uploadToGLTexture:(unsigned int)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithCGImage:(struct CGImage *)arg0 forceCubeMap:(BOOL)arg1 wasCubeMap:(*BOOL)arg2 cubeMapIndex:(int)arg3 options:(id)arg4 error:(*id)arg5 ;
-(id)initWithData:(id)arg0 forceCubeMap:(BOOL)arg1 wasCubeMap:(*BOOL)arg2 cubeMapIndex:(int)arg3 options:(id)arg4 error:(*id)arg5 ;
-(id)initWithDecodedData:(id)arg0 width:(unsigned int)arg1 height:(unsigned int)arg2 rowBytes:(unsigned int)arg3 texture:(id)arg4 cubeMapIndex:(int)arg5 options:(id)arg6 error:(*id)arg7 ;
-(void)dealloc;
-(void)updateRequestedOperationsFromOptions:(id)arg0 ;


@end


#endif