// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLERRORS_H
#define CPLERRORS_H


#import <Foundation/Foundation.h>


@interface CPLErrors : NSObject



+(id)cplErrorWithCode:(NSInteger)arg0 description:(id)arg1 ;
+(id)cplErrorWithCode:(NSInteger)arg0 description:(id)arg1 arguments:(char *)arg2 ;
+(id)cplErrorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 description:(id)arg2 ;
+(id)cplErrorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 description:(id)arg2 arguments:(char *)arg3 ;
+(id)cplErrorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 userInfo:(id)arg2 description:(id)arg3 ;
+(id)cplErrorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 userInfo:(id)arg2 description:(id)arg3 arguments:(char *)arg4 ;
+(id)errorsForIdentifiers:(id)arg0 error:(id)arg1 ;
+(id)incorrectMachineStateErrorWithReason:(id)arg0 ;
+(id)incorrectParametersErrorForParameter:(id)arg0 ;
+(id)invalidClientCacheErrorWithReason:(id)arg0 ;
+(id)invalidCloudCacheErrorWithReason:(id)arg0 ;
+(id)invalidDaemonErrorWithConnectionError:(id)arg0 ;
+(id)invalidScopeErrorWithScopeIdentifier:(id)arg0 ;
+(id)invalidScopeErrorWithScopeIndex:(NSInteger)arg0 ;
+(id)invalidScopeErrorWithScopedIdentifier:(id)arg0 ;
+(id)libraryClosedError;
+(id)missingError;
+(id)notImplementedError;
+(id)operationCancelledError;
+(id)posixErrorForURL:(id)arg0 ;
+(id)readOnlyError;
+(id)sessionHasBeenDeferredError;
+(id)transportErrorFromTransportError:(id)arg0 ;
+(id)underlyingErrorWithReason:(id)arg0 ;
+(id)unknownError;
+(id)unknownPrimaryScope;
+(id)unsafeResources:(id)arg0 withError:(id)arg1 realPrune:(BOOL)arg2 resourceStorage:(id)arg3 ;
+(id)unsafeResources:(id)arg0 withError:(id)arg1 resourceStorage:(id)arg2 ;
+(id)versionMismatchError;


@end


#endif