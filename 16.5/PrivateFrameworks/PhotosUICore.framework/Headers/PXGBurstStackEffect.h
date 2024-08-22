// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGBURSTSTACKEFFECT_H
#define PXGBURSTSTACKEFFECT_H



#import "PXGEffect.h"

@interface PXGBurstStackEffect : PXGEffect

@property (nonatomic) NSInteger numberOfItemsStackedBehind;


-(id)createSiblingsTextureForMainSpriteTexture:(id)arg0 ;
-(id)initWithEntityManager:(id)arg0 ;
-(id)shader;
-(void)configureSiblingSprites:(struct ? )arg0 siblingsSpriteIndexRange:(struct _PXGSpriteIndexRange )arg1 siblingsTexture:(id)arg2 forMainRenderSpriteRef:(struct ? )arg3 mainPresentationSpriteRef:(struct ? )arg4 mainSpriteIndex:(unsigned int)arg5 mainSpriteTexture:(id)arg6 screenScale:(CGFloat)arg7 ;


@end


#endif