// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCOMMANDCREATEORLOOKUPAPPGROUPBYAPPGROUPIDENTIFIER_H
#define MCMCOMMANDCREATEORLOOKUPAPPGROUPBYAPPGROUPIDENTIFIER_H

@class NSString;
@protocol MCMParametersCreateOrLookupAppGroupByAppGroupIdentifier;


#import "MCMCommand.h"

@interface MCMCommandCreateOrLookupAppGroupByAppGroupIdentifier : MCMCommand <MCMParametersCreateOrLookupAppGroupByAppGroupIdentifier>



@property (readonly, nonatomic) NSString *appGroupIdentifier; // ivar: _appGroupIdentifier


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif