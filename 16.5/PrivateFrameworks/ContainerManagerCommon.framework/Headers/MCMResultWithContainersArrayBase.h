// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMRESULTWITHCONTAINERSARRAYBASE_H
#define MCMRESULTWITHCONTAINERSARRAYBASE_H

@class NSArray, NSString;
@protocol MCMResultWithContainersArray;


#import "MCMResultBase.h"
#import "MCMClientIdentity.h"
#import "MCMError.h"

@interface MCMResultWithContainersArrayBase : MCMResultBase <MCMResultWithContainersArray>



@property (readonly, nonatomic) MCMClientIdentity *clientIdentity; // ivar: _clientIdentity
@property (readonly, nonatomic) NSArray *containerIdentities; // ivar: _containerIdentities
@property (readonly, nonatomic) NSArray *containerPaths; // ivar: _containerPaths
@property (readonly, nonatomic) NSArray *containers; // ivar: _containers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MCMError *error;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includeInfo; // ivar: _includeInfo
@property (readonly, nonatomic) BOOL includePath; // ivar: _includePath
@property (readonly, nonatomic) NSArray *resolvedLinks; // ivar: _resolvedLinks
@property (readonly, nonatomic) BOOL skipSandboxExtensions; // ivar: _skipSandboxExtensions
@property (readonly) Class superclass;


-(BOOL)encodeResultOntoReply:(id)arg0 ;
-(id)initWithContainerPaths:(id)arg0 containerIdentities:(id)arg1 includePath:(BOOL)arg2 clientIdentity:(id)arg3 skipSandboxExtensions:(BOOL)arg4 ;
-(id)initWithContainers:(id)arg0 resolvedLinks:(id)arg1 includePath:(BOOL)arg2 includeInfo:(BOOL)arg3 clientIdentity:(id)arg4 skipSandboxExtensions:(BOOL)arg5 ;


@end


#endif