// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSECUREELEMENTCONSISTENCYCHECKDEVICESTATE_H
#define PKSECUREELEMENTCONSISTENCYCHECKDEVICESTATE_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface PKSecureElementConsistencyCheckDeviceState : NSObject

@property (retain, nonatomic) NSArray *applets; // ivar: _applets
@property (retain, nonatomic) NSArray *deviceCredentials; // ivar: _deviceCredentials
@property (retain, nonatomic) NSArray *devicePaymentApplications; // ivar: _devicePaymentApplications
@property (retain, nonatomic) NSArray *passCredentials; // ivar: _passCredentials
@property (retain, nonatomic) NSDictionary *passIsoBlobHashForCredentialIdentifier; // ivar: _passIsoBlobHashForCredentialIdentifier




@end


#endif