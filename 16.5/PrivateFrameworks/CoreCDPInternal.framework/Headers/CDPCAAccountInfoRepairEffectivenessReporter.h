// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPCAACCOUNTINFOREPAIREFFECTIVENESSREPORTER_H
#define CDPCAACCOUNTINFOREPAIREFFECTIVENESSREPORTER_H



#import "CDPCAReporter.h"

@interface CDPCAAccountInfoRepairEffectivenessReporter : CDPCAReporter



-(id)init;
-(void)reportRepairAttemptFailedDueToAuthenticationError:(id)arg0 ;
-(void)reportRepairAttemptFinishedWithSuccess:(BOOL)arg0 authenticationError:(id)arg1 accountInfoFetchErrorBeforeRepair:(id)arg2 repairError:(id)arg3 accountInfoFetchErrorAfterRepair:(id)arg4 octagonStatusBefore:(NSUInteger)arg5 octagonStatusAfter:(NSUInteger)arg6 pcsStatusBefore:(NSUInteger)arg7 pcsStatusAfter:(NSUInteger)arg8 escrowKeysStatusBefore:(NSUInteger)arg9 escrowKeysStatusAfter:(NSUInteger)arg10 ;


@end


#endif