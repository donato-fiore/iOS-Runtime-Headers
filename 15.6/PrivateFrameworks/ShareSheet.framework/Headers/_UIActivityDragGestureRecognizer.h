// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIACTIVITYDRAGGESTURERECOGNIZER_H
#define _UIACTIVITYDRAGGESTURERECOGNIZER_H

@class UILongPressGestureRecognizer, UIAutoscroll, NSString, UIScrollView;
@protocol UIAutoscrollDelegate, _UIScrollViewScrollObserver;



@interface _UIActivityDragGestureRecognizer : UILongPressGestureRecognizer <UIAutoscrollDelegate, _UIScrollViewScrollObserver>



@property (retain, nonatomic) UIAutoscroll *autoscroll; // ivar: _autoscroll
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIEdgeInsets draggingInsets; // ivar: _draggingInsets
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIScrollView *targetScrollView; // ivar: _targetScrollView


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(int)autoscrollDirectionsForPoint:(struct CGPoint )arg0 inView:(id)arg1 ;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)beginAutoscrollAndUpdateDirectionIfNeeded;
-(void)cancelAutoscroll;
-(void)reset;
-(void)setState:(NSInteger)arg0 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateAutoscroll:(id)arg0 ;


@end


#endif