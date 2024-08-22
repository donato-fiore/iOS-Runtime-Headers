// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMUSICKITURLREQUEST_H
#define ICMUSICKITURLREQUEST_H

@class NSString, NSDictionary;


#import "ICURLRequest.h"
#import "ICStoreURLRequest.h"
#import "ICMusicKitRequestContext.h"

@interface ICMusicKitURLRequest : ICURLRequest {
    ICStoreURLRequest *_pendingEquivalentStoreURLRequest;
    NSString *_cachedDescription;
}


@property (readonly, copy, nonatomic) NSString *_developerToken; // ivar: _developerToken
@property (readonly, nonatomic) ICStoreURLRequest *_pendingEquivalentStoreURLRequest;
@property (copy, nonatomic) NSDictionary *additionalHTTPCookies; // ivar: _additionalHTTPCookies
@property (readonly, copy, nonatomic) ICMusicKitRequestContext *requestContext;


+(Class)_responseClass;
+(Class)_responseHandlerClass;
+(NSUInteger)_defaultMaxRetryCountForReason:(id)arg0 ;
-(id)_description;
-(id)description;
-(id)initWithURL:(id)arg0 requestContext:(id)arg1 ;
-(id)initWithURLRequest:(id)arg0 requestContext:(id)arg1 ;
-(id)initWithURLRequest:(id)arg0 requestContext:(id)arg1 resumeData:(id)arg2 ;
-(void)_buildEquivalentStoreURLRequestWithDeveloperToken:(id)arg0 completionHandler:(id)arg1 ;
-(void)_buildMusicKitURLRequestWithBaseURLRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)_buildUserTokenBasedMusicKitURLRequestWithBaseURLRequest:(id)arg0 developerToken:(id)arg1 completionHandler:(id)arg2 ;
-(void)_setDeveloperToken:(id)arg0 ;
-(void)_updateURLSessionManagedPropertiesForEquivalentStoreURLRequest:(id)arg0 ;
-(void)buildURLRequestWithCompletionHandler:(id)arg0 ;


@end


#endif