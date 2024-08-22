// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCOMMANDSETCODESIGNMAPPING_H
#define MCMCOMMANDSETCODESIGNMAPPING_H

@class NSString;
@protocol MCMParametersSetCodeSignMapping;


#import "MCMCommand.h"

@interface MCMCommandSetCodeSignMapping : MCMCommand <MCMParametersSetCodeSignMapping>



@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) id *info; // ivar: _info
@property (readonly, nonatomic) id *options; // ivar: _options


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif