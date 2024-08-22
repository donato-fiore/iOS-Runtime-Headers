// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIPSDLAYERBASEREF_H
#define CUIPSDLAYERBASEREF_H


#import <Foundation/Foundation.h>

#import "CUIPSDImageRef.h"

@interface CUIPSDLayerBaseRef : NSObject

@property (readonly) int blendMode;
@property (readonly) CGRect bounds;
@property (readonly) CGFloat fillOpacity;
@property (readonly) BOOL hasLayerMask;
@property (readonly) BOOL hasVectorMask;
@property (retain, nonatomic) CUIPSDImageRef *imageRef; // ivar: _imageRef
@property (nonatomic) unsigned int layerIndex; // ivar: _layerIndex
@property (readonly) CGFloat opacity;
@property (readonly) BOOL visibility;


-(*void)_psdLayerRecord;
-(BOOL)isLayerGroup;
-(id)_psdImageRef;
-(id)layerMaskRef;
-(id)name;
-(id)vectorMaskRef;
-(struct CGImage *)_createMaskFromAlphaChannel:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif