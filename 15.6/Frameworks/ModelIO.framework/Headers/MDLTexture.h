// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDLTEXTURE_H
#define MDLTEXTURE_H

@class NSString;
@protocol MDLNamed;

#import <Foundation/Foundation.h>


@interface MDLTexture : NSObject <MDLNamed>

 {
    MDLTextureData _textureData;
    NSData" _topLeftOriginData;
    NSData" _bottomLeftOriginData;
    BOOL _selfCreating;
    BOOL _alphaValuesSet;
    BOOL _hasAlphaValues;
}


@property (readonly, nonatomic) NSUInteger channelCount;
@property (readonly, nonatomic) NSInteger channelEncoding; // ivar: _channelEncoding
@property ? dimensions;
@property (nonatomic) BOOL hasAlphaValues;
@property (nonatomic) BOOL isCube;
@property (readonly, nonatomic) NSUInteger mipLevelCount;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger rowStride;


+(id)_textureCubeWithSingleImageNamed:(id)arg0 bundle:(id)arg1 ;
+(id)irradianceTextureCubeWithTexture:(id)arg0 name:(id)arg1 dimensions;
+(id)irradianceTextureCubeWithTexture:(id)arg0 name:(id)arg1 dimensions:(float)arg2 roughness;
+(id)textureCubeWithImagesNamed:(id)arg0 ;
+(id)textureCubeWithImagesNamed:(id)arg0 bundle:(id)arg1 ;
+(id)textureFromResource:(id)arg0 ;
+(id)textureNamed:(id)arg0 ;
+(id)textureNamed:(id)arg0 bundle:(id)arg1 ;
+(id)textureWithURL:(id)arg0 ;
-(BOOL)writeToURL:(id)arg0 ;
-(BOOL)writeToURL:(id)arg0 level:(NSUInteger)arg1 ;
-(BOOL)writeToURL:(id)arg0 type:(struct __CFString *)arg1 ;
-(BOOL)writeToURL:(id)arg0 type:(struct __CFString *)arg1 level:(NSUInteger)arg2 ;
-(id)allocateDataAtLevel:(NSInteger)arg0 ;
-(id)generateDataAtLevel:(NSInteger)arg0 selector:(SEL)arg1 ;
-(id)initWithData:(id)arg0 topLeftOrigin:(BOOL)arg1 name:(id)arg2 dimensions:(NSInteger)arg3 rowStride:(NSUInteger)arg4 channelCount:(NSInteger)arg5 channelEncoding:(BOOL)arg6 isCube;
-(id)texelDataWithBottomLeftOriginAtMipLevel:(NSInteger)arg0 create:(BOOL)arg1 ;
-(id)texelDataWithTopLeftOrigin:(NSUInteger)arg0 ;
-(id)texelDataWithTopLeftOriginAtMipLevel:(NSInteger)arg0 create:(BOOL)arg1 ;
-(struct CGImage *)imageFromTextureAtLevel:(NSUInteger)arg0 ;
-(void)loadDataWithBottomLeftOriginAtMipLevel:(NSInteger)arg0 create:(BOOL)arg1 selector:(SEL)arg2 ;
-(void)loadDataWithTopLeftOriginAtMipLevel:(NSInteger)arg0 create:(BOOL)arg1 selector:(SEL)arg2 ;


@end


#endif