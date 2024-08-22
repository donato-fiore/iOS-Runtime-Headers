// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSBIOMETRICSSERVICE_H
#define SBSBIOMETRICSSERVICE_H



#import "SBSAbstractSystemService.h"

@interface SBSBiometricsService : SBSAbstractSystemService



-(void)_acquireBiometricAssertionOfType:(unsigned char)arg0 assertionName:(id)arg1 reason:(id)arg2 completion:(id)arg3 ;
-(void)acquireUnlockSuppressionAssertionForReason:(id)arg0 completion:(id)arg1 ;
-(void)acquireWalletPreArmSuppressionAssertionForReason:(id)arg0 completion:(id)arg1 ;
-(void)fetchUnlockCredentialSetWithCompletion:(id)arg0 ;


@end


#endif