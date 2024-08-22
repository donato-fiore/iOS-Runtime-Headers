// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKHORIZONTALDRAGRECOGNIZER_H
#define TSKHORIZONTALDRAGRECOGNIZER_H

@class UIGestureRecognizer, UIScrollView;



@interface TSKHorizontalDragRecognizer : UIGestureRecognizer {
    CGPoint mStartPoint;
}


@property (nonatomic) UIScrollView *containingScrollView; // ivar: mContainingScrollView


-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif