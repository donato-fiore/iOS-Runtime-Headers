// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCOMMANDSETINFOVALUE_H
#define MCMCOMMANDSETINFOVALUE_H

@class NSString;
@protocol MCMParametersWithKeyValue;


#import "MCMCommand.h"
#import "MCMConcreteContainerIdentity.h"

@interface MCMCommandSetInfoValue : MCMCommand <MCMParametersWithKeyValue>



@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity; // ivar: _concreteContainerIdentity
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) id *value; // ivar: _value


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithKey:(id)arg0 value:(id)arg1 containerIdentity:(id)arg2 context:(id)arg3 resultPromise:(id)arg4 ;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif