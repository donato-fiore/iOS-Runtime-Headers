// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCOMMISSIONINGPARAMETERS_H
#define MTRCOMMISSIONINGPARAMETERS_H

@class NSData, NSNumber;
@protocol MTRDeviceAttestationDelegate;

#import <Foundation/Foundation.h>


@interface MTRCommissioningParameters : NSObject

@property (copy, nonatomic) NSData *CSRNonce;
@property (copy, nonatomic) NSData *attestationNonce; // ivar: _attestationNonce
@property (copy, nonatomic) NSData *csrNonce; // ivar: _csrNonce
@property (retain, nonatomic) NSObject<MTRDeviceAttestationDelegate> *deviceAttestationDelegate; // ivar: _deviceAttestationDelegate
@property (copy, nonatomic) NSNumber *failSafeExpiryTimeoutSecs;
@property (copy, nonatomic) NSNumber *failSafeTimeout; // ivar: _failSafeTimeout
@property (copy, nonatomic) NSData *threadOperationalDataset; // ivar: _threadOperationalDataset
@property (copy, nonatomic) NSData *wifiCredentials; // ivar: _wifiCredentials
@property (copy, nonatomic) NSData *wifiSSID; // ivar: _wifiSSID




@end


#endif