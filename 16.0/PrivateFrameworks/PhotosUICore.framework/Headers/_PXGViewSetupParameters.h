// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXGVIEWSETUPPARAMETERS_H
#define _PXGVIEWSETUPPARAMETERS_H

@protocol PXGSpriteTexture;

#import <Foundation/Foundation.h>


@interface _PXGViewSetupParameters : NSObject

@property (nonatomic) BOOL needsParenting; // ivar: _needsParenting
@property (nonatomic) unsigned int spriteIndex; // ivar: _spriteIndex
@property (retain, nonatomic) NSObject<PXGSpriteTexture> *texture; // ivar: _texture
@property (nonatomic) ? textureInfo; // ivar: _textureInfo




@end


#endif