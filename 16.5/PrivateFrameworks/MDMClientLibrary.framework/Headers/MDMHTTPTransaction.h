// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDMHTTPTRANSACTION_H
#define MDMHTTPTRANSACTION_H

@class DMCHTTPTransaction;



@interface MDMHTTPTransaction : DMCHTTPTransaction

@property (readonly, nonatomic) BOOL isCheckIn; // ivar: _isCheckIn


+(id)reauthRequiredMAIDError;
+(id)reauthRequiredThirdPartyError;
+(id)unauthorizedByServerError;
-(id)initWithURL:(id)arg0 data:(id)arg1 identity:(struct __SecIdentity *)arg2 pinnedCertificates:(id)arg3 pinningRevocationCheckRequired:(BOOL)arg4 signMessage:(BOOL)arg5 isCheckin:(BOOL)arg6 isShortTransaction:(BOOL)arg7 rmAccountID:(id)arg8 ;
-(id)initWithURL:(id)arg0 identity:(struct __SecIdentity *)arg1 pinnedCertificates:(id)arg2 pinningRevocationCheckRequired:(BOOL)arg3 isShortTransaction:(BOOL)arg4 rmAccountID:(id)arg5 ;


@end


#endif