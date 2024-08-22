// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AADEVICELIST_H
#define AADEVICELIST_H

@class AKAppleIDAuthenticationController, AIDAAccountManager, NSArray, NSError;
@protocol AADeviceListDelegate;

#import <Foundation/Foundation.h>


@interface AADeviceList : NSObject {
    AKAppleIDAuthenticationController *_authController;
    AIDAAccountManager *_accountManager;
}


@property (weak, nonatomic) NSObject<AADeviceListDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSArray *devices; // ivar: _devices
@property (readonly, nonatomic) NSError *loadError; // ivar: _loadError


-(id)_accountStore;
-(id)_aidaAccount;
-(id)_appleAccount;
-(id)_authController;
-(id)initWithAccountManager:(id)arg0 ;
-(void)_createRequestForAccount:(id)arg0 requestHandler:(id)arg1 ;
-(void)_loadDeviceList;
-(void)_loadRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_renewCredentials;
-(void)_setDeviceList:(id)arg0 loadError:(id)arg1 ;
-(void)refreshDeviceList;


@end


#endif