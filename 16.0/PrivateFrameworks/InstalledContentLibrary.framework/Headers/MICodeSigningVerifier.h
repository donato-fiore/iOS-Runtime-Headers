// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MICODESIGNINGVERIFIER_H
#define MICODESIGNINGVERIFIER_H


#import <Foundation/Foundation.h>

#import "MIExecutableBundle.h"
#import "MICodeSigningInfo.h"

@interface MICodeSigningVerifier : NSObject

@property (nonatomic) BOOL allowAdhocSigning; // ivar: _allowAdhocSigning
@property (readonly, nonatomic) MIExecutableBundle *bundle; // ivar: _bundle
@property (nonatomic) BOOL logResourceVerificationErrors; // ivar: _logResourceVerificationErrors
@property (nonatomic) BOOL performOnlineAuthorization; // ivar: _performOnlineAuthorization
@property (readonly, nonatomic) MICodeSigningInfo *signingInfo; // ivar: _signingInfo
@property (nonatomic) BOOL skipProfileIDValidation; // ivar: _skipProfileIDValidation
@property (nonatomic) BOOL validateResources; // ivar: _validateResources
@property (nonatomic) BOOL validateUsingDetachedSignature; // ivar: _validateUsingDetachedSignature
@property (nonatomic) BOOL verifyTrustCachePresence; // ivar: _verifyTrustCachePresence


+(BOOL)_validateBundleExecutable:(id)arg0 againstStubAt:(id)arg1 trustedHashes:(id)arg2 sectionName:(id)arg3 signingIdentifier:(id)arg4 error:(*id)arg5 ;
+(BOOL)_validateStubSignature:(id)arg0 withSigningID:(id)arg1 error:(*id)arg2 ;
+(BOOL)validateWatchKitV1StubExecutableBundle:(id)arg0 error:(*id)arg1 ;
+(BOOL)validateWatchKitV2StubExecutableBundle:(id)arg0 error:(*id)arg1 ;
+(id)_validateSignatureAndCopyInfoForURL:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
+(id)codeSigningVerifierForBundle:(id)arg0 ;
-(BOOL)_getMICodeSignerTypeFromMISInfoDict:(id)arg0 codeSignerType:(*NSUInteger)arg1 profileType:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)performValidationWithError:(*id)arg0 ;
-(id)_loadSystemDetachedSignatureForBundleID:(id)arg0 error:(*id)arg1 ;
-(id)initWithBundle:(id)arg0 ;


@end


#endif