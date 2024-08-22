// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGEFFECT_H
#define PXGEFFECT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXGEntityManager.h"
#import "PXGKernel.h"
#import "PXGShader.h"

@interface PXGEffect : NSObject {
    unsigned int _effectId;
    BOOL _didNotifyOfUse;
}


@property (nonatomic) CGFloat drawingScale; // ivar: _drawingScale
@property (readonly, nonatomic) unsigned int effectId;
@property (readonly, weak, nonatomic) PXGEntityManager *entityManager; // ivar: _entityManager
@property (readonly, nonatomic) PXGKernel *kernel;
@property (nonatomic) NSUInteger numberOfSiblingSprites; // ivar: _numberOfSiblingSprites
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) PXGShader *shader;


+(id)shaderSourceForFilename:(id)arg0 ;
-(id)createSiblingsTextureForMainSpriteTexture:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithEntityManager:(id)arg0 ;
-(void)configureSiblingSprites:(struct ? )arg0 siblingsSpriteIndexRange:(struct _PXGSpriteIndexRange )arg1 siblingsTexture:(id)arg2 forMainRenderSpriteRef:(struct ? )arg3 mainPresentationSpriteRef:(struct ? )arg4 mainSpriteIndex:(unsigned int)arg5 mainSpriteTexture:(id)arg6 screenScale:(CGFloat)arg7 ;
-(void)dealloc;


@end


#endif