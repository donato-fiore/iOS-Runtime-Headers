// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKKEYBOARDMONITOR_H
#define TSKKEYBOARDMONITOR_H

@class NSMutableArray, UIWindow;
@protocol TSKKeyboardObserver;

#import <Foundation/Foundation.h>


@interface TSKKeyboardMonitor : NSObject {
    BOOL _weAreFakingAHideEvent;
    BOOL _lastHideWasFake;
    BOOL _suppressDidHide;
    *__CFArray _keyboardObservers;
    NSMutableArray *_completionBlocks;
    id<TSKKeyboardObserver> *_exclusiveKeyboardObserver;
}


@property (readonly) CGFloat keyboardAnimationDuration; // ivar: _keyboardAnimationDuration
@property (readonly) CGRect keyboardFrame; // ivar: _keyboardFrame
@property (readonly) BOOL keyboardIsAnimating;
@property (readonly) BOOL keyboardIsAnimatingInOrDocking; // ivar: _keyboardIsAnimatingInOrDocking
@property (readonly) BOOL keyboardIsAnimatingOutOrUndocking; // ivar: _keyboardIsAnimatingOutOrUndocking
@property (readonly) BOOL keyboardIsVisibleAndDocked; // ivar: _keyboardIsVisibleAndDocked
@property (readonly) CGFloat onScreenHeight; // ivar: _onScreenHeight
@property (nonatomic) UIWindow *rootWindow; // ivar: _rootWindow


+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedKeyboardMonitor;
+(void)addKeyboardObserver:(id)arg0 ;
+(void)afterKeyboardAnimationPerformBlock:(id)arg0 ;
+(void)removeKeyboardObserver:(id)arg0 ;
+(void)setKeyboardHiddenByModalObserver:(id)arg0 ;
+(void)setModalKeyboardObserver:(id)arg0 ;
-(CGFloat)keyboardHeightInView:(id)arg0 ;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)retain;
-(void)addKeyboardObserver:(id)arg0 ;
-(void)afterKeyboardAnimationPerformBlock:(id)arg0 ;
-(void)dealloc;
-(void)p_KeyboardDidChangeFrame:(id)arg0 ;
-(void)p_KeyboardWillChangeFrame:(id)arg0 ;
-(void)p_enumerateObserversUsingBlock:(id)arg0 ;
-(void)p_installKeyboardNotifications;
-(void)p_keyboardDidHideOrUndock:(id)arg0 ;
-(void)p_keyboardDidShowOrDock:(id)arg0 ;
-(void)p_keyboardWillHideOrUndock:(id)arg0 ;
-(void)p_keyboardWillShowOrDock:(id)arg0 ;
-(void)p_performAnimationCompletionBlocksWithVisible:(BOOL)arg0 ;
-(void)p_removeKeyboardNotifications;
-(void)p_updateKeyboardInfoFromNotification:(id)arg0 ;
-(void)release;
-(void)removeKeyboardObserver:(id)arg0 ;
-(void)setKeyboardHiddenByModalObserver:(id)arg0 ;
-(void)setModalKeyboardObserver:(id)arg0 ;


@end


#endif