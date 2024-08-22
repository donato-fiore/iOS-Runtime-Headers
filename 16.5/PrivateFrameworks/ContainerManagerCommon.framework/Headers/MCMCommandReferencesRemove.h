// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCOMMANDREFERENCESREMOVE_H
#define MCMCOMMANDREFERENCESREMOVE_H

@class NSSet;
@protocol MCMParametersWithOwnersAndGroups, MCMParametersReferencesQuery;


#import "MCMCommand.h"
#import "MCMUserIdentity.h"

@interface MCMCommandReferencesRemove : MCMCommand <MCMParametersWithOwnersAndGroups, MCMParametersReferencesQuery>



@property (readonly, nonatomic) NSUInteger containerClass; // ivar: _containerClass
@property (readonly, nonatomic) BOOL createDuringReconciliation; // ivar: _createDuringReconciliation
@property (readonly, nonatomic) BOOL deleteDuringReconciliation; // ivar: _deleteDuringReconciliation
@property (readonly, nonatomic) NSUInteger explicitFlags; // ivar: _explicitFlags
@property (readonly, nonatomic) NSSet *groupIdentifiers; // ivar: _groupIdentifiers
@property (readonly, nonatomic) NSSet *ownerIdentifiers; // ivar: _ownerIdentifiers
@property (readonly, nonatomic) NSUInteger privateFlags; // ivar: _privateFlags
@property (readonly, nonatomic) unsigned int uid; // ivar: _uid
@property (readonly, nonatomic) MCMUserIdentity *userIdentity; // ivar: _userIdentity
@property (readonly, nonatomic) BOOL yesReallyApplyToAll; // ivar: _yesReallyApplyToAll


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif