// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGCOMBINEDEFFECT_H
#define PXGCOMBINEDEFFECT_H

@class NSArray;


#import "PXGEffect.h"
#import "PXGShader.h"

@interface PXGCombinedEffect : PXGEffect {
    PXGShader *_combinedShader;
}


@property (readonly, nonatomic) NSArray *effects; // ivar: _effects


+(id)combinedShaderSourceForEffects:(id)arg0 ;
-(id)description;
-(id)initWithEffects:(id)arg0 ;
-(id)initWithEntityManager:(id)arg0 ;
-(id)shader;


@end


#endif