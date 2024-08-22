// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOKERBEROSHELPER_H
#define SOKERBEROSHELPER_H


#import <Foundation/Foundation.h>


@interface SOKerberosHelper : NSObject



-(BOOL)_testForUPNForUser:(id)arg0 ;
-(BOOL)authenticate:(struct gss_cred_id_t_desc_struct *)arg0 toServer:(id)arg1 returningToken:(*id)arg2 andError:(*id)arg3 ;
-(BOOL)changePasswordForUPN:(id)arg0 realm:(id)arg1 withOldPassword:(id)arg2 withNewPassword:(id)arg3 withError:(*id)arg4 ;
-(BOOL)getPACForCred:(struct gss_cred_id_t_desc_struct *)arg0 pac:(*id)arg1 ;
-(BOOL)validatePassword:(id)arg0 forUser:(id)arg1 ;
-(id)listCredentials;
-(struct gss_cred_id_t_desc_struct *)acquireCredentialForUPN:(id)arg0 ;
-(struct gss_cred_id_t_desc_struct *)acquireCredentialForUUID:(id)arg0 ;
-(struct gss_cred_id_t_desc_struct *)createCredential:(id)arg0 withOptions:(id)arg1 andError:(*id)arg2 ;
-(unsigned int)createGSSName:(id)arg0 gname:(struct gss_name_t_desc_struct **)arg1 error:(*id)arg2 ;
-(void)destroyAllCredentials;
-(void)destroyCredential:(id)arg0 ;
-(void)destroyCredentialForUPN:(id)arg0 ;


@end


#endif