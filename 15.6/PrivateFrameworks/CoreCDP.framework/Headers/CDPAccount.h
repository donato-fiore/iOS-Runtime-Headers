// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPACCOUNT_H
#define CDPACCOUNT_H


#import <Foundation/Foundation.h>


@interface CDPAccount : NSObject



+(BOOL)isICDPEnabledForDSID:(id)arg0 ;
+(BOOL)isICDPEnabledForDSID:(id)arg0 checkWithServer:(BOOL)arg1 ;
+(id)sharedInstance;
-(BOOL)primaryAccountIsBeneficiary;
-(NSUInteger)primaryAccountSecurityLevel;
-(id)authToken;
-(id)contextForPrimaryAccount;
-(id)escrowURL;
-(id)iCloudEnv;
-(id)primaryAccountAltDSID;
-(id)primaryAccountDSID;
-(id)primaryAccountFirstName;
-(id)primaryAccountFullName;
-(id)primaryAccountStashedPRK;
-(id)primaryAccountUsername;
-(id)primaryAppleAccount;


@end


#endif