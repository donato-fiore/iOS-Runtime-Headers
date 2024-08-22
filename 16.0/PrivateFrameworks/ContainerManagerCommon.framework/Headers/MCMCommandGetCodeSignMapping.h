// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCOMMANDGETCODESIGNMAPPING_H
#define MCMCOMMANDGETCODESIGNMAPPING_H

@class NSString;
@protocol MCMParametersWithIdentifier;


#import "MCMCommand.h"

@interface MCMCommandGetCodeSignMapping : MCMCommand <MCMParametersWithIdentifier>



@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif