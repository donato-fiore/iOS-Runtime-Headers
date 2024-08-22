// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKNOTABLEUSERDATAPROVIDER_H
#define DKNOTABLEUSERDATAPROVIDER_H

@class NSString;
@protocol DKNotableUserDataProvider, DKAccountProvider, DKFindMyProvider, DKStorageProvider, DKTelephonyProvider, DKWalletProvider;

#import <Foundation/Foundation.h>


@interface DKNotableUserDataProvider : NSObject <DKNotableUserDataProvider>



@property (retain, nonatomic) NSObject<DKAccountProvider> *accountProvider; // ivar: _accountProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<DKFindMyProvider> *findMyProvider; // ivar: _findMyProvider
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<DKStorageProvider> *storageProvider; // ivar: _storageProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<DKTelephonyProvider> *telephonyProvider; // ivar: _telephonyProvider
@property (retain, nonatomic) NSObject<DKWalletProvider> *walletProvider; // ivar: _walletProvider


-(id)_createWalletData;
-(id)init;
-(id)initWithAccountProvider:(id)arg0 findMyProvider:(id)arg1 walletProvider:(id)arg2 ;
-(void)fetchNotableUserData:(id)arg0 ;


@end


#endif