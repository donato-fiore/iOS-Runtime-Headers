// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMXPCMESSAGESETDATAPROTECTION_H
#define MCMXPCMESSAGESETDATAPROTECTION_H

@protocol MCMParametersSetDataProtection;


#import "MCMXPCMessageWithContainerBase.h"
#import "MCMContainerIdentity.h"

@interface MCMXPCMessageSetDataProtection : MCMXPCMessageWithContainerBase <MCMParametersSetDataProtection>



@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;
@property (readonly, nonatomic) int dataProtectionClass; // ivar: _dataProtectionClass
@property (readonly, nonatomic) BOOL retryIfLocked; // ivar: _retryIfLocked
@property (readonly, nonatomic, getter=isThirdParty) BOOL thirdParty; // ivar: _thirdParty


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;


@end


#endif