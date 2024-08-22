// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSSWIPETEST_H
#define _UIFOCUSSWIPETEST_H

@class UIFocusTest;


#import "UIWindow.h"

@interface _UIFocusSwipeTest : UIFocusTest {
    NSUInteger _eventCount;
    *? _events;
}


@property (nonatomic) NSUInteger swipeAxis; // ivar: _swipeAxis
@property (weak, nonatomic) UIWindow *window; // ivar: _window


-(id)initWithIdentifier:(id)arg0 ;
-(void)main;
-(void)prepareWithCompletionHandler:(id)arg0 ;


@end


#endif