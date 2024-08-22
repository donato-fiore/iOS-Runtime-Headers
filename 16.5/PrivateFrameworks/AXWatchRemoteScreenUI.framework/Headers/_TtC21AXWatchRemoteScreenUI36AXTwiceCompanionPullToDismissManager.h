// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21AXWATCHREMOTESCREENUI36AXTWICECOMPANIONPULLTODISMISSMANAGER_H
#define _TTC21AXWATCHREMOTESCREENUI36AXTWICECOMPANIONPULLTODISMISSMANAGER_H

@protocol UIViewControllerTransitioningDelegate;

#import <Foundation/Foundation.h>


@interface _TtC21AXWatchRemoteScreenUI36AXTwiceCompanionPullToDismissManager : NSObject <UIViewControllerTransitioningDelegate>

 {
    ? isInteractive;
    ? percentDrivenInteractive;
}




-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)init;
-(id)interactionControllerForDismissal:(id)arg0 ;


@end


#endif