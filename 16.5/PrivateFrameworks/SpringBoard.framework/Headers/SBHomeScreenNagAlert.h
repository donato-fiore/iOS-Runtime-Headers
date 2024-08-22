// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMESCREENNAGALERT_H
#define SBHOMESCREENNAGALERT_H



#import "SBDismissOnlyAlertItem.h"

@interface SBHomeScreenNagAlert : SBDismissOnlyAlertItem



-(BOOL)dismissOnLock;
-(BOOL)shouldShowInLockScreen;


@end


#endif