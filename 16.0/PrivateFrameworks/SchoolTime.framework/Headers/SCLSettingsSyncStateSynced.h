// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLSETTINGSSYNCSTATESYNCED_H
#define SCLSETTINGSSYNCSTATESYNCED_H



#import "SCLSettingsSyncState.h"

@interface SCLSettingsSyncStateSynced : SCLSettingsSyncState



-(NSUInteger)status;
-(void)didEnterWithPreviousState:(id)arg0 ;
-(void)settingsDidChange;


@end


#endif