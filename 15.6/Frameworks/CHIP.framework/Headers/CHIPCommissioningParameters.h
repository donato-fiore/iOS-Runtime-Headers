// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPCOMMISSIONINGPARAMETERS_H
#define CHIPCOMMISSIONINGPARAMETERS_H

@class NSData, NSNumber;
@protocol CHIPDeviceAttestationDelegate;

#import <Foundation/Foundation.h>


@interface CHIPCommissioningParameters : NSObject

@property (copy, nonatomic) NSData *CSRNonce; // ivar: _CSRNonce
@property (copy, nonatomic) NSData *attestationNonce; // ivar: _attestationNonce
@property (retain, nonatomic) NSObject<CHIPDeviceAttestationDelegate> *deviceAttestationDelegate; // ivar: _deviceAttestationDelegate
@property (copy, nonatomic) NSNumber *failSafeExpiryTimeoutSecs; // ivar: _failSafeExpiryTimeoutSecs
@property (copy, nonatomic) NSData *threadOperationalDataset; // ivar: _threadOperationalDataset
@property (copy, nonatomic) NSData *wifiCredentials; // ivar: _wifiCredentials
@property (copy, nonatomic) NSData *wifiSSID; // ivar: _wifiSSID




@end


#endif