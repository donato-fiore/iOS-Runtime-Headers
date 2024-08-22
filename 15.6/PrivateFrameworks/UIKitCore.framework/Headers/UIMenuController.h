// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIMENUCONTROLLER_H
#define UIMENUCONTROLLER_H

@class NSString, NSArray;
@protocol UICalloutBarDelegate;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UIMenuController : NSObject <UICalloutBarDelegate>

 {
    CGRect _targetRect;
    UIView *_targetView;
}


@property (nonatomic) NSInteger arrowDirection; // ivar: _arrowDirection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect menuFrame;
@property (copy, nonatomic) NSArray *menuItems;
@property (nonatomic, getter=isMenuVisible) BOOL menuVisible;
@property (readonly) Class superclass;


+(id)sharedMenuController;
-(BOOL)_menuHidden;
-(BOOL)_updateAnimated:(BOOL)arg0 checkVisible:(BOOL)arg1 ;
-(id)_targetView;
-(id)init;
-(struct CGRect )_targetRect;
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
-(void)setTargetRect:(struct CGRect )arg0 inView:(id)arg1 ;
-(void)showMenuFromView:(id)arg0 rect:(struct CGRect )arg1 ;
-(void)update;


@end


#endif