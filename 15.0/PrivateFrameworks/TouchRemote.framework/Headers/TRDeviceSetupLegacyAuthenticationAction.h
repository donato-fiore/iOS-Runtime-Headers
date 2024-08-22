// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRDEVICESETUPLEGACYAUTHENTICATIONACTION_H
#define TRDEVICESETUPLEGACYAUTHENTICATIONACTION_H

@class NSString;


#import "TRDeviceSetupConnectAction.h"

@interface TRDeviceSetupLegacyAuthenticationAction : TRDeviceSetupConnectAction

@property (retain, nonatomic) NSString *deviceGUID; // ivar: _deviceGUID
@property (retain, nonatomic) NSString *userAgent; // ivar: _userAgent


-(id)deviceName;
-(id)propertyListRepresentation;


@end


#endif