// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDELEGATIONSERVICESECURITYSETTINGS_H
#define ICDELEGATIONSERVICESECURITYSETTINGS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ICDelegationServiceSecuritySettings : NSObject

@property (readonly, copy, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) NSInteger securityMode; // ivar: _securityMode


+(void)getDeviceReceiverSettingsWithCompletion:(id)arg0 ;
+(void)getDeviceSenderSettingsForReceiverName:(id)arg0 securityMode:(NSInteger)arg1 completion:(id)arg2 ;
-(id)_init;
-(id)description;


@end


#endif