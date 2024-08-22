// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICQMEGABACKUPELIGIBILITYREQUEST_H
#define _ICQMEGABACKUPELIGIBILITYREQUEST_H

@class ICQMegaBackupNetworkRequest, ACAccount, NSNumber, NSString;



@interface _ICQMegaBackupEligibilityRequest : ICQMegaBackupNetworkRequest

@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic, getter=isBackupAllowed) BOOL backupAllowed; // ivar: _backupAllowed
@property (readonly, nonatomic) NSNumber *daysUntilExpiration; // ivar: _daysUntilExpiration
@property (readonly, copy, nonatomic) NSString *deepLinkURL; // ivar: _deepLinkURL
@property (readonly, copy, nonatomic) NSString *deviceBackupUUID; // ivar: _deviceBackupUUID
@property (readonly, copy, nonatomic) NSNumber *deviceTotalUsedSpaceInBytes; // ivar: _deviceTotalUsedSpaceInBytes
@property (readonly, nonatomic) NSInteger entryMethod; // ivar: _entryMethod
@property (readonly, nonatomic) BOOL needsTemporaryStorage; // ivar: _needsTemporaryStorage


+(id)eligibilityRequestWithAccount:(id)arg0 deviceBackupUUID:(id)arg1 deviceTotalUsedSpaceInBytes:(id)arg2 entryMethod:(NSInteger)arg3 deepLinkURL:(id)arg4 requestURL:(id)arg5 URLSession:(id)arg6 queue:(id)arg7 error:(*id)arg8 ;
-(id)additionalRequestHeaders;
-(id)bodyJSON;
-(id)handleResponse:(id)arg0 body:(id)arg1 ;
-(void)addAdditionalRequestHeaders:(id)arg0 ;


@end


#endif