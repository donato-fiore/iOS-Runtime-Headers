// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMUTABLEHOMEWALLETKEY_H
#define HMDMUTABLEHOMEWALLETKEY_H

@class NSString, NSURL;


#import "HMDHomeWalletKey.h"
#import "HMDHomeWalletKeySecureElementInfo.h"

@interface HMDMutableHomeWalletKey : HMDHomeWalletKey

@property (copy) NSString *accessCode;
@property (copy) NSURL *changeAccessCodeHomeAppCustomURL;
@property NSInteger color;
@property (copy) NSURL *customURL;
@property (copy) NSString *homeName;
@property (copy) HMDHomeWalletKeySecureElementInfo *nfcInfo;
@property NSInteger state;
@property (copy) NSString *walletKeyDescription;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif