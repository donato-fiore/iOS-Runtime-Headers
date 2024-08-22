// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDPOPOVERCONTROLLER_H
#define UIKEYBOARDPOPOVERCONTROLLER_H

@class NSString, NSMutableArray;
@protocol UIKeyboardLayoutStarDelegate;


#import "UIViewController.h"
#import "UIKeyboardLayoutStar.h"
#import "UIKBScreenTraits.h"
#import "UITextInputTraits.h"
#import "UIKeyboardTaskQueue.h"
#import "UIKBTree.h"
#import "UIKBViewForResponderForwarding.h"

@interface UIKeyboardPopoverController : UIViewController <UIKeyboardLayoutStarDelegate>

 {
    NSString *_inputMode;
    UIKeyboardLayoutStar *_layout;
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
@property (readonly, nonatomic) NSString *inputModeIdentifier;
@property (readonly, nonatomic) UIKeyboardLayoutStar *layout;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)handleHardwareKeyboardEvent:(id)arg0 ;
-(CGFloat)preferredTextFieldHeight;
-(NSInteger)overrideUserInterfaceStyle;
-(id)initWithInputModeIdentifier:(id)arg0 textInputTraits:(id)arg1 taskQueue:(id)arg2 ;
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