// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDEMOJIPOPOVERCONTROLLER_H
#define UIKEYBOARDEMOJIPOPOVERCONTROLLER_H

@class NSMutableArray, NSString;
@protocol UIKeyboardLayoutStarDelegate;


#import "UIKeyboardPopoverController.h"
#import "UIKBScreenTraits.h"
#import "UITextInputTraits.h"
#import "UIKeyboardTaskQueue.h"
#import "UIKBTree.h"
#import "UIKBViewForResponderForwarding.h"
#import "UIKeyboardLayoutStar.h"

@interface UIKeyboardEmojiPopoverController : UIKeyboardPopoverController <UIKeyboardLayoutStarDelegate>

 {
    UIKBScreenTraits *_screenTraits;
    UITextInputTraits *_textInputTraits;
    UIKeyboardTaskQueue *_taskQueue;
    UIKBTree *_keyboard;
    NSMutableArray *_hiddenKeys;
    UIKBViewForResponderForwarding *_containerForActiveKeys;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIKeyboardLayoutStar *layout; // ivar: _layout
@property (readonly) Class superclass;


-(BOOL)handleHardwareKeyboardEvent:(id)arg0 ;
-(CGFloat)preferredTextFieldHeight;
-(NSInteger)overrideUserInterfaceStyle;
-(id)initWithTextInputTraits:(id)arg0 ;
-(id)initWithTextInputTraits:(id)arg0 taskQueue:(id)arg1 ;
-(id)initWithTextInputTraits:(id)arg0 taskQueue:(id)arg1 scrollingDirection:(NSInteger)arg2 ;
-(id)initWithTextInputTraits:(id)arg0 taskQueue:(id)arg1 scrollingDirection:(NSInteger)arg2 window:(id)arg3 ;
-(id)initWithTextInputTraits:(id)arg0 taskQueue:(id)arg1 window:(id)arg2 ;
-(id)keyboardLayout:(id)arg0 containingViewForActiveKey:(id)arg1 inKeyplaneView:(id)arg2 ;
-(id)keyboardLayout:(id)arg0 willChangeRenderConfig:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)dealloc;
-(void)keyboardLayout:(id)arg0 didSwitchToKeyplane:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif