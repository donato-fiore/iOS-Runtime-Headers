// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPACCOUNT_H
#define CDPACCOUNT_H


#import <Foundation/Foundation.h>


@interface CDPAccount : NSObject



+(BOOL)checkIfAltDSIDIsBeneficiary:(id)arg0 ;
+(BOOL)isHSA2Enabled:(id)arg0 ;
+(BOOL)isICDPEnabledForDSID:(id)arg0 ;
+(BOOL)isICDPEnabledForDSID:(id)arg0 checkWithServer:(BOOL)arg1 ;
+(id)_authKitAccountWith:(id)arg0 ;
+(id)altDSIDForPersonID:(id)arg0 ;
+(id)appleAccountForAltDSID:(id)arg0 ;
+(id)cdpContextForUsername:(id)arg0 ;
+(id)contextForAccountWithAltDSID:(id)arg0 ;
+(id)personIDForAltDSID:(id)arg0 ;
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
-(id)primaryAuthKitAccount;


@end


#endif