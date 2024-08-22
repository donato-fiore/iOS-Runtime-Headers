// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGCOLORTINTEFFECT_H
#define PXGCOLORTINTEFFECT_H

@class UIColor;


#import "PXGEffect.h"
#import "PXGShader.h"
#import "PXGUniform.h"

@interface PXGColorTintEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_tintColorUniform;
}


@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(id)initWithEntityManager:(id)arg0 ;
-(id)shader;


@end


#endif