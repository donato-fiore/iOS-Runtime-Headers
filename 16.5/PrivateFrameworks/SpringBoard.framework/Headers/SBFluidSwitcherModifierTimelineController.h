// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFLUIDSWITCHERMODIFIERTIMELINECONTROLLER_H
#define SBFLUIDSWITCHERMODIFIERTIMELINECONTROLLER_H

@class UIWindow, UIWindowScene;

#import <Foundation/Foundation.h>

#import "SBFluidSwitcherModifierTimelineViewController.h"

@interface SBFluidSwitcherModifierTimelineController : NSObject {
    UIWindow *_window;
    SBFluidSwitcherModifierTimelineViewController *_rootViewController;
    UIWindowScene *_windowScene;
}


@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(id)initWithWindowScene:(id)arg0 ;
-(void)addEntry:(id)arg0 ;


@end


#endif