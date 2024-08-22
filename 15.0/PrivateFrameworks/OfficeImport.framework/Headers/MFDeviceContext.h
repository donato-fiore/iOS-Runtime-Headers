// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFDEVICECONTEXT_H
#define MFDEVICECONTEXT_H

@class NSMutableArray;
@protocol NSCopying, MFDeviceDriver;

#import <Foundation/Foundation.h>

#import "MFFont.h"
#import "OITSUColor.h"
#import "MFTransform.h"
#import "MFPen.h"
#import "MFBrush.h"
#import "MFPalette.h"
#import "MFPath.h"

@interface MFDeviceContext : NSObject <NSCopying>

 {
    NSObject<MFDeviceDriver> *m_driver;
    BOOL m_textUpdateCP;
    CGFloat m_miterLimit;
    int m_textHorizontalAlign;
    int m_textVerticalAlign;
    int m_textDirection;
    MFFont *m_font;
    OITSUColor *m_textColour;
    int m_textBreakExtra;
    int m_textBreakCount;
    int m_textCharExtra;
    OITSUColor *m_bkColour;
    int m_bkMode;
    CGPoint m_brushOrg;
    CGPoint m_penPos;
    int m_arcDirection;
    int m_polyFillMode;
    MFTransform *m_transform;
    MFPen *m_pen;
    MFBrush *m_brush;
    MFPalette *m_selectedPalette;
    int m_rop2;
    int m_stretchMode;
    MFPath *m_path;
}


@property (nonatomic) BOOL clippingIsRestarted; // ivar: m_clippingIsRestarted
@property (readonly, nonatomic) NSMutableArray *clippingPaths; // ivar: m_clippingPaths


+(id)deviceContextWithDriver:(id)arg0 ;
-(BOOL)getTextUpdateCP;
-(CGFloat)getMiterLimit;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getBkColour;
-(id)getBrush;
-(id)getCurrentTransform;
-(id)getFont;
-(id)getPath;
-(id)getPen;
-(id)getSelectedPalette;
-(id)getTextColour;
-(id)initWithDriver:(id)arg0 ;
-(int)getArcDirection;
-(int)getBkMode;
-(int)getPolyFillMode;
-(int)getRop2;
-(int)getStretchBltMode;
-(int)getTextBreakCount;
-(int)getTextBreakExtra;
-(int)getTextCharExtra;
-(int)getTextDirection;
-(int)getTextHorizontalAlign;
-(int)getTextVerticalAlign;
-(struct CGPoint )getBrushOrg;
-(struct CGPoint )getPenPosition;
-(void)setArcDirection:(int)arg0 ;
-(void)setBkColour:(id)arg0 ;
-(void)setBkMode:(int)arg0 ;
-(void)setBrush:(id)arg0 ;
-(void)setBrushOrg:(struct CGPoint )arg0 ;
-(void)setCurrentTransform:(id)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setMiterLimit:(CGFloat)arg0 ;
-(void)setPath:(id)arg0 ;
-(void)setPen:(id)arg0 ;
-(void)setPenPosition:(struct CGPoint )arg0 ;
-(void)setPolyFillMode:(int)arg0 ;
-(void)setRop2:(int)arg0 ;
-(void)setSelectedPalette:(id)arg0 ;
-(void)setStretchBltMode:(int)arg0 ;
-(void)setTextCharExtra:(int)arg0 ;
-(void)setTextColour:(id)arg0 ;
-(void)setTextDirection:(int)arg0 ;
-(void)setTextHorizontalAlign:(int)arg0 ;
-(void)setTextJustification:(int)arg0 in_breakCount:(int)arg1 ;
-(void)setTextUpdateCP:(BOOL)arg0 ;
-(void)setTextVerticalAlign:(int)arg0 ;


@end


#endif