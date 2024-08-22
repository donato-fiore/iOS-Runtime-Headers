// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CUITHEMEPIXELRENDITION_H
#define _CUITHEMEPIXELRENDITION_H

@class NSMutableArray;


#import "CUIThemeRendition.h"
#import "CUIRenditionMetrics.h"
#import "CUIRenditionSliceInformation.h"
#import "_CSIRenditionBlockData.h"

@interface _CUIThemePixelRendition : CUIThemeRendition {
    unsigned int _nimages;
    ? _image;
    *CGImage _unslicedImage;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
    _CSIRenditionBlockData *_cachedBlockDataBGRX;
    _CSIRenditionBlockData *_cachedBlockDataRGBX;
    _CSIRenditionBlockData *_cachedBlockDataGray;
    NSUInteger _sourceRowbytes;
    NSMutableArray *_layers;
    CGSize _unslicedSize;
}




-(BOOL)edgesOnly;
-(BOOL)isScaled;
-(BOOL)isTiled;
-(NSUInteger)sourceRowbytes;
-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)copySharedBlockDataWithPixelFormat:(int)arg0 ;
-(id)imageForSliceIndex:(NSInteger)arg0 ;
-(id)initWithCSIData:(id)arg0 forKey:(struct _renditionkeytoken *)arg1 ;
-(id)layerReferences;
-(id)maskForSliceIndex:(NSInteger)arg0 ;
-(id)metrics;
-(id)sliceInformation;
-(int)pixelFormat;
-(struct CGImage *)unslicedImage;
-(struct CGSize )unslicedSize;
-(void)dealloc;
-(void)setSharedBlockData:(id)arg0 ;


@end


#endif