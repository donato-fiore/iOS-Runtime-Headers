// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CUITHEMESVGRENDITION_H
#define _CUITHEMESVGRENDITION_H

@class NSData, NSArray;
@protocol NSLocking;


#import "CUIThemeRendition.h"

@interface _CUIThemeSVGRendition : CUIThemeRendition <NSLocking>

 {
    *CGSVGDocument _svgDocument;
    NSData *_fileData;
    unsigned int _standardPointSize;
    NSArray *_vectorSizes;
    CGFloat _baseline;
    CGFloat _capline;
    ? _alignmentRectInsets;
    BOOL _isAlignmentRect;
    CGSize _canvasSize;
    float _templateVersion;
    BOOL _isInterpolatable;
    NSInteger _renderingMode;
    short _containsMulticolorLayers;
    short _containsHierarchicalLayers;
    os_unfair_lock_s _lock;
}




-(BOOL)isInterpolatable;
-(CGFloat)vectorGlyphBaseline;
-(CGFloat)vectorGlyphCapLine;
-(CGFloat)vectorGlyphReferencePointSize;
-(NSInteger)vectorGlyphRenderingMode;
-(float)vectorGlyphTemplateVersion;
-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)initWithCSIData:(id)arg0 forKey:(struct _renditionkeytoken *)arg1 ;
-(id)metrics;
-(id)rawData;
-(id)vectorGlyphAvailableSizes;
-(int)pixelFormat;
-(short)containsHierarchicalLayers;
-(short)containsMulticolorLayers;
-(struct ? )vectorGlyphAlignmentRectInsets;
-(struct CGSVGDocument *)svgDocument;
-(struct CGSize )canvasSize;
-(void)_initalizeMetadataFromCSIData:(struct _csiheader *)arg0 ;
-(void)dealloc;
-(void)lock;
-(void)unlock;


@end


#endif