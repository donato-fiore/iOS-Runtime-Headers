// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKIMAGE_H
#define VKIMAGE_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "VKResourceManager.h"

@interface VKImage : NSObject {
    *CGImage _imageRef;
    NSData *_data;
    NSString *_name;
    *void _gglTexture;
    shared_ptr<md::TextureAtlasRegion> _textureAtlasRegion;
    Box<float, 2> _textureCoordinates;
    CGRect _collisionRect;
    CGPoint _anchorPoint;
    CGPoint _labelingPoint;
    CGSize _size;
    CGFloat _scale;
    BOOL _hasCollisionRect;
    BOOL _hasAnchorPoint;
    BOOL _hasLabelingPoint;
    BOOL _usedAsTextureAndImage;
    atomic<bool> _isTextureReady;
    atomic<bool> _isImageReady;
    VKResourceManager *_resourceManager;
    unsigned char _imageHash;
}




-(*void)gglTexture;
-(*void)textureCoordinates;
-(CGFloat)scale;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 ;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 usedAsTextureAndImage:(BOOL)arg2 ;
-(id)initWithData:(id)arg0 scale:(CGFloat)arg1 ;
-(id)initWithData:(id)arg0 scale:(CGFloat)arg1 usedAsTextureAndImage:(BOOL)arg2 ;
-(id)initWithName:(id)arg0 scale:(CGFloat)arg1 resourceManager:(id)arg2 ;
-(int)compareTo:(id)arg0 ;
-(struct CGImage *)image;
-(struct CGPoint )anchorPoint;
-(struct CGPoint )labelingPoint;
-(struct CGRect )collisionRect;
-(struct CGSize )size;
-(void)_prepareImage;
-(void)_prepareTextureWithAtlas:(struct TextureAtlas *)arg0 ;
-(void)dealloc;
-(void)prepareTextureWithAtlas:(struct TextureAtlas *)arg0 ;
-(void)setAnchorPoint:(struct CGPoint )arg0 ;
-(void)setCollisionRect:(struct CGRect )arg0 ;
-(void)setLabelingPoint:(struct CGPoint )arg0 ;


@end


#endif