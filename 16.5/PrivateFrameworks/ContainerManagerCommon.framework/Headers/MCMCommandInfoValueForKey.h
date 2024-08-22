// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCOMMANDINFOVALUEFORKEY_H
#define MCMCOMMANDINFOVALUEFORKEY_H

@class NSString;
@protocol MCMParametersWithKey;


#import "MCMCommand.h"
#import "MCMConcreteContainerIdentity.h"

@interface MCMCommandInfoValueForKey : MCMCommand <MCMParametersWithKey>



@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity; // ivar: _concreteContainerIdentity
@property (readonly, nonatomic) NSString *key; // ivar: _key


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)infoValueForKeyWithError:(*NSUInteger)arg0 ;
-(id)initWithKey:(id)arg0 concreteContainerIdentity:(id)arg1 context:(id)arg2 resultPromise:(id)arg3 ;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif