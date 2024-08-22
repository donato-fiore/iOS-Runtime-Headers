// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ICQMEGABACKUPEXTENDEXPIRATIONREQUEST_H
#define _ICQMEGABACKUPEXTENDEXPIRATIONREQUEST_H

@class ICQMegaBackupNetworkRequest, ACAccount, NSString, NSDate;



@interface _ICQMegaBackupExtendExpirationRequest : ICQMegaBackupNetworkRequest

@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, copy, nonatomic) NSString *deviceBackupUUID; // ivar: _deviceBackupUUID
@property (readonly, nonatomic, getter=isExtensionAllowed) BOOL extensionAllowed; // ivar: _extensionAllowed
@property (readonly, copy, nonatomic) NSDate *requestedExpirationDate; // ivar: _requestedExpirationDate
@property (readonly, nonatomic) NSDate *updatedExpirationDate; // ivar: _updatedExpirationDate


+(id)extendExpirationRequestWithAccount:(id)arg0 deviceBackupUUID:(id)arg1 requestedExpirationDate:(id)arg2 requestURL:(id)arg3 URLSession:(id)arg4 queue:(id)arg5 error:(*id)arg6 ;
-(id)additionalRequestHeaders;
-(id)bodyJSON;
-(id)handleResponse:(id)arg0 body:(id)arg1 ;
-(void)addAdditionalRequestHeaders:(id)arg0 ;


@end


#endif