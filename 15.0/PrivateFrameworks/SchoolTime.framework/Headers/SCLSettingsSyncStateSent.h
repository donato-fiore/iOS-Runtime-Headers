// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLSETTINGSSYNCSTATESENT_H
#define SCLSETTINGSSYNCSTATESENT_H



#import "SCLSettingsSyncState.h"

@interface SCLSettingsSyncStateSent : SCLSettingsSyncState



-(NSUInteger)status;
-(void)didEnterWithPreviousState:(id)arg0 ;
-(void)message:(id)arg0 didFailToAcknowledgeWithError:(id)arg1 ;
-(void)messageWasDelivered:(id)arg0 ;
-(void)settingsDidChange;
-(void)xpcActivityStarted;


@end


#endif