// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKTEXTURECACHE_H
#define SKTEXTURECACHE_H


#import <Foundation/Foundation.h>


@interface SKTextureCache : NSObject {
    _opaque_pthread_mutex_t lock;
}


@property (nonatomic) shared_ptr<jet_texture> backingTexture; // ivar: _backingTexture
@property (nonatomic) NSInteger filteringMode; // ivar: filteringMode
@property (nonatomic) BOOL hasAlpha; // ivar: hasAlpha
@property (nonatomic) BOOL isPOT; // ivar: isPOT
@property (readonly, nonatomic, getter=getLock) *_opaque_pthread_mutex_t lock;
@property (nonatomic) char * pixelData; // ivar: pixelData
@property (nonatomic) CGSize pixelSize; // ivar: pixelSize
@property (nonatomic) CGSize size; // ivar: size
@property (nonatomic) int state; // ivar: state
@property (nonatomic) unsigned int textureFormat; // ivar: _textureFormat
@property (nonatomic) int wrapMode; // ivar: wrapMode


-(id)init;
-(void)_reset;
-(void)dealloc;


@end


#endif