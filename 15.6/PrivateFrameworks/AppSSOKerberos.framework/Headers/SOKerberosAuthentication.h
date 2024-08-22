// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SOKERBEROSAUTHENTICATION_H
#define SOKERBEROSAUTHENTICATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SOKerberosHelper.h"
#import "SOKeychainHelper.h"
#import "SOADSiteDiscovery.h"

@interface SOKerberosAuthentication : NSObject

@property (retain) SOKerberosHelper *kerberosHelper; // ivar: _kerberosHelper
@property (retain) SOKeychainHelper *keychainHelper; // ivar: _keychainHelper
@property (retain, nonatomic) NSString *realm; // ivar: _realm
@property (retain) SOADSiteDiscovery *siteDiscovery; // ivar: _siteDiscovery
@property BOOL siteDiscoveryInProgress; // ivar: _siteDiscoveryInProgress


+(void)savePacValues:(id)arg0 atLogin:(BOOL)arg1 ;
+(void)saveValuesForPlugins:(id)arg0 ;
-(?)createNewCredentialUsingContext:(?)arg0 returningCredentialorError;
-(?)findExistingCredentialUsingContext:(?)arg0 returningCredentialorError;
-(BOOL)changePasswordWithContext:(id)arg0 withError:(*id)arg1 ;
-(BOOL)refreshPacValuesWithContext:(id)arg0 atLogin:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)refreshPacValuesWithContext:(id)arg0 credential:(struct gss_cred_id_t_desc_struct *)arg1 atLogin:(BOOL)arg2 ;
-(NSUInteger)attemptKerberosWithContext:(id)arg0 returningToken:(*id)arg1 orError:(*id)arg2 ;
-(NSUInteger)mapErrorToKnownError:(id)arg0 ;
-(id)initWithRealm:(id)arg0 ;
-(id)retrieveCachedSiteCodeFromCacheForBundleIdentifier:(id)arg0 networkFingerprint:(id)arg1 ;
-(void)_determineSiteCodeUsingDispatchGroup:(id)arg0 bundleIdentifier:(id)arg1 auditTokenData:(id)arg2 networkFingerprint:(id)arg3 requireTLSForLDAP:(BOOL)arg4 ;
-(void)determineSiteCodeUsingContext:(id)arg0 ;
-(void)setSiteCodeUsingContext:(id)arg0 ;
-(void)triggerVPNIfNeededUsingRealm:(id)arg0 bundleIdentifier:(id)arg1 auditToken:(id)arg2 ;


@end


#endif