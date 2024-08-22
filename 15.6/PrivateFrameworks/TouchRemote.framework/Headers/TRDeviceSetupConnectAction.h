// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRDEVICESETUPCONNECTACTION_H
#define TRDEVICESETUPCONNECTACTION_H

@class NSString;


#import "TRDeviceSetupAction.h"

@interface TRDeviceSetupConnectAction : TRDeviceSetupAction

@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) NSString *networkPassword;
@property (readonly, copy, nonatomic) NSString *networkSSID;


-(id)init;
-(id)initWithDeviceName:(id)arg0 networkSSID:(id)arg1 networkPassword:(id)arg2 ;


@end


#endif