// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLICATIONSIGNATUREVERSIONUNSUPPORTEDALERTITEM_H
#define SBAPPLICATIONSIGNATUREVERSIONUNSUPPORTEDALERTITEM_H

@class SBAlertItem;


#import "SBApplication.h"

@interface SBApplicationSignatureVersionUnsupportedAlertItem : SBAlertItem {
    SBApplication *_application;
}




-(BOOL)dismissOnLock;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)shouldShowInLockScreen;
-(id)initWithApplication:(id)arg0 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif