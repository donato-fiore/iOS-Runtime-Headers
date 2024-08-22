// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCORNERPENCILPANGESTURERECOGNIZER_H
#define SBCORNERPENCILPANGESTURERECOGNIZER_H

@class NSString;
@protocol PTSettingsKeyObserver;


#import "SBScreenEdgePanGestureRecognizer.h"
#import "SBTouchHistory.h"

@interface SBCornerPencilPanGestureRecognizer : SBScreenEdgePanGestureRecognizer <PTSettingsKeyObserver>

 {
    SBTouchHistory *_touchHistory;
    NSUInteger _corner;
    CGFloat _cornerHorizontalEdgeLength;
    CGFloat _cornerVerticalEdgeLength;
    NSInteger _touchInterfaceOrientationWhenGestureBegan;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldSupportStylusTouches;
+(NSUInteger)_edgesForCorner:(NSUInteger)arg0 ;
+(id)interactiveCornerPanGestureRecognizerWithSettings:(id)arg0 corner:(NSUInteger)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(BOOL)_isOrientedLocation:(struct CGPoint )arg0 inCorner:(NSUInteger)arg1 forOrientedBounds:(struct CGRect )arg2 withEdgeOffsets:(struct UIOffset )arg3 ;
-(BOOL)shouldReceiveTouch:(id)arg0 ;
-(NSInteger)_touchInterfaceOrientation;
-(id)_initWithSettings:(id)arg0 corner:(NSUInteger)arg1 target:(id)arg2 action:(SEL)arg3 type:(NSInteger)arg4 options:(NSUInteger)arg5 ;
-(struct UIOffset )_edgeOffsets;
-(void)_SBLogTouchesWithMethodName:(id)arg0 withMethodName:(id)arg1 ;
-(void)_convertReferenceLocation:(struct CGPoint )arg0 toOrientedLocation:(struct CGPoint *)arg1 orientedBounds:(struct CGRect *)arg2 ;
-(void)_updateSettingsDerivedValues:(id)arg0 ;
-(void)reset;
-(void)setEdges:(NSUInteger)arg0 ;
-(void)setState:(NSInteger)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif