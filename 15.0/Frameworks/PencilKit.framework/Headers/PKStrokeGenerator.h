// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSTROKEGENERATOR_H
#define PKSTROKEGENERATOR_H

@protocol PKInputProvider, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "PKStroke.h"

@interface PKStrokeGenerator : NSObject <PKInputProvider>

 {
    CGFloat _latestNonPredictedTimestamp;
    ? _drawPoints;
    vector<_PKStrokePoint, std::allocator<_PKStrokePoint>> _outputPoints;
    NSInteger _outputImmutableCount;
    BOOL _inputHasChanged;
    _PKStrokePoint _baseValues;
    NSObject<OS_dispatch_queue> *_inputQueue;
    PKStroke *_currentStroke;
    NSInteger _currentInputType;
    NSUInteger _currentActiveInputProperties;
    NSInteger _immutableCount;
    NSInteger _missedUpdates;
    ? _updatedDrawPoints;
    BOOL _drawingEndedButNotFinished;
    NSObject<OS_dispatch_semaphore> *_drawingWaitForFinishSemaphore;
    BOOL _keepPredictedTouchesAtEndOfStroke;
}


@property (readonly, nonatomic) NSUInteger activeInputProperties;
@property (nonatomic) *void azimuthFilter; // ivar: _azimuthFilter
@property (nonatomic) BOOL canSnapToRuler; // ivar: _canSnapToRuler
@property (nonatomic) *void compressionFilter; // ivar: _compressionFilter
@property (nonatomic) *void decompressionFilter; // ivar: _decompressionFilter
@property (nonatomic) *void endCapFilter; // ivar: _endCapFilter
@property (nonatomic) *void endHookFilter; // ivar: _endHookFilter
@property CGFloat eraserIndicatorAlpha; // ivar: _eraserIndicatorAlpha
@property (nonatomic) *void estimatedAltitudeAndAzimuthFilter; // ivar: _estimatedAltitudeAndAzimuthFilter
@property (nonatomic) *void inputProvider; // ivar: _inputProvider
@property (nonatomic) CGFloat inputScale; // ivar: _inputScale
@property (nonatomic) *void inputSmoother; // ivar: _inputSmoother
@property (nonatomic) *void inputToOutputFilter; // ivar: _inputToOutputFilter
@property (readonly, nonatomic) NSInteger inputType;
@property BOOL isSnappedToRuler; // ivar: _isSnappedToRuler
@property (nonatomic) BOOL isSnappedToRulerTopSide; // ivar: _isSnappedToRulerTopSide
@property CGPoint lastPoint; // ivar: _lastPoint
@property (readonly) BOOL lastPointIsMasked;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *outputQueue; // ivar: _outputQueue
@property (nonatomic) *void pixelSmoothingFilter; // ivar: _pixelSmoothingFilter
@property (nonatomic) *void pointReductionFilter; // ivar: _pointReductionFilter
@property (nonatomic) *void rulerExtremaFilter; // ivar: _rulerExtremaFilter
@property (nonatomic) CGAffineTransform rulerTransform; // ivar: _rulerTransform
@property (nonatomic) CGFloat rulerWidth; // ivar: _rulerWidth
@property (nonatomic) *void startCapFilter; // ivar: _startCapFilter
@property (nonatomic) *void startHookFilter; // ivar: _startHookFilter
@property (nonatomic) CGFloat strokeMaxForce; // ivar: _strokeMaxForce
@property (nonatomic) CGFloat touchSensitivity; // ivar: _touchSensitivity
@property (nonatomic) BOOL useRuler; // ivar: _useRuler
@property (nonatomic) *void velocityFilter; // ivar: _velocityFilter


+(?)inputPointsFromPath:(?)arg0 maxSegmentLengthvelocityForDistanceFunction;
+(?)inputPointsFromPointsvelocityForDistanceFunction;
+(void)initialize;
-(*void)getInputUpdatedRangeFromIndex:(*NSUInteger)arg0 ;
-(*void)getUpdatedRangeFromIndex:(*NSUInteger)arg0 ;
-(*void)outputFilter;
-(BOOL)shouldSnapPointToRuler:(struct CGPoint )arg0 ;
-(CGFloat)distanceToRulerCenter:(struct CGPoint )arg0 ;
-(CGFloat)latestNonPredictedTimestamp;
-(CGFloat)latestTimestamp;
-(NSInteger)fetchFilteredPointsFromIndex:(NSInteger)arg0 accessBlock:(id)arg1 ;
-(NSUInteger)copyInputUpdatedRangeFromIndex:(NSUInteger)arg0 into:(*void)arg1 ;
-(id)_newStrokeWithCurrentDataAndStrokeDataUUID:(id)arg0 ;
-(id)init;
-(id)newStrokeWithCurrentData;
-(id)newStrokeWithCurrentDataCopy;
-(id)strokeFromInputPoints:(*void)arg0 inputType:(NSInteger)arg1 ink:(id)arg2 inputScale:(CGFloat)arg3 strokeClass:(Class)arg4 ;
-(id)strokeFromLineSegments:(*void)arg0 maxSegmentLength:(CGFloat)arg1 ink:(id)arg2 inputScale:(CGFloat)arg3 strokeClass:(Class)arg4 ;
// -(id)strokeFromPath:(struct CGPath *)arg0 ink:(id)arg1 inputScale:(CGFloat)arg2 maxSegmentLength:(CGFloat)arg3 velocityForDistanceFunction:(id)arg4 strokeClass:(unk)arg5  ;
-(id)strokeFromPoints:(*void)arg0 sourceStroke:(id)arg1 inputScale:(CGFloat)arg2 averageInputPoint:(struct ? )arg3 ;
-(id)strokeFromPoints:(struct CGPoint *)arg0 count:(NSUInteger)arg1 ink:(id)arg2 inputScale:(CGFloat)arg3 strokeClass:(Class)arg4 ;
-(struct CGPoint )getRulerSnapLineOriginAndTangent:(struct CGPoint *)arg0 andNormal:(struct CGPoint *)arg1 ;
-(struct CGPoint )snapPointToRuler:(struct CGPoint )arg0 ;
-(struct _PKStrokePoint )outputCurrentStrokePoint:(struct ? )arg0 ;
-(struct _PKStrokePoint )outputPoint:(struct ? )arg0 baseValues:(struct _PKStrokePoint )arg1 ;
-(void)_drawingAddPoint:(struct ? )arg0 ;
-(void)_removePredictedTouches;
-(void)_updatePredictedTouches;
-(void)addPoint:(struct ? )arg0 ;
-(void)addPoints:(struct vector<PKInputPoint, std::allocator<PKInputPoint>> )arg0 ;
-(void)allowSnappingToRuler:(struct CGAffineTransform )arg0 width:(CGFloat)arg1 ;
-(void)closeStroke;
-(void)dealloc;
-(void)drawingBeganWithStroke:(id)arg0 inputType:(NSInteger)arg1 activeInputProperties:(NSUInteger)arg2 inputScale:(CGFloat)arg3 start:(id)arg4 ;
-(void)drawingCancelledWithCompletion:(id)arg0 ;
-(void)drawingEndedWithCompletion:(id)arg0 ;
-(void)drawingUpdateAllPoints;
-(void)drawingUpdateAllPointsDidTimeoutWithStrokeUUID:(id)arg0 ;
-(void)drawingUpdatePoint:(struct ? )arg0 ;
-(void)maskToRuler;
-(void)reset;
-(void)snapToRuler;
-(void)updateImmutableCount;
-(void)updateRulerSnapping;


@end


#endif