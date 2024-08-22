// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPDEVELOPERMODEREQUIREDALERTITEM_H
#define SBAPPDEVELOPERMODEREQUIREDALERTITEM_H

@class SBAlertItem;


#import "SBApplication.h"

@interface SBAppDeveloperModeRequiredAlertItem : SBAlertItem {
    SBApplication *_application;
}




-(BOOL)dismissOnLock;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)shouldShowInLockScreen;
-(id)initWithApplication:(id)arg0 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif