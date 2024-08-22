// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POKERBEROSHELPER_H
#define POKERBEROSHELPER_H


#import <Foundation/Foundation.h>


@interface POKerberosHelper : NSObject



-(BOOL)checkForValidKerberosTGT:(id)arg0 ;
-(id)importKerberosEntry:(id)arg0 error:(*id)arg1 ;
-(struct gss_cred_id_t_desc_struct *)acquireCredentialForUUID:(id)arg0 ;
-(void)exchangeKerberosTGTForEntry:(id)arg0 ;


@end


#endif