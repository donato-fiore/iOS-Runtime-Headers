// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCOMMANDLINKAPPLY_H
#define MCMCOMMANDLINKAPPLY_H

@protocol MCMParametersWithLink;


#import "MCMCommand.h"
#import "MCMResolvedLink.h"

@interface MCMCommandLinkApply : MCMCommand <MCMParametersWithLink>



@property (readonly, nonatomic) MCMResolvedLink *link; // ivar: _link


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif