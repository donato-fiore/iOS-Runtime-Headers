// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIREDEYEREPAIR_H
#define CIREDEYEREPAIR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CIRedEyeRepair : NSObject {
    BOOL ownLF;
    *? lf;
    int imageSourceType;
    *CGImageBlockSet blockSet;
    *void releaseMe;
    *__CFData dataRef;
    NSArray *faces;
    int nRepairs;
    int nextRepairTag;
    ? repairs;
    int lastRepairTag;
    float lastRepairIOD;
    ? standardTemplate;
    int iFaceIndex;
    BOOL iLeft;
    BOOL debugRedEye;
    BOOL logRepairs;
    int redEyeThresholdKind;
    BOOL renderAlpha;
    BOOL infillBackground;
    BOOL renderSpecularShine;
    float specularSize;
    float specularSoftness;
    BOOL pupilShadeAlignment;
    BOOL autoPupilTonality;
    BOOL forceLoValue;
    int loValue;
    ? lastClickYBitmap;
    ? lastClickCbCrBitmap;
    int lastClickBitmapMinX;
    int lastClickBitmapMaxX;
    int lastClickBitmapMinY;
    int lastClickBitmapMaxY;
    ? lastClickYBitmaps;
    ? lastClickCbCrBitmaps;
    ? lastClickBitmapRects;
    ? lastSearchYBitmap;
    ? lastSearchCbCrBitmap;
    int lastSearchBitmapMinX;
    int lastSearchBitmapMaxX;
    int lastSearchBitmapMinY;
    int lastSearchBitmapMaxY;
    int nPolyPoints;
    BOOL polyClosed;
    CGPoint polyPoints;
    ? polyLines;
    BOOL polyPointConcave;
    unsigned char CbCrDistanceTable;
    int nLinears;
    int linearCoefficients;
}




