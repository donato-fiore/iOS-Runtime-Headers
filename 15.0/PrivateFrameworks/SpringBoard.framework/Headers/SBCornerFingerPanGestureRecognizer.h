// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCORNERFINGERPANGESTURERECOGNIZER_H
#define SBCORNERFINGERPANGESTURERECOGNIZER_H



#import "SBScreenEdgePanGestureRecognizer.h"
#import "SBTouchHistory.h"
#import "SBCornerFingerGestureClassifier.h"

@interface SBCornerFingerPanGestureRecognizer : SBScreenEdgePanGestureRecognizer {
    SBTouchHistory *_touchHistory;
    NSInteger _touchInterfaceOrientationWhenGestureBegan;
    CGPoint _firstTouchReferenceLocation;
    SBCornerFingerGestureClassifier *_classifier;
}


@property (readonly, nonatomic) NSUInteger corner; // ivar: _corner


-(BOOL)_shouldBegin;
-(NSInteger)_touchInterfaceOrientation;
-(NSUInteger)edges;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 corner:(NSUInteger)arg2 classifier:(id)arg3 ;
-(struct CGVector )_convertReferenceVector:(struct CGVector )arg0 toCorner:(NSUInteger)arg1 orientation:(NSInteger)arg2 ;
-(void)_SBLogTouchesWithMethodName:(id)arg0 withMethodName:(id)arg1 ;
-(void)_convertReferenceLocation:(struct CGPoint )arg0 toOrientedLocation:(struct CGPoint *)arg1 orientedBounds:(struct CGRect *)arg2 ;
-(void)reset;
-(void)setEdges:(NSUInteger)arg0 ;
-(void)setState:(NSInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif