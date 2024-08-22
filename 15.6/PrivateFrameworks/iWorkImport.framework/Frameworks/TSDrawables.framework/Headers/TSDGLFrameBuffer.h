// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDGLFRAMEBUFFER_H
#define TSDGLFRAMEBUFFER_H

@class NSArray, NSDictionary, NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface TSDGLFrameBuffer : NSObject {
    NSArray *_textureConfigs;
    NSDictionary *_namesToTextureDict;
    NSMutableArray *_currentTextureLookupInfoByAttachment;
    NSMutableArray *_desiredTextureLookupInfoByAttachment;
    NSArray *_textureConfigsByAttachment;
    NSArray *_textureLookupInfosByAttachment;
    NSInteger _currentBindingOption;
    unsigned int _currentDrawBuffers;
    int _currentDrawBufferCount;
    unsigned int _currentReadBuffer;
    BOOL _isUsingNonDefaultAttachments;
}


@property (readonly, nonatomic) unsigned int currentGLTexture;
@property (readonly, nonatomic) NSString *currentGLTextureName;
@property (readonly, nonatomic) unsigned int framebuffer; // ivar: _framebuffer
@property (readonly, nonatomic) BOOL isBound; // ivar: _isBound
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL shouldDeleteTexturesOnTeardown; // ivar: _shouldDeleteTexturesOnTeardown
@property (readonly, nonatomic) CGSize size; // ivar: _frameBufferSize


+(int)currentGLFramebuffer;
+(int)currentGLFramebufferWithBindingOption:(NSInteger)arg0 ;
+(void)setCurrentGLFramebuffer:(int)arg0 ;
+(void)setCurrentGLFramebuffer:(int)arg0 withBindingOption:(NSInteger)arg1 ;
-(BOOL)p_isCurrentDrawBuffersEqualToDrawbuffers:(*unsigned int)arg0 count:(NSInteger)arg1 ;
-(NSInteger)currentTextureIndexAtAttachment:(unsigned int)arg0 ;
-(id)description;
-(id)initWithSize:(struct CGSize )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 textureConfigs:(id)arg1 ;
-(id)initWithSize:(struct CGSize )arg0 textureCount:(NSUInteger)arg1 ;
-(id)p_currentTextureLookupInfoAtAttachment:(unsigned int)arg0 ;
-(struct CGSize )sizeOfGLTextureNamed:(id)arg0 ;
-(unsigned int)GLTextureAtIndex:(NSUInteger)arg0 ;
-(unsigned int)GLTextureAtIndex:(NSUInteger)arg0 attachment:(unsigned int)arg1 ;
-(unsigned int)GLTextureNamed:(id)arg0 ;
-(unsigned int)currentGLTextureAtAttachment:(unsigned int)arg0 ;
-(void)bindFramebuffer;
-(void)bindFramebufferWithBindingOption:(NSInteger)arg0 ;
-(void)dealloc;
-(void)p_setDrawBuffersAndReadBuffer;
-(void)setCurrentTextureIndex:(NSUInteger)arg0 ;
-(void)setCurrentTextureIndex:(NSUInteger)arg0 atAttachment:(unsigned int)arg1 ;
-(void)setCurrentTextureNamed:(id)arg0 ;
-(void)setCurrentTextureNamed:(id)arg0 atAttachment:(unsigned int)arg1 ;
-(void)setCurrentTextureToNextAtAttachment:(unsigned int)arg0 ;
-(void)setCurrentTexturesToNext;
-(void)setupFramebufferIfNecessary;
-(void)teardown;
-(void)unbindFramebufferAndBindGLFramebuffer:(int)arg0 ;
-(void)unbindFramebufferAndBindGLFramebuffer:(int)arg0 withBindingOption:(NSInteger)arg1 ;


@end


#endif