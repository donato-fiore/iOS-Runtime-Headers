// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLREQUEST_H
#define SLREQUEST_H

@class ACAccount, OACredential, NSMutableArray, NSString, NSData, NSURL, NSDictionary;

#import <Foundation/Foundation.h>

#import "SLService.h"

@interface SLRequest : NSObject {
    ACAccount *_account;
    OACredential *_OAuthCredential;
    NSMutableArray *_multiParts;
    NSString *_multiPartBoundary;
    int _callingPID;
    NSString *_applicationID;
    NSString *_contentType;
    NSData *_payload;
    NSUInteger _networkServiceType;
    SLService *_service;
}


@property (readonly, nonatomic) NSURL *URL; // ivar: _url
@property (retain, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSInteger requestMethod; // ivar: _requestMethod


+(id)requestForServiceType:(id)arg0 requestMethod:(NSInteger)arg1 URL:(id)arg2 parameters:(id)arg3 ;
-(BOOL)_requiresAuthorization;
-(BOOL)_shouldAppendTencentWeiboParametersToRequest;
-(BOOL)_shouldRetryAfterCount:(int)arg0 delay:(*float)arg1 ;
-(BOOL)shouldIncludeParameterString;
-(NSUInteger)networkServiceType;
-(id)OAuthCredential;
-(id)_HTTPMethodName;
-(id)_allParameters;
-(id)_commandName;
-(id)_parameterString;
-(id)_urlEncodedString:(id)arg0 ;
-(id)completeMultiParts;
-(id)dictionaryRepresentationForJSONSerialization;
-(id)init;
-(id)initWithServiceType:(id)arg0 URL:(id)arg1 parameters:(id)arg2 requestMethod:(NSInteger)arg3 ;
-(id)multiPartBodyData;
-(id)multiPartBoundary;
-(id)multiParts;
-(id)parameterForKey:(id)arg0 ;
-(int)callingPID;
-(void)_addAuthenticationParameters:(id)arg0 ;
-(void)_appendCoreSig1Signature;
-(void)addMultiPart:(id)arg0 ;
-(void)addMultipartData:(id)arg0 withName:(id)arg1 type:(id)arg2 ;
-(void)addMultipartData:(id)arg0 withName:(id)arg1 type:(id)arg2 filename:(id)arg3 ;
-(void)performJSONRequestWithHandler:(id)arg0 ;
// -(void)performJSONRequestWithHandler:(id)arg0 retryCount:(unk)arg1  ;
-(void)performRequestWithHandler:(id)arg0 ;
-(void)removeParameterForKey:(id)arg0 ;
-(void)setApplicationID:(id)arg0 ;
-(void)setCallingPID:(int)arg0 ;
-(void)setContentType:(id)arg0 ;
-(void)setMultiPartBoundary:(id)arg0 ;
-(void)setNetworkServiceType:(NSUInteger)arg0 ;
-(void)setOAuthCredential:(id)arg0 ;
-(void)setParameterValue:(id)arg0 forKey:(id)arg1 ;
-(void)setPayload:(id)arg0 ;


@end


#endif