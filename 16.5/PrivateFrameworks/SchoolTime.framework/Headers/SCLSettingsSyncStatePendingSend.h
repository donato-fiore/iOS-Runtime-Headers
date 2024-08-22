// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLSETTINGSSYNCSTATEPENDINGSEND_H
#define SCLSETTINGSSYNCSTATEPENDINGSEND_H



#import "SCLSettingsSyncState.h"

@interface SCLSettingsSyncStatePendingSend : SCLSettingsSyncState



-(NSUInteger)status;
-(void)commitSettings;
-(void)didEnqueueMessage:(id)arg0 ;
-(void)didEnterWithPreviousState:(id)arg0 ;
-(void)enqueueFailedWithError:(id)arg0 ;
-(void)settingsDidChange;
-(void)significantUserInteractionOccurred;
-(void)xpcActivityStarted;


@end


#endif