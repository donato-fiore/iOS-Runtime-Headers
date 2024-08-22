// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKUILAYERHOSTVIEW_H
#define CLKUILAYERHOSTVIEW_H

@class UIView;



@interface CLKUILayerHostView : UIView

@property (weak, nonatomic) UIView *superviewDelegate; // ivar: _superviewDelegate


-(BOOL)pointInside:(struct CGPoint )arg0 forEvent:(struct __GSEvent *)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)superview;


@end


#endif