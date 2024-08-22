// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPLICATIONSIGNATUREVERSIONREPAIRALERTITEM_H
#define SBAPPLICATIONSIGNATUREVERSIONREPAIRALERTITEM_H

@class SBAlertItem;


#import "SBApplication.h"

@interface SBApplicationSignatureVersionRepairAlertItem : SBAlertItem {
    SBApplication *_application;
}




-(BOOL)dismissOnLock;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)shouldShowInLockScreen;
-(id)initWithApplication:(id)arg0 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif