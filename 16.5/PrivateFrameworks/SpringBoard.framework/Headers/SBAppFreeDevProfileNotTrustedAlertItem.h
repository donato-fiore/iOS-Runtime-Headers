// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPFREEDEVPROFILENOTTRUSTEDALERTITEM_H
#define SBAPPFREEDEVPROFILENOTTRUSTEDALERTITEM_H

@class SBAlertItem;


#import "SBApplication.h"

@interface SBAppFreeDevProfileNotTrustedAlertItem : SBAlertItem {
    SBApplication *_app;
}




-(BOOL)dismissOnLock;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)shouldShowInLockScreen;
-(id)initWithApp:(id)arg0 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif