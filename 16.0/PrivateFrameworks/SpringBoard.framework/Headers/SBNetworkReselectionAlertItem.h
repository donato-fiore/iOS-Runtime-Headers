// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBNETWORKRESELECTIONALERTITEM_H
#define SBNETWORKRESELECTIONALERTITEM_H



#import "SBPhoneAlertItem.h"

@interface SBNetworkReselectionAlertItem : SBPhoneAlertItem



-(id)initWithSlot:(NSInteger)arg0 ;
-(id)lockLabel;
-(id)shortLockLabel;
-(void)_showPrefs;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;
-(void)performUnlockAction;


@end


#endif