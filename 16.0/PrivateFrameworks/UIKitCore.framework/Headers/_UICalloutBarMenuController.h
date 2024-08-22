// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICALLOUTBARMENUCONTROLLER_H
#define _UICALLOUTBARMENUCONTROLLER_H

@class NSString;
@protocol UICalloutBarDelegate;


#import "UIMenuController.h"
#import "UIView.h"

@interface _UICalloutBarMenuController : UIMenuController <UICalloutBarDelegate>

 {
    CGRect _targetRect;
    UIView *_targetView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_menuHidden;
-(BOOL)_updateAnimated:(BOOL)arg0 checkVisible:(BOOL)arg1 ;
-(BOOL)isMenuVisible;
-(id)_asCalloutBarDelegate;
-(id)_targetView;
-(id)menuItems;
-(struct CGRect )_targetRect;
-(struct CGRect )menuFrame;
-(void)_hideMenuAnimated:(BOOL)arg0 ;
-(void)_removeWindowWillRotateObserver;
-(void)_reparentCalloutBarIfNeeded;
-(void)_setTargetRect:(struct CGRect )arg0 inView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_showMenuAnimated:(BOOL)arg0 ;
-(void)_windowWillRotate:(id)arg0 ;
-(void)calloutBar:(id)arg0 didFinishAnimation:(id)arg1 ;
-(void)calloutBar:(id)arg0 willStartAnimation:(id)arg1 ;
-(void)dealloc;
-(void)hideMenu;
-(void)hideMenuFromView:(id)arg0 ;
-(void)setMenuItems:(id)arg0 ;
-(void)setMenuVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setTargetRect:(struct CGRect )arg0 inView:(id)arg1 ;
-(void)showMenuFromView:(id)arg0 rect:(struct CGRect )arg1 ;
-(void)update;


@end


#endif