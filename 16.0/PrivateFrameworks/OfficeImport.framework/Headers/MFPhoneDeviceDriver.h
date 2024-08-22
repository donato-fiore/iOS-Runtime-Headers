// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFPHONEDEVICEDRIVER_H
#define MFPHONEDEVICEDRIVER_H

@protocol MFDeviceDriver;

#import <Foundation/Foundation.h>


@interface MFPhoneDeviceDriver : NSObject <MFDeviceDriver>

 {
    CGRect m_canvas;
    CGAffineTransform m_canvasTransform;
    CGRect m_viewBox;
    CGAffineTransform m_viewBoxTransform;
    CGAffineTransform m_worldToDeviceTransform;
    CGAffineTransform m_combinedTransform;
}




+(int)getROP:(id)arg0 ;
-(id)createBitmap:(id)arg0 in_width:(int)arg1 in_height:(int)arg2 in_planes:(int)arg3 in_bitsPerPixel:(int)arg4 in_bitmap:(char *)arg5 in_bitmapSize:(unsigned int)arg6 ;
-(id)createDIBitmap:(id)arg0 in_dib:(char *)arg1 in_dibSize:(unsigned int)arg2 in_usage:(int)arg3 ;
-(id)createDIBitmap:(id)arg0 in_header:(char *)arg1 in_headerSize:(unsigned int)arg2 in_bitmap:(char *)arg3 in_bitmapSize:(unsigned int)arg4 in_usage:(int)arg5 ;
-(id)createFont:(int)arg0 ;
-(id)createFont:(int)arg0 lfWidth:(int)arg1 lfEscapement:(int)arg2 lfOrientation:(int)arg3 lfWeight:(int)arg4 lfItalic:(BOOL)arg5 lfUnderline:(BOOL)arg6 lfStrikeOut:(BOOL)arg7 lfCharSet:(int)arg8 lfOutPrecision:(int)arg9 lfClipPrecision:(unsigned char)arg10 lfQuality:(int)arg11 pitch:(int)arg12 family:(int)arg13 lfFaceName:(id)arg14 ;
-(id)createFontIndirectW:(int)arg0 lfWidth:(int)arg1 lfEscapement:(int)arg2 lfOrientation:(int)arg3 lfWeight:(int)arg4 lfItalic:(BOOL)arg5 lfUnderline:(BOOL)arg6 lfStrikeOut:(BOOL)arg7 lfCharSet:(int)arg8 lfOutPrecision:(int)arg9 lfClipPrecision:(unsigned char)arg10 lfQuality:(int)arg11 pitch:(int)arg12 family:(int)arg13 lfFaceName:(id)arg14 elfFullName:(id)arg15 elfStyle:(id)arg16 elfVersion:(unsigned int)arg17 elfStyleSize:(unsigned int)arg18 elfMatch:(unsigned int)arg19 elfVendorId:(unsigned int)arg20 elfCulture:(unsigned int)arg21 ;
-(id)createHatchBrush:(id)arg0 in_hatchstyle:(int)arg1 ;
-(id)createNullBrush;
-(id)createPath;
-(id)createPatternBrush:(id)arg0 usePaletteForBilevel:(BOOL)arg1 ;
-(id)createPen;
-(id)createPen:(int)arg0 in_width:(int)arg1 in_colour:(id)arg2 in_userStyleArray:(*CGFloat)arg3 ;
-(id)createRegionWithPath:(id)arg0 ;
-(id)createRegionWithRects:(id)arg0 in_dc:(id)arg1 ;
-(id)createSolidBrush:(id)arg0 ;
-(id)initWithCanvas:(struct CGRect )arg0 ;
-(int)activateTransform:(struct CGAffineTransform )arg0 ;
-(int)alphaBlend:(id)arg0 in_xDest:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_widthSrc:(int)arg8 in_heightSrc:(int)arg9 in_sourceConstantOpacity:(unsigned char)arg10 in_useSourceAlphaChannel:(BOOL)arg11 in_xform:(struct CGAffineTransform *)arg12 in_colour:(unsigned int)arg13 ;
-(int)angleArc:(id)arg0 x:(int)arg1 y:(int)arg2 radius:(unsigned int)arg3 startAngle:(CGFloat)arg4 sweepAngle:(CGFloat)arg5 ;
-(int)arc:(id)arg0 nLeftRect:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8 ;
-(int)arcTo:(id)arg0 nLeftRect:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8 ;
-(int)bezier:(id)arg0 x:(int)arg1 y:(int)arg2 x2:(int)arg3 y2:(int)arg4 x3:(int)arg5 y3:(int)arg6 x4:(int)arg7 y4:(int)arg8 ;
-(int)bezierTo:(id)arg0 x:(int)arg1 y:(int)arg2 x2:(int)arg3 y2:(int)arg4 x3:(int)arg5 y3:(int)arg6 ;
-(int)bitBlt:(id)arg0 in_xDest:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_rop:(unsigned int)arg8 in_xform:(struct CGAffineTransform *)arg9 in_colour:(unsigned int)arg10 ;
-(int)chord:(id)arg0 leftRect:(int)arg1 topRect:(int)arg2 rightRect:(int)arg3 bottomRect:(int)arg4 xStartArc:(int)arg5 yStartArc:(int)arg6 xEndArc:(int)arg7 yEndArc:(int)arg8 ;
-(int)ellipse:(id)arg0 x1:(int)arg1 y1:(int)arg2 x2:(int)arg3 y2:(int)arg4 ;
-(int)excludeClipRect:(struct CGRect )arg0 ;
-(int)extTextOut:(id)arg0 px:(*int)arg1 py:(*int)arg2 in_text:(id)arg3 options:(int)arg4 left:(int)arg5 top:(int)arg6 right:(int)arg7 bottom:(int)arg8 spacingValues:(*int)arg9 numValues:(int)arg10 ;
-(int)fillRectangle:(id)arg0 x1:(int)arg1 y1:(int)arg2 x2:(int)arg3 y2:(int)arg4 ;
-(int)intersectClipRect:(struct CGRect )arg0 ;
-(int)lineTo:(id)arg0 x:(CGFloat)arg1 y:(CGFloat)arg2 ;
-(int)maskBlt:(id)arg0 in_xDest:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_maskImage:(id)arg8 in_xMask:(int)arg9 in_yMask:(int)arg10 in_rop:(unsigned int)arg11 in_xform:(struct CGAffineTransform *)arg12 in_colour:(unsigned int)arg13 ;
-(int)patBlt:(id)arg0 in_x:(int)arg1 in_y:(int)arg2 in_width:(int)arg3 in_height:(int)arg4 in_rop:(unsigned int)arg5 ;
-(int)pie:(id)arg0 nLeftRect:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8 ;
-(int)plgBlt:(id)arg0 in_destinationParallelogram:(struct CGPoint *)arg1 in_sourceImage:(id)arg2 in_xSrc:(int)arg3 in_ySrc:(int)arg4 in_widthSrc:(int)arg5 in_heightSrc:(int)arg6 in_maskImage:(id)arg7 in_xMask:(int)arg8 in_yMask:(int)arg9 in_xform:(struct CGAffineTransform *)arg10 in_colour:(unsigned int)arg11 ;
-(int)polyPolygon:(id)arg0 in_points:(struct CGPoint *)arg1 in_polyCounts:(*int)arg2 in_count:(int)arg3 ;
-(int)polyPolyline:(id)arg0 in_points:(struct CGPoint *)arg1 in_polyCounts:(*int)arg2 in_count:(int)arg3 ;
-(int)polygon:(id)arg0 in_points:(struct CGPoint *)arg1 in_count:(int)arg2 ;
-(int)polyline:(id)arg0 in_points:(struct CGPoint *)arg1 in_count:(int)arg2 ;
-(int)rectangle:(id)arg0 x1:(int)arg1 y1:(int)arg2 x2:(int)arg3 y2:(int)arg4 ;
-(int)roundRect:(id)arg0 left:(int)arg1 top:(int)arg2 right:(int)arg3 bottom:(int)arg4 rx:(CGFloat)arg5 ry:(CGFloat)arg6 ;
-(int)setMetaRgn;
-(int)setViewBox:(CGFloat)arg0 top:(CGFloat)arg1 width:(CGFloat)arg2 height:(CGFloat)arg3 ;
-(int)stretchBlt:(id)arg0 in_xDest:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_widthSrc:(int)arg8 in_heightSrc:(int)arg9 in_rop:(unsigned int)arg10 in_xform:(struct CGAffineTransform *)arg11 in_colour:(unsigned int)arg12 ;
-(int)textOut:(id)arg0 px:(*int)arg1 py:(*int)arg2 in_text:(id)arg3 ;
-(struct CGRect )getCanvas;
-(void)applyTransformsToCurrentContext;
-(void)drawBezierPath:(id)arg0 dc:(id)arg1 fill:(BOOL)arg2 stroke:(BOOL)arg3 ;
-(void)updateViewBoxTransform;


@end


#endif