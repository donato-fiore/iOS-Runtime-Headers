// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSHORIZONTALSCROLLFAILURERECOGNIZER_H
#define CSHORIZONTALSCROLLFAILURERECOGNIZER_H

@class UIGestureRecognizer, NSMutableSet, NSArray, NSString, UIEvent;
@protocol PTSettingsKeyObserver;



@interface CSHorizontalScrollFailureRecognizer : UIGestureRecognizer <PTSettingsKeyObserver>

 {
    CGPoint _startingLocation;
    CGFloat _effectiveTopAngle;
    CGFloat _effectiveBottomAngle;
    NSMutableSet *_touches;
    BOOL _tracking;
    NSArray *_debugViews;
    BOOL _armed;
    BOOL _externallyEnabled;
}


@property (nonatomic) BOOL allowMultiTouch; // ivar: _allowMultiTouch
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maxAllowableVerticalOffset; // ivar: _maxAllowableVerticalOffset
@property (nonatomic) CGFloat maxAllowedBottomAngle; // ivar: _maxAllowedBottomAngle
@property (nonatomic) CGFloat maxAllowedTopAngle; // ivar: _maxAllowedTopAngle
@property (nonatomic) CGFloat minAllowedBottomAngle; // ivar: _minAllowedBottomAngle
@property (nonatomic) CGFloat minAllowedTopAngle; // ivar: _minAllowedTopAngle
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIEvent *triggeredEvent; // ivar: _triggeredEvent
@property (nonatomic) BOOL viewDebugArea; // ivar: _viewDebugArea


-(BOOL)_effectivelyEnabled;
-(BOOL)_isLocationOutOfBounds:(struct CGPoint )arg0 ;
-(BOOL)_isOutOfBounds:(struct CGPoint )arg0 forAngle:(CGFloat)arg1 ;
-(BOOL)_isOutOfBoundsVertically:(struct CGPoint )arg0 ;
-(BOOL)_recognizeForMultiTouchIfNecessary:(id)arg0 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)isEnabled;
-(CGFloat)_computeEffectiveAngleFromMin:(CGFloat)arg0 max:(CGFloat)arg1 ;
-(CGFloat)_effectiveBottomAngle;
-(CGFloat)_effectiveTopAngle;
-(CGFloat)_maxAllowableVerticalOffsetForPoint:(struct CGPoint )arg0 ;
-(NSInteger)_activeTouchCountForEvent:(id)arg0 ;
-(id)_touchesFromEvent:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )_averagePointFromTouches;
-(struct CGPoint )_locationOfTouch:(id)arg0 inView:(id)arg1 ;
-(void)_loadFromSettings:(id)arg0 ;
-(void)_setArmed:(BOOL)arg0 ;
-(void)_setDebugViewsColor:(id)arg0 ;
-(void)_setDebugViewsVisible:(BOOL)arg0 ;
-(void)_updateEnabled;
-(void)dealloc;
-(void)reset;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setState:(NSInteger)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif