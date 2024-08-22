// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCOMMANDFETCHPERSONAUNIQUESTRINGS_H
#define MCMCOMMANDFETCHPERSONAUNIQUESTRINGS_H



#import "MCMCommand.h"

@interface MCMCommandFetchPersonaUniqueStrings : MCMCommand



+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(void)execute;


@end


#endif