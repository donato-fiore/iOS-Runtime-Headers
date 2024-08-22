// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMDEVICEACTIVATIONLOCKBYPASSCODECOMMAND_STATUS_H
#define CEMDEVICEACTIVATIONLOCKBYPASSCODECOMMAND_STATUS_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMDeviceActivationLockBypassCodeCommand_Status : CEMPayloadBase

@property (copy, nonatomic) NSString *statusActivationLockBypassCode; // ivar: _statusActivationLockBypassCode


+(id)allowedReasons;
+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithActivationLockBypassCode:(id)arg0 ;
+(id)buildWithActivationLockBypassCode:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)serializePayload;


@end


#endif