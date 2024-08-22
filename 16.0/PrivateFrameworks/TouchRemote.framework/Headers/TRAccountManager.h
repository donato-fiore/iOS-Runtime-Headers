// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRACCOUNTMANAGER_H
#define TRACCOUNTMANAGER_H


#import <Foundation/Foundation.h>


@interface TRAccountManager : NSObject



+(id)_idmsAccountForAccountWithUsername:(id)arg0 altDSID:(id)arg1 DSID:(id)arg2 ;
+(id)_idmsAccountForGameCenterService;
+(id)_idmsAccountForICloudService;
+(id)_idmsAccountForITunesService;
+(id)_primaryGameCenterAccount;
+(id)_primaryICloudAccount;
+(id)_primaryITunesAccount;
+(id)associatedAccountServicesForIDMSAccount:(id)arg0 ;
+(id)idmsAccountForAccountService:(NSUInteger)arg0 ;


@end


#endif