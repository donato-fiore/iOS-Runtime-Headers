// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLSETTINGSSYNCSTATESENDING_H
#define SCLSETTINGSSYNCSTATESENDING_H



#import "SCLSettingsSyncState.h"

@interface SCLSettingsSyncStateSending : SCLSettingsSyncState



-(NSUInteger)status;
-(void)message:(id)arg0 failedWithError:(id)arg1 ;
-(void)messageDidSend:(id)arg0 ;
-(void)settingsDidChange;


@end


#endif