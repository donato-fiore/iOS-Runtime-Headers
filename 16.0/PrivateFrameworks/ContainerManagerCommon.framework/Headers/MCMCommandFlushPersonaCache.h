// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCOMMANDFLUSHPERSONACACHE_H
#define MCMCOMMANDFLUSHPERSONACACHE_H



#import "MCMCommand.h"

@interface MCMCommandFlushPersonaCache : MCMCommand



+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(void)execute;


@end


#endif