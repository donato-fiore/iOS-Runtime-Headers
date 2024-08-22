// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYBOARDANIMATORANIMATIONSTYLECONTROLLERCONTEXT_H
#define _UIKEYBOARDANIMATORANIMATIONSTYLECONTROLLERCONTEXT_H

@class NSString;
@protocol _UIKeyboardAnimatorState, UIInputViewAnimationHost;

#import <Foundation/Foundation.h>

#import "UIInputViewSetPlacement.h"
#import "UIView.h"

@interface _UIKeyboardAnimatorAnimationStyleControllerContext : NSObject <_UIKeyboardAnimatorState>

 {
    id<UIInputViewAnimationHost> *_host;
    UIInputViewSetPlacement *_start;
    UIInputViewSetPlacement *_end;
}


@property (readonly, retain, nonatomic) UIView *animatingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect endFrame; // ivar: _endFrame
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inputViewsHidden; // ivar: _hidden
@property (readonly, nonatomic) CGRect startFrame; // ivar: _startFrame
@property (readonly) Class superclass;


-(id)initWithHost:(id)arg0 startPlacement:(id)arg1 endPlacement:(id)arg2 ;
-(void)complete;


@end


#endif