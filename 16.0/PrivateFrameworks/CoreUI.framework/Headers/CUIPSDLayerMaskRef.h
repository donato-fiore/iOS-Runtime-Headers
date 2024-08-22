// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIPSDLAYERMASKREF_H
#define CUIPSDLAYERMASKREF_H


#import <Foundation/Foundation.h>

#import "CUIPSDLayerRef.h"

@interface CUIPSDLayerMaskRef : NSObject {
    CUIPSDLayerRef *_layerRef;
    BOOL _isVectorMask;
}




-(BOOL)isEnabled;
-(BOOL)isInvertedWhenBlending;
-(BOOL)isLinked;
-(id)initLayerMaskWithLayerRef:(id)arg0 ;
-(id)initVectorMaskWithLayerRef:(id)arg0 ;
-(id)layerRef;
-(struct CGImage *)createCGImageMask;
-(struct CGPath *)newBezierPath;
-(struct CGPath *)newBezierPathAtScale:(CGFloat)arg0 ;
-(struct CGRect )bounds;
-(void)dealloc;


@end


#endif