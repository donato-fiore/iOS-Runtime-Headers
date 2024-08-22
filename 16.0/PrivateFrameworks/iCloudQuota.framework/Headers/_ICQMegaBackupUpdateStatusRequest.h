// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICQMEGABACKUPUPDATESTATUSREQUEST_H
#define _ICQMEGABACKUPUPDATESTATUSREQUEST_H

@class ICQMegaBackupNetworkRequest, ACAccount, NSString, NSDate;



@interface _ICQMegaBackupUpdateStatusRequest : ICQMegaBackupNetworkRequest

@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, copy, nonatomic) NSString *deviceBackupUUID; // ivar: _deviceBackupUUID
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) NSInteger status; // ivar: _status


+(id)updateStatusRequestWithAccount:(id)arg0 deviceBackupUUID:(id)arg1 status:(NSInteger)arg2 requestURL:(id)arg3 URLSession:(id)arg4 queue:(id)arg5 error:(*id)arg6 ;
-(id)additionalRequestHeaders;
-(id)bodyJSON;
-(id)handleResponse:(id)arg0 body:(id)arg1 ;
-(void)addAdditionalRequestHeaders:(id)arg0 ;


@end


#endif