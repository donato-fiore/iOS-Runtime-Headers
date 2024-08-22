// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSURLREQUESTENCODER_H
#define AMSURLREQUESTENCODER_H

@class ACAccount, NSDictionary, NSString, NSArray, NSURLSessionTask;
@protocol AMSBagConsumer, AMSRequestEncoding, AMSBagProtocol, AMSURLBagContract, OS_dispatch_queue, AMSResponseDecoding;

#import <Foundation/Foundation.h>

#import "AMSProcessInfo.h"
#import "AMSKeychainOptions.h"
#import "AMSSigningSecurityService.h"

@interface AMSURLRequestEncoder : NSObject <AMSBagConsumer, AMSRequestEncoding>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSDictionary *additionalMetrics; // ivar: _additionalMetrics
@property NSInteger anisetteType; // ivar: _anisetteType
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) NSObject<AMSURLBagContract> *bagContract; // ivar: _bagContract
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property BOOL compressRequestBody; // ivar: _compressRequestBody
@property (nonatomic) NSInteger dataEncoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSInteger dialogOptions; // ivar: _dialogOptions
@property BOOL disableResponseDecoding; // ivar: _disableResponseDecoding
@property BOOL enableRemoteSecuritySigning; // ivar: _enableRemoteSecuritySigning
@property (nonatomic) NSInteger encodeCount; // ivar: _encodeCount
@property (retain, nonatomic) NSArray *groupRequestAccounts; // ivar: _groupRequestAccounts
@property (retain, nonatomic) NSString *gsTokenIdentifier; // ivar: _gsTokenIdentifier
@property (readonly) NSUInteger hash;
@property BOOL includeClientVersions; // ivar: _includeClientVersions
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) AMSKeychainOptions *keychainOptions; // ivar: _keychainOptions
@property (retain, nonatomic) NSString *logUUID; // ivar: _logUUID
@property NSInteger mescalType; // ivar: _mescalType
@property (retain, nonatomic) NSURLSessionTask *parentTask; // ivar: _parentTask
@property (readonly, nonatomic) os_unfair_recursive_lock_s propertiesLock; // ivar: _propertiesLock
@property NSInteger requestEncoding; // ivar: _requestEncoding
@property (retain, nonatomic) NSObject<AMSResponseDecoding> *responseDecoder; // ivar: _responseDecoder
@property BOOL shouldSetCookiesFromResponse; // ivar: _shouldSetCookiesFromResponse
@property BOOL shouldSetStorefrontFromResponse; // ivar: _shouldSetStorefrontFromResponse
@property (readonly, nonatomic) AMSSigningSecurityService *signingService; // ivar: _signingService
@property (readonly) Class superclass;
@property BOOL urlKnownToBeTrusted; // ivar: _urlKnownToBeTrusted


+(id)createBagForSubProfile;
-(id)_methodStringFromMethod:(NSInteger)arg0 ;
-(id)init;
-(id)initWithBag:(id)arg0 ;
-(id)initWithBagContract:(id)arg0 ;
-(id)requestByEncodingRequest:(id)arg0 parameters:(id)arg1 ;
-(id)requestByEncodingRequest:(id)arg0 parameters:(id)arg1 error:(*id)arg2 ;
-(id)requestWithMethod:(NSInteger)arg0 URL:(id)arg1 error:(*id)arg2 ;
-(id)requestWithMethod:(NSInteger)arg0 URL:(id)arg1 headers:(id)arg2 parameters:(id)arg3 ;
-(id)requestWithMethod:(NSInteger)arg0 URL:(id)arg1 parameters:(id)arg2 ;
-(id)requestWithMethod:(NSInteger)arg0 URL:(id)arg1 parameters:(id)arg2 error:(*id)arg3 ;
-(id)requestWithMethod:(NSInteger)arg0 URLString:(id)arg1 error:(*id)arg2 ;
-(id)requestWithMethod:(NSInteger)arg0 URLString:(id)arg1 parameters:(id)arg2 error:(*id)arg3 ;
-(id)requestWithMethod:(NSInteger)arg0 bagURL:(id)arg1 error:(*id)arg2 ;
-(id)requestWithMethod:(NSInteger)arg0 bagURL:(id)arg1 headers:(id)arg2 parameters:(id)arg3 ;
-(id)requestWithMethod:(NSInteger)arg0 bagURL:(id)arg1 parameters:(id)arg2 ;
-(id)requestWithMethod:(NSInteger)arg0 bagURL:(id)arg1 parameters:(id)arg2 error:(*id)arg3 ;
-(void)_addSecuritySigningHeadersToRequest:(id)arg0 buyParams:(id)arg1 bag:(id)arg2 ;
-(void)_personalizeKeychainOptionsForAccount:(id)arg0 ;


@end


#endif