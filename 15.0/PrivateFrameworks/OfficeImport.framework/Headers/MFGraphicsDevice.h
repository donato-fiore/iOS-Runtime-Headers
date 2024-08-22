// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFGRAPHICSDEVICE_H
#define MFGRAPHICSDEVICE_H

@class NSMutableArray, NSDictionary;
@protocol MFDeviceDriver;

#import <Foundation/Foundation.h>

#import "MFDeviceContext.h"
#import "MFObjectTable.h"

@interface MFGraphicsDevice : NSObject {
    MFDeviceContext *m_currentDC;
    NSMutableArray *m_DCStack;
    int m_gStateStackHeight;
    MFDeviceContext *m_firstClipDC;
    NSObject<MFDeviceDriver> *m_deviceDriver;
    MFObjectTable *m_objectTable;
    MFObjectTable *m_stockObjects;
    NSDictionary *m_colorMap;
    NSDictionary *m_fillMap;
}




-(NSUInteger)clippingStartDCIndex;
-(NSUInteger)currentDCIndex;
-(NSUInteger)firstClipDCIndex;
-(id)clipEverythingClippingPath;
-(id)clippingPathByCombiningClippingPath:(id)arg0 withClippingPath:(id)arg1 combineMode:(int)arg2 ;
-(id)clippingPathByCombiningEmptyClippingPathWithClippingPath:(id)arg0 combineMode:(int)arg1 ;
-(id)clippingPathByCombiningImplicitClippingPathWithClippingPath:(id)arg0 combineMode:(int)arg1 ;
-(id)createBitmap:(unsigned int)arg0 in_height:(unsigned int)arg1 in_planes:(unsigned int)arg2 in_bitsPerPixel:(unsigned int)arg3 in_bitmap:(char *)arg4 in_bitmapSize:(unsigned int)arg5 ;
-(id)createColorWithRGBBytes:(unsigned char)arg0 green:(unsigned char)arg1 blue:(unsigned char)arg2 flags:(unsigned char)arg3 ;
-(id)createDIBitmap:(char *)arg0 in_dibSize:(unsigned int)arg1 in_usage:(int)arg2 ;
-(id)createDIBitmap:(char *)arg0 in_headerSize:(unsigned int)arg1 in_bitmap:(char *)arg2 in_bitmapSize:(unsigned int)arg3 in_usage:(int)arg4 ;
-(id)currentCummulatedClippingPath;
-(id)getCurrentFont;
-(id)implicitClippingPath;
-(id)initWithCanvas:(struct CGRect )arg0 ;
-(id)normalizedClippingPathWithClippingPath:(id)arg0 ;
-(id)recolor:(id)arg0 fill:(BOOL)arg1 ;
-(id)recolor:(unsigned char)arg0 in_green:(unsigned char)arg1 in_blue:(unsigned char)arg2 fill:(BOOL)arg3 ;
-(int)abortPath;
-(int)alphaBlend:(int)arg0 in_yDest:(int)arg1 in_widthDest:(int)arg2 in_heightDest:(int)arg3 in_sourceImage:(id)arg4 in_xSrc:(int)arg5 in_ySrc:(int)arg6 in_widthSrc:(int)arg7 in_heightSrc:(int)arg8 in_sourceConstantOpacity:(unsigned char)arg9 in_useSourceAlphaChannel:(BOOL)arg10 in_xform:(struct CGAffineTransform *)arg11 in_colour:(unsigned int)arg12 ;
-(int)angleArc:(int)arg0 y:(int)arg1 radius:(unsigned int)arg2 startAngle:(CGFloat)arg3 sweepAngle:(CGFloat)arg4 ;
-(int)arc:(int)arg0 nTopRect:(int)arg1 nRightRect:(int)arg2 nBottomRect:(int)arg3 nXStartArc:(int)arg4 nYStartArc:(int)arg5 nXEndArc:(int)arg6 nYEndArc:(int)arg7 ;
-(int)arcTo:(int)arg0 nTopRect:(int)arg1 nRightRect:(int)arg2 nBottomRect:(int)arg3 nXStartArc:(int)arg4 nYStartArc:(int)arg5 nXEndArc:(int)arg6 nYEndArc:(int)arg7 ;
-(int)beginPath;
-(int)bezier:(int)arg0 y:(int)arg1 x2:(int)arg2 y2:(int)arg3 x3:(int)arg4 y3:(int)arg5 x4:(int)arg6 y4:(int)arg7 ;
-(int)bezierTo:(int)arg0 y:(int)arg1 x2:(int)arg2 y2:(int)arg3 x3:(int)arg4 y3:(int)arg5 ;
-(int)bitBlt:(int)arg0 in_yDest:(int)arg1 in_widthDest:(int)arg2 in_heightDest:(int)arg3 in_sourceImage:(id)arg4 in_xSrc:(int)arg5 in_ySrc:(int)arg6 in_rop:(unsigned int)arg7 in_xform:(struct CGAffineTransform *)arg8 in_colour:(unsigned int)arg9 ;
-(int)chord:(int)arg0 nTopRect:(int)arg1 nRightRect:(int)arg2 nBottomRect:(int)arg3 nXStartArc:(int)arg4 nYStartArc:(int)arg5 nXEndArc:(int)arg6 nYEndArc:(int)arg7 ;
-(int)closeCurrentPath:(BOOL)arg0 ;
-(int)comment:(id)arg0 ;
-(int)createBrush:(int)arg0 in_colour:(id)arg1 hatchstyle:(int)arg2 index:(unsigned int)arg3 ;
-(int)createFontIndirect:(int)arg0 lfWidth:(int)arg1 lfEscapement:(int)arg2 lfOrientation:(int)arg3 lfWeight:(int)arg4 lfItalic:(BOOL)arg5 lfUnderline:(BOOL)arg6 lfStrikeOut:(BOOL)arg7 lfCharSet:(int)arg8 lfOutPrecision:(int)arg9 lfClipPrecision:(unsigned char)arg10 lfQuality:(int)arg11 pitch:(int)arg12 family:(int)arg13 lfFaceName:(id)arg14 ;
-(int)createFontIndirectW:(int)arg0 lfWidth:(int)arg1 lfEscapement:(int)arg2 lfOrientation:(int)arg3 lfWeight:(int)arg4 lfItalic:(BOOL)arg5 lfUnderline:(BOOL)arg6 lfStrikeOut:(BOOL)arg7 lfCharSet:(int)arg8 lfOutPrecision:(int)arg9 lfClipPrecision:(unsigned char)arg10 lfQuality:(int)arg11 pitch:(int)arg12 family:(int)arg13 lfFaceName:(id)arg14 elfFullName:(id)arg15 elfStyle:(id)arg16 elfVersion:(unsigned int)arg17 elfStyleSize:(unsigned int)arg18 elfMatch:(unsigned int)arg19 elfVendorId:(unsigned int)arg20 elfCulture:(unsigned int)arg21 index:(unsigned int)arg22 ;
-(int)createPalette:(id)arg0 in_index:(unsigned int)arg1 ;
-(int)createPatternBrush:(id)arg0 index:(unsigned int)arg1 usePaletteForBilevel:(BOOL)arg2 ;
-(int)createPen:(int)arg0 width:(int)arg1 in_colour:(id)arg2 in_userStyleArray:(*CGFloat)arg3 index:(unsigned int)arg4 ;
-(int)createRegion:(id)arg0 ;
-(int)deleteObject:(int)arg0 ;
-(int)description:(id)arg0 ;
-(int)ellipse:(int)arg0 y1:(int)arg1 x2:(int)arg2 y2:(int)arg3 ;
-(int)endPath;
-(int)excludeClipRect:(struct CGRect )arg0 ;
-(int)extTextOut:(int)arg0 y:(int)arg1 in_text:(id)arg2 options:(int)arg3 left:(int)arg4 top:(int)arg5 right:(int)arg6 bottom:(int)arg7 spacingValues:(*int)arg8 numValues:(int)arg9 ;
-(int)extTextOutEncoded:(int)arg0 y:(int)arg1 in_data:(id)arg2 options:(int)arg3 left:(int)arg4 top:(int)arg5 right:(int)arg6 bottom:(int)arg7 spacingValues:(*int)arg8 numValues:(int)arg9 ;
-(int)fillRectangle:(int)arg0 y1:(int)arg1 x2:(int)arg2 y2:(int)arg3 ;
-(int)fillRgn:(unsigned int)arg0 in_brushID:(unsigned int)arg1 ;
-(int)fillRgnWithRects:(id)arg0 in_brushID:(unsigned int)arg1 ;
-(int)frameRegion:(unsigned int)arg0 in_brushID:(unsigned int)arg1 in_width:(int)arg2 in_height:(int)arg3 ;
-(int)frameRegionWithRects:(id)arg0 in_brushID:(unsigned int)arg1 in_width:(int)arg2 in_height:(int)arg3 ;
-(int)getStockObject:(unsigned int)arg0 ;
-(int)intersectClipRect:(struct CGRect )arg0 ;
-(int)invertRgn:(unsigned int)arg0 ;
-(int)invertRgnWithRects:(id)arg0 ;
-(int)lineTo:(CGFloat)arg0 y:(CGFloat)arg1 ;
-(int)maskBlt:(int)arg0 in_yDest:(int)arg1 in_widthDest:(int)arg2 in_heightDest:(int)arg3 in_sourceImage:(id)arg4 in_xSrc:(int)arg5 in_ySrc:(int)arg6 in_maskImage:(id)arg7 in_xMask:(int)arg8 in_yMask:(int)arg9 in_rop:(unsigned int)arg10 in_xform:(struct CGAffineTransform *)arg11 in_colour:(unsigned int)arg12 ;
-(int)modifyWorldTransform:(struct CGAffineTransform *)arg0 in_command:(int)arg1 ;
-(int)moveTo:(CGFloat)arg0 y:(CGFloat)arg1 ;
-(int)offsetClipRegionByX:(int)arg0 y:(int)arg1 ;
-(int)offsetViewportOrg:(int)arg0 in_y:(int)arg1 ;
-(int)offsetWindowOrg:(int)arg0 in_y:(int)arg1 ;
-(int)paintRgn:(unsigned int)arg0 ;
-(int)paintRgnWithRects:(id)arg0 ;
-(int)patBlt:(int)arg0 in_y:(int)arg1 in_width:(int)arg2 in_height:(int)arg3 in_rop:(unsigned int)arg4 ;
-(int)pie:(int)arg0 nTopRect:(int)arg1 nRightRect:(int)arg2 nBottomRect:(int)arg3 nXStartArc:(int)arg4 nYStartArc:(int)arg5 nXEndArc:(int)arg6 nYEndArc:(int)arg7 ;
-(int)plgBlt:(struct CGPoint *)arg0 in_sourceImage:(id)arg1 in_xSrc:(int)arg2 in_ySrc:(int)arg3 in_widthSrc:(int)arg4 in_heightSrc:(int)arg5 in_maskImage:(id)arg6 in_xMask:(int)arg7 in_yMask:(int)arg8 in_xform:(struct CGAffineTransform *)arg9 in_colour:(unsigned int)arg10 ;
-(int)polyPolygon:(struct CGPoint *)arg0 in_polyCounts:(*int)arg1 in_count:(int)arg2 ;
-(int)polyPolyline:(struct CGPoint *)arg0 in_polyCounts:(*int)arg1 in_count:(int)arg2 ;
-(int)polygon:(struct CGPoint *)arg0 in_count:(int)arg1 ;
-(int)polyline:(struct CGPoint *)arg0 in_count:(int)arg1 ;
-(int)realizePalette;
-(int)rectangle:(int)arg0 y1:(int)arg1 x2:(int)arg2 y2:(int)arg3 ;
-(int)removeClip;
-(int)resizePalette:(unsigned int)arg0 in_index:(unsigned int)arg1 ;
-(int)restoreDC;
-(int)restoreDC:(int)arg0 ;
-(int)roundRect:(int)arg0 top:(int)arg1 right:(int)arg2 bottom:(int)arg3 rx:(CGFloat)arg4 ry:(CGFloat)arg5 ;
-(int)saveDC;
-(int)scaleViewportExt:(int)arg0 in_xDenom:(int)arg1 in_yNum:(int)arg2 in_yDenom:(int)arg3 ;
-(int)scaleWindowExt:(int)arg0 in_xDenom:(int)arg1 in_yNum:(int)arg2 in_yDenom:(int)arg3 ;
-(int)selectClipPath:(int)arg0 ;
-(int)selectClipRegion:(id)arg0 combineMode:(int)arg1 ;
-(int)selectClipRegionWithRects:(id)arg0 in_mode:(int)arg1 ;
-(int)selectClippingPath:(id)arg0 combineMode:(int)arg1 ;
-(int)selectObject:(int)arg0 ;
-(int)setArcDirection:(int)arg0 ;
-(int)setBkColour:(id)arg0 ;
-(int)setBkMode:(int)arg0 ;
-(int)setBrushOrg:(CGFloat)arg0 y:(CGFloat)arg1 ;
-(int)setClipRegion:(unsigned int)arg0 ;
-(int)setMapMode:(int)arg0 ;
-(int)setMetaRgn;
-(int)setMiterLimit:(CGFloat)arg0 ;
-(int)setPaletteEntries:(unsigned int)arg0 in_colours:(id)arg1 in_index:(unsigned int)arg2 ;
-(int)setPolyFillMode:(int)arg0 ;
-(int)setRop2:(int)arg0 ;
-(int)setStretchBltMode:(int)arg0 ;
-(int)setTextAlign:(BOOL)arg0 textHorizontalAlign:(int)arg1 textVerticalAlign:(int)arg2 textDirection:(int)arg3 ;
-(int)setTextCharExtra:(int)arg0 ;
-(int)setTextColour:(id)arg0 ;
-(int)setTextJustification:(int)arg0 in_breakCount:(int)arg1 ;
-(int)setViewBox:(CGFloat)arg0 top:(CGFloat)arg1 width:(CGFloat)arg2 height:(CGFloat)arg3 ;
-(int)setViewportExt:(int)arg0 in_y:(int)arg1 ;
-(int)setViewportOrg:(int)arg0 in_y:(int)arg1 ;
-(int)setWindowExt:(int)arg0 in_y:(int)arg1 ;
-(int)setWindowOrg:(int)arg0 in_y:(int)arg1 ;
-(int)setWorldTransform:(struct CGAffineTransform *)arg0 ;
-(int)stretchBlt:(int)arg0 in_yDest:(int)arg1 in_widthDest:(int)arg2 in_heightDest:(int)arg3 in_sourceImage:(id)arg4 in_xSrc:(int)arg5 in_ySrc:(int)arg6 in_widthSrc:(int)arg7 in_heightSrc:(int)arg8 in_rop:(unsigned int)arg9 in_xform:(struct CGAffineTransform *)arg10 in_colour:(unsigned int)arg11 ;
-(int)stretchBlt:(int)arg0 in_yDest:(int)arg1 in_widthDest:(int)arg2 in_heightDest:(int)arg3 in_sourceImage:(id)arg4 in_xSrc:(int)arg5 in_ySrc:(int)arg6 in_widthSrc:(int)arg7 in_heightSrc:(int)arg8 in_rop:(unsigned int)arg9 in_xform:(struct CGAffineTransform *)arg10 in_colour:(unsigned int)arg11 usePaletteForBilevel:(BOOL)arg12 ;
-(int)strokeAndFillPath:(BOOL)arg0 in_fill:(BOOL)arg1 ;
-(int)textOut:(int)arg0 y:(int)arg1 in_text:(id)arg2 ;
-(int)textOutEncoded:(int)arg0 y:(int)arg1 in_data:(id)arg2 ;
-(int)widenPath;
-(struct CGRect )getCanvas;
-(void)addClippingPathToCurrentContext:(id)arg0 dc:(id)arg1 ;
-(void)addClippingPathToCurrentDCAndCurrentContext:(id)arg0 ;
-(void)applyClippingOfDCAtIndexToCurrentContext:(NSUInteger)arg0 ;
-(void)applyDCAtIndexToCurrentContext:(NSUInteger)arg0 ;
-(void)applyNonClippingOfDCAtIndexToCurrentContext:(NSUInteger)arg0 ;
-(void)createStockObjects;
-(void)dealloc;
-(void)done;
-(void)restoreGState:(id)arg0 ;
-(void)saveGState:(id)arg0 ;
-(void)setClippingPath:(id)arg0 ;
-(void)setColorMap:(id)arg0 fillMap:(id)arg1 ;
-(void)setMaximumObjectTableSize:(unsigned int)arg0 ;


@end


#endif