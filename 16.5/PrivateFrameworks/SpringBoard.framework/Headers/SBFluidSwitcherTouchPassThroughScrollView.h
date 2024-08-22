// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFLUIDSWITCHERTOUCHPASSTHROUGHSCROLLVIEW_H
#define SBFLUIDSWITCHERTOUCHPASSTHROUGHSCROLLVIEW_H

@class UIScrollView;



@interface SBFluidSwitcherTouchPassThroughScrollView : UIScrollView

@property (nonatomic) CGFloat velocityScaleFactor;


+(BOOL)superclassRespondsToSetVelocityScaleFactor;
+(BOOL)superclassRespondsToVelocityScaleFactor;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif