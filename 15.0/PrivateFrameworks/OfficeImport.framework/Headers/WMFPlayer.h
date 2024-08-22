// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WMFPLAYER_H
#define WMFPLAYER_H


#import <Foundation/Foundation.h>

#import "MFGraphicsDevice.h"

@interface WMFPlayer : NSObject {
    MFGraphicsDevice *m_gdi;
    int m_records;
    unsigned short m_windowsVersion;
    BOOL m_boundsSet;
    BOOL m_ignoreSetWindowOrg;
}




+(struct CGRect )boundsInLogicalUnits:(id)arg0 ;
+(struct CGRect )boundsInPoints:(id)arg0 ;
+(struct CGRect )placeableBounds:(char *)arg0 ;
+(struct CGRect )windowBounds:(id)arg0 ;
-(id)initWithGraphicsDevice:(id)arg0 ;
-(id)parseRegion:(unsigned int)arg0 in_pData:(char *)arg1 ;
-(int)play:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playArc:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playBitBlt:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playChord:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playCreateBrushIndirect:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playCreateDIBPatternBrush:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playCreateFontIndirect:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playCreatePalette:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playCreatePatternBrush:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playCreatePenIndirect:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playCreateRegion:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playDeleteObject:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playDibBitBlt:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playDibStretchBlt:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playEllipse:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playExcludeClipRect:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playExtTextOut:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playFillRegion:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playFrameRegion:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playHeader:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playIntersectClipRect:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playInvertRegion:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playLineTo:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playMoveTo:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playOffsetClipRegion:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playOffsetViewportOrg:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playOffsetWindowOrg:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playPaintRegion:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playPatBlt:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playPie:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playPolyPolygon:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playPolygon:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playPolyline:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playRealizePalette:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playRectangle:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playResizePalette:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playRestoreDC:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playRoundRect:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSaveDC:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playScaleViewportExt:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playScaleWindowExt:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSelectClipRegion:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSelectObject:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSelectPalette:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetBkColour:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetBkMode:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetMapMode:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetPaletteEntries:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetPolyFillMode:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetROP2:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetStretchBltMode:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetTextAlign:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetTextCharExtra:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetTextColour:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetTextJustification:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetViewportExt:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetViewportOrg:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetWindowExt:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playSetWindowOrg:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playStretchDib:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playTextOut:(unsigned int)arg0 in_pRecord:(char *)arg1 ;
-(int)playUnknown:(unsigned int)arg0 in_recordType:(unsigned int)arg1 in_pRecord:(char *)arg2 ;
-(int)playUnsupported:(unsigned int)arg0 in_recordName:(char *)arg1 in_pRecord:(char *)arg2 ;
-(int)records;
-(void)done;


@end


#endif