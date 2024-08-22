// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCOMMANDCONTAINERFROMPATH_H
#define MCMCOMMANDCONTAINERFROMPATH_H

@class NSURL;
@protocol MCMParametersWithURL;


#import "MCMCommand.h"

@interface MCMCommandContainerFromPath : MCMCommand <MCMParametersWithURL>



@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(?)_containerFromRelayToDaemonWithURL:(?)arg0 relativePatherror;
-(BOOL)preflightClientAllowed;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif