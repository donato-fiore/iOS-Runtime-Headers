// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFAIRPLAYFAMILYLEAVEALERTITEM_H
#define SBFAIRPLAYFAMILYLEAVEALERTITEM_H

@class SBAlertItem, FBSApplicationInfo;



@interface SBFairPlayFamilyLeaveAlertItem : SBAlertItem

@property (retain, nonatomic) FBSApplicationInfo *appInfo; // ivar: _appInfo


-(BOOL)dismissOnLock;
-(id)initWithAppInfo:(id)arg0 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif