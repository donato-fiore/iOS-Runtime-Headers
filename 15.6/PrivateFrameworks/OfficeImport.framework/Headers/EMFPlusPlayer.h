// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMFPLUSPLAYER_H
#define EMFPLUSPLAYER_H

@class NSMutableData;

#import <Foundation/Foundation.h>

#import "MFPGraphics.h"
#import "EMFPlayer.h"
#import "MFPEffect.h"

@interface EMFPlusPlayer : NSObject {
    MFPGraphics *mGraphics;
    EMFPlayer *mOwner;
    int mLargeType;
    unsigned short mLargeFlags;
    unsigned int mLargeSize;
    NSMutableData *mLargeData;
    MFPEffect *mEffect;
}




+(float)firstTabPosPastPos:(float)arg0 stringFormat:(id)arg1 isExplicit:(*BOOL)arg2 ;
+(int)serializableObjectTypeForGUID:(id)arg0 ;
-(id)canvasInWorldCoordinates;
-(id)effect;
-(id)initWithOwner:(id)arg0 canvas:(struct CGRect )arg1 ;
-(int)play:(char *)arg0 in_size:(unsigned int)arg1 ;
-(int)playBeginContainer:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playBeginContainerNoParams:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playBlurEffectWithData:(char *)arg0 size:(unsigned int)arg1 ;
-(int)playBrightnessContrastEffectWithData:(char *)arg0 size:(unsigned int)arg1 ;
-(int)playBrush:(char *)arg0 in_size:(unsigned int)arg1 objectIndex:(unsigned char)arg2 ;
-(int)playClear:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playColorBalanceEffectWithData:(char *)arg0 size:(unsigned int)arg1 ;
-(int)playColorCurveEffectWithData:(char *)arg0 size:(unsigned int)arg1 ;
-(int)playColorLUTEffectWithData:(char *)arg0 size:(unsigned int)arg1 ;
-(int)playColorMatrixEffectWithData:(char *)arg0 size:(unsigned int)arg1 ;
-(int)playCustomLineCap:(char *)arg0 in_size:(unsigned int)arg1 objectIndex:(unsigned char)arg2 ;
-(int)playDrawArc:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playDrawBeziers:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playDrawClosedCurve:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playDrawCurve:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playDrawDriverString:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playDrawEllipse:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playDrawImage:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playDrawImagePoints:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playDrawLines:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playDrawPath:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playDrawPie:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playDrawRects:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playDrawString:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playEndContainer:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playFillClosedCurve:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playFillEllipse:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playFillPath:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playFillPath:(id)arg0 in_pData:(char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3 ;
-(int)playFillPie:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playFillPolygon:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playFillRects:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playFont:(char *)arg0 in_size:(unsigned int)arg1 objectIndex:(unsigned char)arg2 ;
-(int)playGetDC:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playGraphics:(char *)arg0 in_size:(unsigned int)arg1 objectIndex:(unsigned char)arg2 ;
-(int)playHeader:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playHueSaturationLightnessEffectWithData:(char *)arg0 size:(unsigned int)arg1 ;
-(int)playImage:(char *)arg0 in_size:(unsigned int)arg1 objectIndex:(unsigned char)arg2 ;
-(int)playImageAttributes:(char *)arg0 in_size:(unsigned int)arg1 objectIndex:(unsigned char)arg2 ;
-(int)playLevelsEffectWithData:(char *)arg0 size:(unsigned int)arg1 ;
-(int)playMultiplyWorldTransform:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playObject:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playOffsetClip:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playPath:(char *)arg0 in_size:(unsigned int)arg1 objectIndex:(unsigned char)arg2 ;
-(int)playPen:(char *)arg0 in_size:(unsigned int)arg1 objectIndex:(unsigned char)arg2 ;
-(int)playRecord:(int)arg0 pData:(char *)arg1 dataSize:(unsigned int)arg2 flags:(unsigned short)arg3 ;
-(int)playRedEyeCorrectionEffectWithData:(char *)arg0 size:(unsigned int)arg1 ;
-(int)playRegion:(char *)arg0 in_size:(unsigned int)arg1 objectIndex:(unsigned char)arg2 ;
-(int)playResetClip:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playResetWorldTransform:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playRestore:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playRotateWorldTransform:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playSave:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playScaleWorldTransform:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playSerializableObject:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playSetAntiAliasMode:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playSetClipPath:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playSetClipRect:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playSetClipRegion:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playSetCompositingMode:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playSetCompositingQuality:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playSetInterpolationMode:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playSetPageTransform:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playSetPixelOffsetMode:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playSetRenderingOrigin:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playSetTextContrast:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playSetTextRenderingHint:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playSetWorldTransform:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playSharpenEffectWithData:(char *)arg0 size:(unsigned int)arg1 ;
-(int)playStringFormat:(char *)arg0 in_size:(unsigned int)arg1 objectIndex:(unsigned char)arg2 ;
-(int)playStrokePath:(id)arg0 in_pData:(char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3 ;
-(int)playTintEffectWithData:(char *)arg0 size:(unsigned int)arg1 ;
-(int)playTranslateWorldTransform:(char *)arg0 in_size:(unsigned int)arg1 in_flags:(unsigned short)arg2 ;
-(int)playUnknown:(char *)arg0 in_size:(unsigned int)arg1 in_type:(int)arg2 in_flags:(unsigned short)arg3 ;
-(int)readBrush:(char *)arg0 in_size:(unsigned int)arg1 returnBrush:(*id)arg2 ;
-(int)readGradientBrush:(id)arg0 from:(*char *)arg1 brushFlags:(unsigned int)arg2 in_size:(unsigned int)arg3 ;
-(int)readImage:(char *)arg0 in_size:(unsigned int)arg1 pImage:(*id)arg2 ;
-(int)readPath:(char *)arg0 in_size:(unsigned int)arg1 returnPath:(*id)arg2 ;
-(int)setClipPath:(id)arg0 flags:(unsigned short)arg1 ;
-(void)resetLargeRecord;
-(void)setEffect:(id)arg0 ;


@end


#endif