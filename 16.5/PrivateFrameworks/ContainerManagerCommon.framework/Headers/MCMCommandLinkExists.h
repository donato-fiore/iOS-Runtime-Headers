// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCOMMANDLINKEXISTS_H
#define MCMCOMMANDLINKEXISTS_H

@protocol MCMParametersLinkExists;


#import "MCMCommand.h"
#import "MCMContainerIdentity.h"

@interface MCMCommandLinkExists : MCMCommand <MCMParametersLinkExists>



@property (readonly, nonatomic) NSUInteger attributes; // ivar: _attributes
@property (readonly, nonatomic) MCMContainerIdentity *containerAIdentity; // ivar: _containerAIdentity
@property (readonly, nonatomic) MCMContainerIdentity *containerBIdentity; // ivar: _containerBIdentity


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif