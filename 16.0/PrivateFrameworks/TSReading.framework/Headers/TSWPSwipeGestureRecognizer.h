// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPSWIPEGESTURERECOGNIZER_H
#define TSWPSWIPEGESTURERECOGNIZER_H

@class UIGestureRecognizer, TSUPointerKeyDictionary;



@interface TSWPSwipeGestureRecognizer : UIGestureRecognizer {
    CGFloat mStartTime;
    NSUInteger mTouchCountAttained;
    TSUPointerKeyDictionary *mStartLocations;
}


@property (nonatomic) int direction; // ivar: mDirection
@property (nonatomic) NSUInteger numberOfTouchesRequired; // ivar: mNumberOfTouchesRequired


-(BOOL)p_swipeDirectionValidForAngle:(CGFloat)arg0 direction:(int)arg1 ;
-(BOOL)p_swipeDirectionValidForXDiff:(CGFloat)arg0 yDiff:(CGFloat)arg1 ;
-(BOOL)p_touchWasSwipe:(id)arg0 movedFarOut:(*BOOL)arg1 ;
-(CGFloat)p_angleDifferenceForAngle1:(CGFloat)arg0 angle2:(CGFloat)arg1 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)dealloc;
-(void)p_recordTouches:(id)arg0 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif