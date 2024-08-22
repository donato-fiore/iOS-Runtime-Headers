// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCLSETTINGSSYNCSTATEFAILED_H
#define SCLSETTINGSSYNCSTATEFAILED_H



#import "SCLSettingsSyncState.h"

@interface SCLSettingsSyncStateFailed : SCLSettingsSyncState



-(NSUInteger)status;
-(id)retryCriteriaWithInterval:(NSInteger)arg0 ;
-(void)didEnterWithPreviousState:(id)arg0 ;
-(void)settingsDidChange;
-(void)significantUserInteractionOccurred;
-(void)transitionToPendingState;
-(void)xpcActivityStarted;


@end


#endif