+(float)upperRepairDistance:(float)arg0 ;
+(float)upperRepairDistanceFraction:(float)arg0 ;
+(struct CGRect )supportRectangleWithFaceArray:(id)arg0 imageSize:(struct CGSize )arg1 ;
+(struct CGRect )supportRectangleWithPoint:(struct CGPoint )arg0 imageSize:(struct CGSize )arg1 IOD:(float)arg2 ;
+(struct CGRect )supportRectangleWithRepair:(id)arg0 imageSize:(struct CGSize )arg1 ;
-(BOOL)autoPupilTonality;
-(BOOL)computeTrimmedBitmaps:(struct ? *)arg0 newY:(struct ? *)arg1 newCbCr:(struct ? *)arg2 IR:(struct ? )arg3 newTrimY:(struct ? *)arg4 newTrimCbCr:(struct ? *)arg5 returningYR:(struct ? *)arg6 andCbCrR:(struct ? *)arg7 ;
-(BOOL)debug;
-(BOOL)extractAndGatherProminencesWithRect:(struct ? )arg0 face:(struct ? *)arg1 faceIndex:(int)arg2 left:(BOOL)arg3 maxwindowsize:(float)arg4 repairsize:(float)arg5 returningRedHopper:(struct ? *)arg6 whiteHopper:(struct ? *)arg7 redChannel:(struct ? *)arg8 redChannelMask:(struct ? *)arg9 ;
-(BOOL)extractReusableAlignedBitmapsAroundPoint:(struct ? *)arg0 YR:(struct ? )arg1 subYBitmap:(struct ? *)arg2 subCbCrBitmap:(struct ? *)arg3 ;
-(BOOL)forceLoValue;
-(BOOL)gatherProminencesWithC:(struct ? *)arg0 MC:(struct ? *)arg1 altC:(struct ? *)arg2 altMC:(struct ? *)arg3 maxwindowsize:(int)arg4 repairsize:(int)arg5 IR:(struct ? )arg6 fr:(struct ? *)arg7 intoHopper:(struct ? *)arg8 faceIndex:(int)arg9 left:(BOOL)arg10 ;
-(BOOL)gatherProminencesWithC:(struct ? *)arg0 MC:(struct ? *)arg1 maxwindowsize:(int)arg2 repairsize:(int)arg3 IR:(struct ? )arg4 fr:(struct ? *)arg5 intoHopper:(struct ? *)arg6 faceIndex:(int)arg7 left:(BOOL)arg8 coss:(float)arg9 sins:(float)arg10 bitmapName:(char *)arg11 ;
-(BOOL)getBlockSetWithImage:(struct CGImage *)arg0 into:(struct ? *)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 ;
-(BOOL)getBool:(*BOOL)arg0 d:(id)arg1 s:(id)arg2 ;
-(BOOL)getDataProviderBytePtrWithImage:(struct CGImage *)arg0 into:(struct ? *)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 ;
-(BOOL)getDataProviderCopyWithImage:(struct CGImage *)arg0 into:(struct ? *)arg1 ;
-(BOOL)getFloat:(*float)arg0 d:(id)arg1 s:(id)arg2 ;
-(BOOL)getInt:(*int)arg0 d:(id)arg1 s:(id)arg2 ;
-(BOOL)infillBackground;
-(BOOL)logRepairs;
-(BOOL)pupilShadeAlignment;
-(BOOL)renderAlpha;
-(BOOL)renderSpecularShine;
-(float)confidenceWithIOD:(float)arg0 repair:(int)arg1 andProminenceDifference:(int)arg2 ;
-(float)extractAverageFaceY:(struct ? *)arg0 contrast:(*float)arg1 faceIndex:(int)arg2 ;
-(float)lowerRepairSize:(float)arg0 ;
-(float)lowerRepairSizeFraction:(float)arg0 ;
-(float)specularSize;
-(float)specularSoftness;
-(float)upperRepairSize:(float)arg0 ;
-(float)upperRepairSizeFraction:(float)arg0 ;
-(id)faces;
-(id)initWithCGImage:(struct CGImage *)arg0 cameraModel:(id)arg1 ;
-(id)initWithDeskView:(id)arg0 andFrame:(struct ? *)arg1 ;
-(id)initWithExternalBuffer:(char *)arg0 size:(struct CGSize )arg1 rowBytes:(NSUInteger)arg2 ;
-(id)initWithExternalBuffer:(char *)arg0 subRectangle:(struct CGRect )arg1 fullSize:(struct CGSize )arg2 rowBytes:(NSUInteger)arg3 cameraModel:(id)arg4 ;
-(id)initWithFrameExternalBuffer:(struct ? *)arg0 ;
-(id)initWithIOSurface:(struct __IOSurface *)arg0 format:(int)arg1 colorSpace:(struct CGColorSpace *)arg2 cameraModel:(id)arg3 ;
-(id)repairArray;
-(int)applyEyeRepairWithEye:(struct ? *)arg0 left:(BOOL)arg1 IOD:(float)arg2 autoPupilTonality:(BOOL)arg3 match:(struct ? *)arg4 faceIndex:(int)arg5 whiteHopper:(struct ? *)arg6 ;
-(int)averageValueFromY:(struct ? *)arg0 withinSkinMask:(struct ? *)arg1 butOutsideAlpha:(struct ? *)arg2 ;
-(int)distanceMaskFromPolyToCb:(int)arg0 Cr:(int)arg1 ;
-(int)format;
-(int)lastRepairTag;
-(int)loValue;
-(int)nRepairs;
-(int)redEyeRemovalWithData:(struct ? )arg0 ;
-(int)redEyeRemovalWithPoint:(struct CGPoint )arg0 alignPupilShades:(BOOL)arg1 matching:(struct ? )arg2 force:(int)arg3 IOD:(float)arg4 tap:(BOOL)arg5 ;
-(int)redEyeThresholdKind;
-(int)redoRepairWithTag:(int)arg0 IOD:(float)arg1 ;
-(struct ? )repairDecisionWithFaceRecord:(struct ? *)arg0 left:(BOOL)arg1 redHopper:(struct ? *)arg2 whiteHopper:(struct ? *)arg3 ;
-(struct ? )standardTemplate;
-(struct ? *)repairWithTag:(int)arg0 ;
-(struct ? *)repairs;
-(struct CGImage *)createRepairedImage;
-(void)autoRepairExtractAndSearchLeft:(struct ? )arg0 right:(struct ? )arg1 data:(struct ? *)arg2 repairSize:(float)arg3 autoPupilTonality:(BOOL)arg4 faceIndex:(int)arg5 ;
-(void)autoRepairWithFaceArray:(id)arg0 ;
-(void)dealloc;
-(void)executeRepair:(id)arg0 ;
-(void)executeRepairArray:(id)arg0 ;
-(void)initializeNonDebugVariables;
-(void)insertIntoProminenceVettingHopper:(struct ? *)arg0 max:(int)arg1 outside:(int)arg2 confidence:(float)arg3 distance:(float)arg4 row:(int)arg5 column:(int)arg6 IOD:(float)arg7 ;
-(void)orientPointX:(*float)arg0 Y:(*float)arg1 ;
-(void)orientRectangleMinX:(*float)arg0 maxX:(*float)arg1 minY:(*float)arg2 maxY:(*float)arg3 ;
-(void)prepareLineFunctions;
-(void)redoLastRepair;
-(void)repairExternalBuffer;
-(void)setAutoPupilTonality:(BOOL)arg0 ;
-(void)setColorSpace:(struct CGColorSpace *)arg0 ;
-(void)setDebug:(BOOL)arg0 ;
-(void)setFaceIndex:(int)arg0 ;
-(void)setForceLoValue:(BOOL)arg0 ;
-(void)setInfillBackground:(BOOL)arg0 ;
-(void)setLeft:(BOOL)arg0 ;
-(void)setLoValue:(int)arg0 ;
-(void)setLogRepairs:(BOOL)arg0 ;
-(void)setPupilShadeAlignment:(BOOL)arg0 ;
-(void)setRedEyeThresholdKind:(int)arg0 ;
-(void)setRenderAlpha:(BOOL)arg0 ;
-(void)setRenderSpecularShine:(BOOL)arg0 ;
-(void)setSpecularSize:(float)arg0 ;
-(void)setSpecularSoftness:(float)arg0 ;
-(void)skinInit;
-(void)undoRepair:(int)arg0 ;


@end


#endif