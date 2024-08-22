// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYBOARDANIMATORANIMATIONSTYLECONTROLLER_H
#define _UIKEYBOARDANIMATORANIMATIONSTYLECONTROLLER_H

@class NSString;
@protocol UIInputViewAnimationController;

#import <Foundation/Foundation.h>

#import "_UIKeyboardAnimator.h"

@interface _UIKeyboardAnimatorAnimationStyleController : NSObject <UIInputViewAnimationController>

 {
    _UIKeyboardAnimator *_animator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAnimator:(id)arg0 ;
-(id)prepareAnimationWithHost:(id)arg0 startPlacement:(id)arg1 endPlacement:(id)arg2 ;
-(void)completeAnimationWithHost:(id)arg0 context:(id)arg1 ;
-(void)performAnimationWithHost:(id)arg0 context:(id)arg1 ;


@end


#endif