// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRDEVICESETUPGENERALSETUPACTION_H
#define TRDEVICESETUPGENERALSETUPACTION_H

@class NSString;


#import "TRDeviceSetupAction.h"

@interface TRDeviceSetupGeneralSetupAction : TRDeviceSetupAction

@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, nonatomic, getter=isDiagnosticsEnabled) BOOL diagnosticsEnabled;
@property (readonly, copy, nonatomic) NSString *homeSharingGroupID;
@property (readonly, copy, nonatomic) NSString *homeSharingID;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, nonatomic) BOOL rememberPassword;


-(id)init;
-(id)initWithCountryCode:(id)arg0 language:(id)arg1 homeSharingID:(id)arg2 homeSharingGroupID:(id)arg3 isDiagnosticsEnabled:(BOOL)arg4 rememberPassword:(BOOL)arg5 ;


@end


#endif