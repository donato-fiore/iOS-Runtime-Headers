// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBVPPAPPREQUIRESHEALINGALERTITEM_H
#define SBVPPAPPREQUIRESHEALINGALERTITEM_H

@class SBAlertItem;


#import "SBApplication.h"

@interface SBVPPAppRequiresHealingAlertItem : SBAlertItem {
    SBApplication *_application;
}




-(BOOL)dismissOnLock;
-(BOOL)shouldShowInLockScreen;
-(id)initWithApplication:(id)arg0 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif