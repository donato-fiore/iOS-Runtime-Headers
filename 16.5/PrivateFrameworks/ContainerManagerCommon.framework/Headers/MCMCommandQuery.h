// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCOMMANDQUERY_H
#define MCMCOMMANDQUERY_H

@class NSSet, NSUUID;
@protocol MCMParametersQuery;


#import "MCMCommand.h"
#import "MCMUserIdentity.h"

@interface MCMCommandQuery : MCMCommand <MCMParametersQuery>



@property (readonly, nonatomic) NSUInteger containerClass; // ivar: _containerClass
@property (readonly, nonatomic) BOOL createIfNecessary; // ivar: _createIfNecessary
@property (readonly, nonatomic) BOOL expectSingleResult; // ivar: _expectSingleResult
@property (readonly, nonatomic) NSUInteger explicitFlags; // ivar: _explicitFlags
@property (readonly, nonatomic) BOOL fuzzyMatchInternalUUID; // ivar: _fuzzyMatchInternalUUID
@property (readonly, nonatomic) BOOL fuzzyMatchTransient; // ivar: _fuzzyMatchTransient
@property (readonly, nonatomic) NSSet *groupIdentifiers; // ivar: _groupIdentifiers
@property (readonly, nonatomic) NSSet *identifiers; // ivar: _identifiers
@property (readonly, nonatomic) BOOL includeInfoInResult; // ivar: _includeInfoInResult
@property (readonly, nonatomic) BOOL includeLinks; // ivar: _includeLinks
@property (readonly, nonatomic) BOOL includePathInResult; // ivar: _includePathInResult
@property (readonly, nonatomic) BOOL includeUnowned; // ivar: _includeUnowned
@property (readonly, nonatomic) NSUUID *internalUUID; // ivar: _internalUUID
@property (readonly, nonatomic) BOOL issueSandboxExtensions; // ivar: _issueSandboxExtensions
@property (readonly, nonatomic) BOOL legacyExtensionPolicy; // ivar: _legacyExtensionPolicy
@property (readonly, nonatomic) BOOL legacyPersonaPolicy; // ivar: _legacyPersonaPolicy
@property (readonly, nonatomic) unsigned int platform; // ivar: _platform
@property (readonly, nonatomic) NSUInteger privateFlags; // ivar: _privateFlags
@property (readonly, nonatomic) BOOL transient; // ivar: _transient
@property (readonly, nonatomic) unsigned int uid; // ivar: _uid
@property (readonly, nonatomic) MCMUserIdentity *userIdentity; // ivar: _userIdentity


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)_executeQueryPlan:(id)arg0 resultContainers:(id)arg1 error:(*id)arg2 ;
-(BOOL)preflightClientAllowed;
-(id)_containerIdentifiersIncludingUnownedForContainerClass:(NSUInteger)arg0 canAccessAllContainers:(*BOOL)arg1 error:(*id)arg2 ;
-(id)_executeQueryForContainerIdentity:(id)arg0 error:(*id)arg1 ;
-(id)_queryPlanWithIdentifiers:(id)arg0 isGroupClass:(BOOL)arg1 clientIdentity:(id)arg2 error:(*id)arg3 ;
-(id)_resolveLinksForContainers:(id)arg0 ;
-(id)_setOfUserIdentities;
-(id)_setOfUserIdentitiesForIdentifiers:(id)arg0 isGroupClass:(BOOL)arg1 ;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(id)initWithPlatform:(unsigned int)arg0 explicitFlags:(NSUInteger)arg1 identifiers:(id)arg2 containerClass:(NSUInteger)arg3 groupIdentifiers:(id)arg4 internalUUID:(id)arg5 createIfNecessary:(BOOL)arg6 includeInfoInResult:(BOOL)arg7 includePathInResult:(BOOL)arg8 issueSandboxExtensions:(BOOL)arg9 UID:(unsigned int)arg10 userIdentity:(id)arg11 transient:(BOOL)arg12 fuzzyMatchTransient:(BOOL)arg13 fuzzyMatchInternalUUID:(BOOL)arg14 includeUnowned:(BOOL)arg15 expectSingleResult:(BOOL)arg16 includeLinks:(BOOL)arg17 legacyPersonaPolicy:(BOOL)arg18 context:(id)arg19 resultPromise:(id)arg20 ;
-(void)execute;


@end


#endif