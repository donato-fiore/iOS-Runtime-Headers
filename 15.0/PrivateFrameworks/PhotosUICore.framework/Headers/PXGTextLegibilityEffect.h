// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGTEXTLEGIBILITYEFFECT_H
#define PXGTEXTLEGIBILITYEFFECT_H

@class UIColor;


#import "PXGEffect.h"
#import "PXGShader.h"
#import "PXGUniform.h"

@interface PXGTextLegibilityEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_values;
}


@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(id)initWithEntityManager:(id)arg0 ;
-(id)shader;
-(void)_updateValues;


@end


#endif