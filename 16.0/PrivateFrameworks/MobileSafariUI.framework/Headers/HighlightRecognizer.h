// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HIGHLIGHTRECOGNIZER_H
#define HIGHLIGHTRECOGNIZER_H

@class UIGestureRecognizer;



@interface HighlightRecognizer : UIGestureRecognizer {
    NSUInteger _numberOfTouches;
}


@property (nonatomic) SEL highlightAction; // ivar: _highlightAction
@property (weak, nonatomic) id *highlightTarget; // ivar: _highlightTarget


-(NSUInteger)numberOfTouches;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif