// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BCUCOVEREFFECTSPDF_H
#define _BCUCOVEREFFECTSPDF_H

@class NSString;
@protocol BCUBookCoverEffectsFilter, BCUImageFilter;

#import <Foundation/Foundation.h>

#import "BCULayerRenderer.h"

@interface _BCUCoverEffectsPDF : NSObject <BCUBookCoverEffectsFilter, BCUImageFilter>

 {
    BCULayerRenderer *_renderer;
    BOOL _image;
    BOOL _shadow;
    BOOL _night;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsOptions;


-(id)_layerWithImage:(struct CGImage *)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 minificationFilter:(id)arg3 ;
-(id)coverLayerWithImage:(struct CGImage *)arg0 size:(struct CGSize )arg1 contentsScale:(CGFloat)arg2 ;
-(id)initWithIdentifier:(id)arg0 renderer:(id)arg1 image:(BOOL)arg2 shadow:(BOOL)arg3 night:(BOOL)arg4 ;
-(id)newOperationWithImage:(struct CGImage *)arg0 size:(struct CGSize )arg1 contentsScale:(CGFloat)arg2 priority:(float)arg3 options:(id)arg4 waitForCPUSynchronization:(BOOL)arg5 completion:(id)arg6 ;
-(id)shadowLayerWithImage:(struct CGImage *)arg0 size:(struct CGSize )arg1 contentsScale:(CGFloat)arg2 kind:(NSUInteger)arg3 ;
-(struct UIEdgeInsets )_roundedInsetsWithSize:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )insetsForSize:(struct CGSize )arg0 contentsScale:(CGFloat)arg1 options:(id)arg2 ;


@end


#endif