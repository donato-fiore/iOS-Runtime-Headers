// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPEDITMENUCONTROLLER_H
#define TSWPEDITMENUCONTROLLER_H

@class NSString, UIView;
@protocol TSKKeyboardObserver;

#import <Foundation/Foundation.h>


@interface TSWPEditMenuController : NSObject <TSKKeyboardObserver>

 {
    int _menuState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isBeginningEditing; // ivar: _isBeginningEditing
@property (nonatomic) BOOL showMenuOnKeyboard; // ivar: _showMenuOnKeyboard
@property (readonly) Class superclass;
@property (nonatomic) CGRect targetRect; // ivar: _targetRect
@property (weak, nonatomic) UIView *targetView; // ivar: _targetView


+(BOOL)isAnimating;
+(id)p_sharedEditMenuController;
+(id)sharedEditMenuController;
+(int)menuState;
+(void)hideEditMenu;
+(void)showEditMenuAtTargetRect:(struct CGRect )arg0 canCenterHUD:(BOOL)arg1 interactiveCanvasController:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)keyboardDidHideOrUndock:(id)arg0 ;
-(void)keyboardDidShowOrDock:(id)arg0 ;
-(void)p_clearIsBeginningEditing;
-(void)p_didAnimateKeyboard;
-(void)p_didHideMenu:(id)arg0 ;
-(void)p_didShowMenu:(id)arg0 ;
-(void)p_setMenuVisible:(id)arg0 ;
-(void)p_willHideMenu:(id)arg0 ;
-(void)p_willShowMenu:(id)arg0 ;


@end


#endif