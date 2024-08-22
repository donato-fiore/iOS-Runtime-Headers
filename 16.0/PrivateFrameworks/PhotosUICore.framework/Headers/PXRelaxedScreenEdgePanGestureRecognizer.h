// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXRELAXEDSCREENEDGEPANGESTURERECOGNIZER_H
#define PXRELAXEDSCREENEDGEPANGESTURERECOGNIZER_H

@class UIPanGestureRecognizer;



@interface PXRelaxedScreenEdgePanGestureRecognizer : UIPanGestureRecognizer {
    CGPoint _initialTouchLocation;
}


@property (nonatomic) UIEdgeInsets edgeAllowances; // ivar: _edgeAllowances
@property (nonatomic) NSUInteger edges; // ivar: _edges
@property (nonatomic) CGFloat minAngleToEdge; // ivar: _minAngleToEdge
@property (nonatomic) CGFloat minTranslation;
@property (nonatomic) NSUInteger trackingEdge; // ivar: _trackingEdge


-(CGFloat)translationDistanceInView:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)setMaximumNumberOfTouches:(NSUInteger)arg0 ;
-(void)setMinimumNumberOfTouches:(NSUInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif