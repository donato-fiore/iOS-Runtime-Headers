// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSENCRYPTEDIDENTITYCLIENT_H
#define TPSENCRYPTEDIDENTITYCLIENT_H



#import "TPSTelephonyController.h"

@interface TPSEncryptedIdentityClient : TPSTelephonyController



-(id)encryptedIdentityInfoForSubscriptionContext:(id)arg0 type:(NSInteger)arg1 ;
-(id)encryptedIdentityInfoForSubscriptionContext:(id)arg0 type:(NSInteger)arg1 error:(*id)arg2 ;


@end


#endif