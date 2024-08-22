// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXVIEWPORTDEBUGGEROVERLAYVIEW_H
#define SXVIEWPORTDEBUGGEROVERLAYVIEW_H

@class UIView, UIColor;



@interface SXViewportDebuggerOverlayView : UIView {
    UIColor *_borderColor;
}




-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif