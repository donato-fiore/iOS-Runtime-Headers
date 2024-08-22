// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BCUCOVEREFFECTSBASE_H
#define _BCUCOVEREFFECTSBASE_H

@class NSString;
@protocol BCUBookCoverEffectsFilter, BCUImageFilter;

#import <Foundation/Foundation.h>

#import "_BCUCoverEffectsAssets.h"
#import "_BCUCoverEffectsShadow.h"
#import "BCULayerRenderer.h"

@interface _BCUCoverEffectsBase : NSObject <BCUBookCoverEffectsFilter, BCUImageFilter>

 {
    _BCUCoverEffectsAssets *_assets;
    _BCUCoverEffectsShadow *_shadow;
    _BCUCoverEffectsShadow *_seriesShadow;
    BOOL _shadowOnly;
    BOOL _restricted;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) BCULayerRenderer *renderer; // ivar: _renderer
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsOptions;


-(BOOL)includeBinding;
-(CGFloat)_assetsScale;
-(CGFloat)cornerRadius;
-(CGFloat)tintBlurRadius;
-(id)_coverLayerWithImage:(struct CGImage *)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
-(id)_layerWithImage:(struct CGImage *)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 shadow:(id)arg3 ;
-(id)_shadowLayerWithImage:(struct CGImage *)arg0 size:(struct CGSize )arg1 tint:(BOOL)arg2 shadow:(id)arg3 ;
-(id)coverLayerWithImage:(struct CGImage *)arg0 size:(struct CGSize )arg1 contentsScale:(CGFloat)arg2 ;
-(id)initWithIdentifier:(id)arg0 renderer:(id)arg1 assets:(id)arg2 shadow:(id)arg3 seriesShadow:(id)arg4 shadowOnly:(BOOL)arg5 ;
-(id)initWithIdentifier:(id)arg0 renderer:(id)arg1 assets:(id)arg2 shadow:(id)arg3 seriesShadow:(id)arg4 shadowOnly:(BOOL)arg5 restricted:(BOOL)arg6 ;
-(id)newOperationWithImage:(struct CGImage *)arg0 size:(struct CGSize )arg1 contentsScale:(CGFloat)arg2 priority:(float)arg3 options:(id)arg4 waitForCPUSynchronization:(BOOL)arg5 logKey:(id)arg6 completion:(id)arg7 ;
-(id)shadowLayerWithImage:(struct CGImage *)arg0 size:(struct CGSize )arg1 contentsScale:(CGFloat)arg2 kind:(NSUInteger)arg3 ;
-(struct UIEdgeInsets )insetsForSize:(struct CGSize )arg0 contentsScale:(CGFloat)arg1 options:(id)arg2 ;


@end


#endif