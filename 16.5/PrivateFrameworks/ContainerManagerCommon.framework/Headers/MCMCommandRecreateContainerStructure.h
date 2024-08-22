// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCOMMANDRECREATECONTAINERSTRUCTURE_H
#define MCMCOMMANDRECREATECONTAINERSTRUCTURE_H

@protocol MCMParametersWithConcreteContainer;


#import "MCMCommand.h"
#import "MCMConcreteContainerIdentity.h"

@interface MCMCommandRecreateContainerStructure : MCMCommand <MCMParametersWithConcreteContainer>



@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity; // ivar: _concreteContainerIdentity


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithConcreteContainerIdentity:(id)arg0 context:(id)arg1 resultPromise:(id)arg2 ;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif