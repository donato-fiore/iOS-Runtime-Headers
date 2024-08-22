// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINPUTSWITCHERGESTURESTATE_H
#define UIINPUTSWITCHERGESTURESTATE_H


#import <Foundation/Foundation.h>


@interface UIInputSwitcherGestureState : NSObject

@property (nonatomic) BOOL didMoveBeyondThreshold; // ivar: _didMoveBeyondThreshold
@property (nonatomic) CGPoint firstReferencePoint; // ivar: _firstReferencePoint
@property (nonatomic) BOOL hideSwitcher; // ivar: _hideSwitcher
@property (nonatomic) CGFloat lastSeenKeyboardTouchDown; // ivar: _lastSeenKeyboardTouchDown
@property (nonatomic) CGFloat touchDown; // ivar: _touchDown


-(BOOL)gestureConflictsWithTypingWindow;


@end


#endif