// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCOMMANDDELETEPLUGINDATACONTAINERCONTENT_H
#define MCMCOMMANDDELETEPLUGINDATACONTAINERCONTENT_H

@protocol MCMParametersWithContainer;


#import "MCMCommand.h"
#import "MCMContainerIdentity.h"

@interface MCMCommandDeletePluginDataContainerContent : MCMCommand <MCMParametersWithContainer>



@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity; // ivar: _containerIdentity


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif