// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPPROFILENOTTRUSTEDALERTITEM_H
#define SBAPPPROFILENOTTRUSTEDALERTITEM_H

@class SBAlertItem;


#import "SBApplication.h"

@interface SBAppProfileNotTrustedAlertItem : SBAlertItem {
    SBApplication *_app;
}




-(BOOL)dismissOnLock;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)shouldShowInLockScreen;
-(id)initWithApp:(id)arg0 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif