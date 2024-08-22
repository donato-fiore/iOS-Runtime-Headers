// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCOMMANDLINKREMOVE_H
#define MCMCOMMANDLINKREMOVE_H

@protocol MCMParametersWithLink, MCMParametersLinkRemove;


#import "MCMCommand.h"
#import "MCMResolvedLink.h"

@interface MCMCommandLinkRemove : MCMCommand <MCMParametersWithLink, MCMParametersLinkRemove>



@property (readonly, nonatomic) NSUInteger attributes; // ivar: _attributes
@property (readonly, nonatomic) MCMResolvedLink *link; // ivar: _link


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif