// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLUIDSWITCHERMULTIPLEWINDOWSINDICATORVIEW_H
#define SBFLUIDSWITCHERMULTIPLEWINDOWSINDICATORVIEW_H

@class UIImageView, UIPointerInteraction, NSString;
@protocol UIPointerInteractionDelegate;



@interface SBFluidSwitcherMultipleWindowsIndicatorView : UIImageView <UIPointerInteractionDelegate>

 {
    UIPointerInteraction *_pointerInteraction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )_hitTestBounds;


@end


#endif