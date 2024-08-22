// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOCKTOAPPSTATUSBARANIMATOR_H
#define SBLOCKTOAPPSTATUSBARANIMATOR_H


#import <Foundation/Foundation.h>

#import "SBDisableAppStatusBarAlphaChangesAssertion.h"

@interface SBLockToAppStatusBarAnimator : NSObject {
    SBDisableAppStatusBarAlphaChangesAssertion *_disableStatusBarAlphaChangeAssertion;
}




-(void)animateStatusBarFromLockToHome;


@end


#endif