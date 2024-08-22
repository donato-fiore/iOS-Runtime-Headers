// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCOMMANDSETDATAPROTECTION_H
#define MCMCOMMANDSETDATAPROTECTION_H

@protocol MCMParametersSetDataProtection;


#import "MCMCommand.h"
#import "MCMContainerIdentity.h"

@interface MCMCommandSetDataProtection : MCMCommand <MCMParametersSetDataProtection>



@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity; // ivar: _containerIdentity
@property (readonly, nonatomic) int dataProtectionClass; // ivar: _dataProtectionClass
@property (readonly, nonatomic) BOOL retryIfLocked; // ivar: _retryIfLocked
@property (readonly, nonatomic, getter=isThirdParty) BOOL thirdParty; // ivar: _thirdParty


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif