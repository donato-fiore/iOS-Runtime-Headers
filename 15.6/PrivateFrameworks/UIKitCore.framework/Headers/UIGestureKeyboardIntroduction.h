// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIGESTUREKEYBOARDINTRODUCTION_H
#define UIGESTUREKEYBOARDINTRODUCTION_H

@class NSTimer;

#import <Foundation/Foundation.h>

#import "UIKeyboardLayoutStar.h"
#import "UIView.h"
#import "UIKBKeyView.h"

@interface UIGestureKeyboardIntroduction : NSObject {
    UIKeyboardLayoutStar *m_layout;
    UIView *m_view;
    UIKBKeyView *m_firstKeyView;
    UIKBKeyView *m_secondKeyView;
    id *m_completionBlock;
    CGFloat m_start;
    NSTimer *m_gestureKeyboardInfoTimer;
    CGPoint m_initPoint;
    BOOL m_isInTransition;
    BOOL m_hasPeeked;
    NSUInteger m_insertedTextLength;
}




-(BOOL)showGestureKeyboardIntroduction;
-(id)initWithLayoutStar:(id)arg0 completion:(id)arg1 ;
-(void)dismissGestureKeyboardIntroduction;
-(void)dismissGestureKeyboardIntroduction:(id)arg0 ;
-(void)insertText:(id)arg0 forKey:(id)arg1 ;
-(void)playGestureKeyboardIntroduction:(id)arg0 ;
-(void)tryGestureKeyboardFromView:(id)arg0 withEvent:(id)arg1 ;


@end


#endif