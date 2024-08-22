// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRDEVICESETUPLEGACYSETUPACTION_H
#define TRDEVICESETUPLEGACYSETUPACTION_H

@class NSString;


#import "TRDeviceSetupLegacyAction.h"
#import "TRDeviceSetupLegacySetupActionAuthInfo.h"

@interface TRDeviceSetupLegacySetupAction : TRDeviceSetupLegacyAction

@property (readonly, nonatomic) TRDeviceSetupLegacySetupActionAuthInfo *authInfo;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) BOOL diagnosticsEnabled;
@property (readonly, nonatomic) NSString *homeSharingAppleID;
@property (readonly, nonatomic) NSString *homeSharingGroupID;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *networkPassword;
@property (readonly, nonatomic) NSString *networkSSID;
@property (readonly, nonatomic) BOOL rememberPassword;


-(id)initWithAuthInfo:(id)arg0 networkSSID:(id)arg1 networkPassword:(id)arg2 diagnosticsEnabled:(BOOL)arg3 language:(id)arg4 countryCode:(id)arg5 homeSharingAppleID:(id)arg6 homeSharingGroupID:(id)arg7 rememberPassword:(BOOL)arg8 ;


@end


#endif