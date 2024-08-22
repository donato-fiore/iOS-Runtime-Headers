// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMRESULTQUERY_H
#define MCMRESULTQUERY_H

@class NSArray;


#import "MCMResultBase.h"
#import "MCMClientIdentity.h"

@interface MCMResultQuery : MCMResultBase

@property (readonly, nonatomic) MCMClientIdentity *clientIdentity; // ivar: _clientIdentity
@property (readonly, nonatomic) NSArray *containers; // ivar: _containers
@property (readonly, nonatomic) BOOL includeInfo; // ivar: _includeInfo
@property (readonly, nonatomic) BOOL includePath; // ivar: _includePath
@property (readonly, nonatomic) BOOL issueSandboxExtensions; // ivar: _issueSandboxExtensions
@property (readonly, nonatomic) BOOL legacyExtensionPolicy; // ivar: _legacyExtensionPolicy
@property (readonly, nonatomic) BOOL legacyPersonaPolicy; // ivar: _legacyPersonaPolicy
@property (readonly, nonatomic) NSArray *resolvedLinks; // ivar: _resolvedLinks


-(?)_compileContainerDataForIndex:(?)arg0 container:(?)arg1 infostokens;
-(BOOL)encodeResultOntoReply:(id)arg0 ;
-(id)initWithContainers:(id)arg0 clientIdentity:(id)arg1 issueSandboxExtensions:(BOOL)arg2 resolvedLinks:(id)arg3 includePath:(BOOL)arg4 includeInfo:(BOOL)arg5 legacyPersonaPolicy:(BOOL)arg6 legacyExtensionPolicy:(BOOL)arg7 ;


@end


#endif