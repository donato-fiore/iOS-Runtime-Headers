// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFTOUCHPASSTHROUGHWINDOW_H
#define SBFTOUCHPASSTHROUGHWINDOW_H

@class UIWindow;



@interface SBFTouchPassThroughWindow : UIWindow



+(Class)touchPassThroughRootViewControllerClass;
-(id)description;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithScreen:(id)arg0 role:(id)arg1 debugName:(id)arg2 ;


@end


#endif