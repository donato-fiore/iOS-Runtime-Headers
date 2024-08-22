// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKFREETRANSFORMGESTURERECOGNIZER_H
#define PKFREETRANSFORMGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSMapTable, NSMutableOrderedSet;



@interface PKFreeTransformGestureRecognizer : UIGestureRecognizer

@property (nonatomic) CGAffineTransform accumulatedTransform; // ivar: _accumulatedTransform
@property (retain, nonatomic) NSMapTable *actualTouchStartLocations; // ivar: _actualTouchStartLocations
@property (nonatomic) BOOL allowSingleTouchDrag; // ivar: _allowSingleTouchDrag
@property (nonatomic) NSUInteger allowedPanEdges; // ivar: _allowedPanEdges
@property (nonatomic) BOOL axisAligned; // ivar: _axisAligned
@property (nonatomic) BOOL canBegin; // ivar: _canBegin
@property (nonatomic) CGFloat cancelThreshold; // ivar: _cancelThreshold
@property (nonatomic) CGFloat deltaScale; // ivar: _deltaScale
@property (readonly, nonatomic) CGAffineTransform freeTransform;
@property (nonatomic) BOOL isPanning; // ivar: _isPanning
@property (nonatomic) BOOL isScaling; // ivar: _isScaling
@property (nonatomic) CGFloat maxScale; // ivar: _maxScale
@property (nonatomic) CGFloat minScale; // ivar: _minScale
@property (nonatomic) CGFloat previousScale; // ivar: _previousScale
@property (readonly, nonatomic) CGFloat scale;
@property (nonatomic) CGFloat scaleDamping; // ivar: _scaleDamping
@property (readonly, nonatomic) BOOL scaleIsGrowing;
@property (readonly, nonatomic) BOOL scaleIsShrinking;
@property (nonatomic) CGFloat scaleThreshold; // ivar: _scaleThreshold
@property (nonatomic) CGFloat startThreshold; // ivar: _startThreshold
@property (retain, nonatomic) NSMapTable *touchStartLocations; // ivar: _touchStartLocations
@property (readonly, nonatomic) NSMutableOrderedSet *touches; // ivar: _touches
@property (readonly, nonatomic) CGAffineTransform unscaledFreeTransform;


-(BOOL)touchesMovedPastScaleThreshold:(CGFloat)arg0 ;
-(BOOL)touchesMovedPastThreshold:(CGFloat)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGAffineTransform )clampTransform:(struct CGAffineTransform )arg0 minScale:(CGFloat)arg1 maxScale:(CGFloat)arg2 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)clearTouches;
-(void)reset;
-(void)resetAndAccumulateTransform;
-(void)resetStartingTouches;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 rejectExcessTouches:(BOOL)arg2 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif