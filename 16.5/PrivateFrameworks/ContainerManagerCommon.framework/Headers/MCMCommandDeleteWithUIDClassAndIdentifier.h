// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCOMMANDDELETEWITHUIDCLASSANDIDENTIFIER_H
#define MCMCOMMANDDELETEWITHUIDCLASSANDIDENTIFIER_H

@protocol MCMParametersWithContainer;


#import "MCMCommand.h"
#import "MCMContainerIdentity.h"
#import "MCMCommandOperationDelete.h"

@interface MCMCommandDeleteWithUIDClassAndIdentifier : MCMCommand <MCMParametersWithContainer>



@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity; // ivar: _containerIdentity
@property (readonly, nonatomic) MCMCommandOperationDelete *deleteCommand; // ivar: _deleteCommand


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif