// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSLINEARMOVEMENTDEBUGGESTURERECOGNIZER_H
#define _UIFOCUSLINEARMOVEMENTDEBUGGESTURERECOGNIZER_H

@class NSMutableSet;


#import "UIGestureRecognizer.h"
#import "UIPress.h"

@interface _UIFocusLinearMovementDebugGestureRecognizer : UIGestureRecognizer {
    UIPress *_press;
    BOOL _allowsGroupMode;
    NSMutableSet *_presses;
}


@property (nonatomic, getter=isGroupMode) BOOL groupMode; // ivar: _groupMode


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 allowsGroupMode:(BOOL)arg2 ;
-(void)_update;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)reset;


@end


#endif