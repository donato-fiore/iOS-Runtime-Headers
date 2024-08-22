// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMFPLAYER_H
#define EMFPLAYER_H


#import <Foundation/Foundation.h>

#import "MFGraphicsDevice.h"
#import "EMFPlusPlayer.h"

@interface EMFPlayer : NSObject {
    MFGraphicsDevice *m_gdi;
    BOOL m_headerDone;
    EMFPlusPlayer *m_emfPlusPlayer;
    BOOL m_ignoreEMFRecords;
    BOOL m_ignoreEMFPlusRecords;
}




+(struct CGRect )boundsInLogicalUnits:(id)arg0 ;
+(struct CGRect )boundsInPoints:(id)arg0 ;
-(id)getGdi;
-(id)initWithGraphicsDevice:(id)arg0 ;
-(int)play:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playAbortPath:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playAlphaBlend:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playAngleArc:(unsigned int)arg0 in_pRecord:(char *)arg1 in_is16bit:(BOOL)arg2 ;
-(int)playArc:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playArcTo:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playBeginPath:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playBitBlt:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playChord:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playCloseFigure:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playCreateBrushIndirect:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playCreateDibPatternBrushPT:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playCreateMonoBrush:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playCreatePalette:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playCreatePen:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playDeleteObject:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playEllipse:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playEndPath:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playExcludeClipRect:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playExtCreateFontIndirectW:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playExtCreatePen:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playExtTextOut:(unsigned int)arg0 in_pRecord:(char *)arg1 wideChars:(BOOL)arg2 ;
-(int)playExtTextOutA:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playExtTextOutW:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playFillRgn:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playHeader:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playIntersectClipRect:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playInvertRgn:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playLineTo:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playMaskBlt:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playModifyWorldTransform:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playMoveToEx:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playOffsetClipRegion:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playPaintRgn:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playPie:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playPlgBlt:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playPolyBezier:(unsigned int)arg0 in_pRecord:(char *)arg1 in_is16bit:(BOOL)arg2 ;
-(int)playPolyBezierTo:(unsigned int)arg0 in_pRecord:(char *)arg1 in_is16bit:(BOOL)arg2 ;
-(int)playPolyDraw:(unsigned int)arg0 in_pRecord:(char *)arg1 in_is16bit:(BOOL)arg2 ;
-(int)playPolyLine:(unsigned int)arg0 in_pRecord:(char *)arg1 in_is16bit:(BOOL)arg2 ;
-(int)playPolyLineTo:(unsigned int)arg0 in_pRecord:(char *)arg1 in_is16bit:(BOOL)arg2 ;
-(int)playPolyPolyLine:(unsigned int)arg0 in_pRecord:(char *)arg1 in_is16bit:(BOOL)arg2 ;
-(int)playPolyPolygon:(unsigned int)arg0 in_pRecord:(char *)arg1 in_is16bit:(BOOL)arg2 ;
-(int)playPolygon:(unsigned int)arg0 in_pRecord:(char *)arg1 in_is16bit:(BOOL)arg2 ;
-(int)playRealizePalette:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playRectangle:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playResizePalette:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playRestoreDC:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playRoundRect:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSaveDC:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playScaleViewportExt:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playScaleWindowExt:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSelectClipPath:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSelectClipRegion:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSelectObject:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSelectPalette:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetArcDirection:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetBkColour:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetBkMode:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetBrushOrg:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetDIBitsToDevice:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetMapMode:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetMetaRgn:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetMiterLimit:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetPaletteEntries:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetPolyFillMode:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetRop2:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetStretchBltMode:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetTextAlign:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetTextColour:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetTextJustification:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetViewportExt:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetViewportOrg:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetWindowExt:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetWindowOrg:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetWorldTransform:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playStretchBlt:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playStretchDIBits:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playStrokeAndFillPath:(unsigned int)arg0 in_pRecord:(char *)arg1 in_stroke:(BOOL)arg2 in_fill:(BOOL)arg3 ;
-(int)playUnknown:(unsigned int)arg0 in_recordType:(unsigned int)arg1 in_pRecord:(char *)arg2 ;
-(int)playUnsupported:(unsigned int)arg0 in_recordName:(char *)arg1 in_pRecord:(char *)arg2 ;
-(int)playWidenPath:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(void)done;
-(void)setIgnoreEMFPlusRecords:(BOOL)arg0 ;
-(void)setIgnoreEMFRecords:(BOOL)arg0 ;


@end


#endif