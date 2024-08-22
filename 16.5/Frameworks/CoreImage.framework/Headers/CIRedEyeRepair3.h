// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIREDEYEREPAIR3_H
#define CIREDEYEREPAIR3_H

@class NSArray, NSMutableArray;
@protocol RedEyeInspector3;

#import <Foundation/Foundation.h>


@interface CIRedEyeRepair3 : NSObject {
    id<RedEyeInspector3> *inspector;
    ? fullBitmap;
    ? subRectangle;
    ? FC;
    NSArray *faceArray;
    ? faceBitmap;
    ? S;
    ? PB;
    ? G;
    ? M;
    ? FS;
    int printFaceArrayLevel;
    CGRect ROIRect;
    float avgLuminance;
    float minLuminance;
    float maxLuminance;
    float skinval;
    int ioffx;
    int ioffy;
    int erError;
    NSMutableArray *repairs;
    ? repairRect;
    ? repairMap;
    NSMutableArray *failureCauses;
}




+(float)yawAngleWithFaceDictionary:(id)arg0 ;
+(int)bitmapRect:(struct ? *)arg0 point:(struct CGPoint *)arg1 polygon:(struct CGPoint )arg2 andDistMatrix:(float)arg3 forEye:(int)arg4 inFaceDictionary:(id)arg5 settings:(struct ? *)arg6 ;
+(int)faceContext:(struct ? *)arg0 withFaceArray:(id)arg1 index:(int)arg2 settings:(struct ? *)arg3 ;
+(struct ? )bitmapRectWithImageSubRectangle:(struct CGRect )arg0 settings:(struct ? *)arg1 ;
+(struct ? )settingsWithOptions:(id)arg0 ;
+(struct CGRect )supportRectangleWithFaceArray:(id)arg0 options:(id)arg1 ;
+(struct CGRect )supportRectangleWithRepair:(id)arg0 imageSize:(struct CGSize )arg1 ;
+(void)insertIntoConnectionHopper:(struct ? *)arg0 index1:(int)arg1 drop1:(int)arg2 index2:(int)arg3 drop2:(int)arg4 score:(float)arg5 ;
+(void)insertIntoThreadHopper:(struct ? *)arg0 index:(int)arg1 recChannel:(float)arg2 hue:(float)arg3 saturation:(float)arg4 luminance:(float)arg5 shapeMetricTotal:(float)arg6 xPosition:(float)arg7 ;
-(?)convexHull:(?)arg0 ofOrientedshape;
-(?)convexHull:(?)arg0 ofOrientedthreadIndex;
-(?)improvedShapewithShape;
-(?)initHullwithOrientation;
-(?)newShape;
-(?)newShape:(?)arg0 byInterpolatingBetweenCheckpoints:(?)arg1 ncusingVectorField;
-(?)newThread;
-(?)openRepairDictionary:(?)arg0 convexHullfacts;
-(?)prominenceConvexHullfacts;
-(?)shape:(?)arg0 withThreadAtIndexcentroid;
-(?)unpackToGlobalRepairDictionary:(?)arg0 convexHullfacts;
-(?)widenedHull:(?)arg0 withHullby;
-(BOOL)edgePoint:(struct CGPoint *)arg0 withBitmap:(struct ? *)arg1 center:(struct CGPoint )arg2 perp:(struct CGPoint )arg3 ;
-(BOOL)gatherFaceStatistics:(struct ? *)arg0 ;
-(BOOL)hopperElement:(struct ? *)arg0 isMoreScleraThanElement:(struct ? *)arg1 ;
-(BOOL)initGridWithBitmap:(struct ? *)arg0 scale:(int)arg1 ;
-(BOOL)isBlurryWithFocusStats:(struct ? )arg0 ;
-(BOOL)isConvex:(struct ? *)arg0 ;
-(BOOL)trimConcaveFromHull:(struct ? *)arg0 ;
-(BOOL)trimEndPointFromHull:(struct ? *)arg0 ;
-(BOOL)trimStartPointFromHull:(struct ? *)arg0 ;
-(CGFloat)next12BitRandom;
-(float)threadSignedArea:(struct ? *)arg0 centroid:(struct CGPoint )arg1 ;
-(id)dictionaryPointArrayWithBitmapPoint:(struct CGPoint )arg0 ;
-(id)dictionaryPointArrayWithEyeBitmapPoint:(struct CGPoint )arg0 ;
-(id)dictionaryPointArrayWithGlobalBitmapPoint:(struct CGPoint )arg0 ;
-(id)dictionaryRectArrayWithBitmapRect:(struct ? )arg0 ;
-(id)dictionaryRectArrayWithGlobalBitmapRect:(struct ? )arg0 ;
-(id)initWithExternalBuffer:(char *)arg0 subRectangle:(struct CGRect )arg1 rowBytes:(NSUInteger)arg2 options:(id)arg3 ;
-(id)mutableCopyOfArray:(id)arg0 ;
-(id)repairArray;
-(id)repairWithSide:(int)arg0 ;
-(id)stringWithRER3Error:(int)arg0 ;
-(int)addPoint:(struct CGPoint )arg0 toHull:(struct ? *)arg1 ;
-(int)addPoint:(struct CGPoint )arg0 toShapePoints:(struct ? *)arg1 ;
-(int)analyzeMask:(struct ? *)arg0 usingConvexHull:(struct ? *)arg1 producingOptimizedMask:(struct ? *)arg2 ;
-(int)attemptClosureOfThreadIndex:(int)arg0 ;
-(int)closeThreadIndex:(int)arg0 usingVectorField:(struct ? *)arg1 ;
-(int)color:(struct ? *)arg0 underConvexHull:(struct ? *)arg1 saturated:(struct ? *)arg2 ;
-(int)connectThreads:(int)arg0 drop1:(int)arg1 and:(int)arg2 drop2:(int)arg3 ;
-(int)connectThreadsInGrid;
-(int)copyGridInto:(struct ? *)arg0 transform:(struct CGAffineTransform )arg1 height:(int)arg2 ;
-(int)copyShape:(struct ? *)arg0 into:(struct ? *)arg1 transform:(struct CGAffineTransform )arg2 height:(int)arg3 ;
-(int)executeRepairWithRepairDictionary:(id)arg0 ;
-(int)findThreadsInGrid;
-(int)gatherThreadInfo:(struct ? *)arg0 ;
-(int)initShapePoints:(struct ? *)arg0 withMaxPoints:(int)arg1 ;
-(int)insertPoint:(struct CGPoint )arg0 andDirection:(struct CGPoint )arg1 intoGrid:(BOOL)arg2 ;
-(int)linkUpPointIndex:(int)arg0 toPointIndex:(int)arg1 ;
-(int)lookForPoint:(struct CGPoint *)arg0 onLine:(struct ? )arg1 nearestPoint:(struct CGPoint )arg2 ;
-(int)nextPointIndexWithPointIndex:(int)arg0 ;
-(int)packGlobalRepairDictionary:(*id)arg0 withConvexHull:(struct ? *)arg1 facts:(struct ? *)arg2 ;
-(int)prepareBitmapsWithString:(char *)arg0 ;
-(int)prepareMasksWithConvexHull:(struct ? *)arg0 ;
-(int)prepareTransformWithEyeIndex:(int)arg0 ;
-(int)recognizeThreadsWinningThreadIndex:(*int)arg0 info:(struct ? *)arg1 ;
-(int)renderConvexHull:(struct ? *)arg0 distance:(float)arg1 fieldToBitmap:(struct ? *)arg2 ;
-(int)renderEyePolygonToBitmap:(struct ? *)arg0 ;
-(int)renderHull:(struct ? *)arg0 toBitmap:(struct ? *)arg1 ;
-(int)repairDictionary:(*id)arg0 withEyeIndex:(int)arg1 ;
-(int)replacePointAndDirection:(int)arg0 ;
-(int)saveRepairDictionary:(*id)arg0 withConvexHull:(struct ? *)arg1 facts:(struct ? *)arg2 ;
-(int)transformRepairArray:(struct CGAffineTransform )arg0 ;
-(int)updateWithFaceIndex:(int)arg0 ;
-(int)updatedCheckpoint:(struct CGPoint *)arg0 withCheckpoint:(struct CGPoint )arg1 checkpointIndex:(int)arg2 angle:(float)arg3 width:(int)arg4 height:(int)arg5 inChannel:(struct ? *)arg6 threadIndex:(int)arg7 returningEdgeWidth:(*float)arg8 ;
-(struct ? )RGBtoHSV:(struct ? )arg0 ;
-(struct ? )bitmapRectWithDictionaryRectArray:(id)arg0 ;
-(struct ? )focusStatsWithBitmap:(struct ? *)arg0 IOD:(float)arg1 ;
-(struct ? )globalBitmapRectWithDictionaryRectArray:(id)arg0 ;
-(struct ? )repairRect;
-(struct ? *)repairMap;
-(struct CGAffineTransform )inverseImageTransformForOrientation:(int)arg0 ;
-(struct CGPoint )bitmapPointWithDictionaryPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )bitmapPointWithDictionaryPointArray:(id)arg0 ;
-(struct CGPoint )centroidWithConvexHull:(struct ? *)arg0 ;
-(struct CGPoint )dictionaryPointWithBitmapPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )dictionaryPointWithGlobalBitmapPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )globalBitmapPointWithDictionaryPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )globalBitmapPointWithDictionaryPointArray:(id)arg0 ;
-(struct CGPoint )leftHandedTransform:(struct CGAffineTransform )arg0 ofPoint:(struct CGPoint )arg1 ;
-(struct CGPoint )threadCentroid:(struct ? *)arg0 ;
-(void)autoRepairWithFaceArray:(id)arg0 ;
-(void)computeLengthsAnglesAndDeltaAnglesForShape:(struct ? *)arg0 ;
-(void)condenseFourChannelRecognitionMap:(struct ? *)arg0 intoOneChanneMap:(struct ? *)arg1 ;
-(void)dealloc;
-(void)executeRepair:(id)arg0 ;
-(void)forAllGridPointsNear:(int)arg0 withinRadius:(float)arg1 do:(*unk)arg2 context:(*void)arg3 ;
-(void)forAllGridThreadsNear:(struct CGPoint )arg0 withinRadius:(float)arg1 do:(*unk)arg2 context:(*void)arg3 ;
-(void)initBitmaps;
-(void)magnitudeMap:(struct ? *)arg0 fromGabor:(struct ? *)arg1 ;
-(void)measureHull:(struct ? *)arg0 majorAxis:(struct CGPoint *)arg1 majorTo:(struct CGPoint *)arg2 majorDiameter:(*float)arg3 minorAxis:(struct CGPoint *)arg4 minorTo:(struct CGPoint *)arg5 minorDiameter:(*float)arg6 ;
-(void)point:(struct CGPoint )arg0 toGridRow:(*int)arg1 column:(*int)arg2 ;
-(void)printConnectionHopper:(struct ? *)arg0 message:(char *)arg1 ;
-(void)printFaceArray;
-(void)printThreadWithIndex:(int)arg0 ;
-(void)printThreadsOnlyClosed:(BOOL)arg0 message:(char *)arg1 ;
-(void)putThreadAtIndex:(int)arg0 ;
-(void)regressionWithPointIndex:(int)arg0 ;
-(void)removeRedundantPointsFromShape:(struct ? *)arg0 closerThan:(float)arg1 ;
-(void)removeSmallBumpsFromShape:(struct ? *)arg0 center:(struct CGPoint )arg1 threshold:(float)arg2 ;
-(void)removeSpikesFromShape:(struct ? *)arg0 ;
-(void)removeThreadAtIndex:(int)arg0 ;
-(void)repairExternalBuffer;
-(void)setInspector:(id)arg0 ;
-(void)slidingWindowAnalysisOfShape:(struct ? *)arg0 into:(struct ? *)arg1 ;
-(void)start12BitRandom:(int)arg0 ;
-(void)swapHopperElement:(struct ? *)arg0 withElement:(struct ? *)arg1 ;
-(void)termBitmaps;
-(void)termGrid;
-(void)termHull:(struct ? *)arg0 ;
-(void)termShapePoints:(struct ? *)arg0 ;
-(void)transformConvexHull:(struct ? *)arg0 withTransform:(struct CGAffineTransform )arg1 ;
-(void)transformGlobalsWithTransform:(struct CGAffineTransform )arg0 ;


@end


#endif