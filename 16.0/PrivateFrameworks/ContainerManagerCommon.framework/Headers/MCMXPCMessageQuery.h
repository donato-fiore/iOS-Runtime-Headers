// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMXPCMESSAGEQUERY_H
#define MCMXPCMESSAGEQUERY_H

@class NSSet, NSUUID;
@protocol MCMParametersQuery;


#import "MCMXPCMessageBase.h"
#import "MCMUserIdentity.h"

@interface MCMXPCMessageQuery : MCMXPCMessageBase <MCMParametersQuery>



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
@property (readonly, nonatomic) NSUInteger privateFlags; // ivar: _privateFlags
@property (readonly, nonatomic) BOOL transient; // ivar: _transient
@property (readonly, nonatomic) unsigned int uid; // ivar: _uid
@property (readonly, nonatomic) MCMUserIdentity *userIdentity; // ivar: _userIdentity


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;
-(unsigned int)disposition;


@end


#endif