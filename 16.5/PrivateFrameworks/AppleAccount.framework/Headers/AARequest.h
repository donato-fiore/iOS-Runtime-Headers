// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAREQUEST_H
#define AAREQUEST_H

@class NSString, NSDictionary, NSURLRequest;
@protocol NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface AARequest : NSObject <NSURLSessionDataDelegate>

 {
    id *_handler;
    NSString *_initialURLString;
    *OpaqueCFHTTPCookieStorage _cookieStorage;
    NSString *_oneTimePassword;
    NSString *_machineId;
}


@property (copy, nonatomic) NSDictionary *customHeaders; // ivar: _customHeaders
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL flushCache; // ivar: _flushCache
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSURLRequest *urlRequest;


+(Class)responseClass;
+(id)protocolVersion;
+(id)redactedHeadersFromHTTPHeaders:(id)arg0 ;
-(id)bodyDictionary;
-(id)initWithURLString:(id)arg0 ;
-(id)redactedBodyStringWithPropertyList:(id)arg0 ;
-(id)urlCredential;
-(id)urlString;
-(void)_handleDataTaskCompletionWithData:(id)arg0 response:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
-(void)performPinnedOnlyRequestWithHandler:(id)arg0 ;
-(void)performPinnedRequestWithHandler:(id)arg0 ;
-(void)performRequestForDevice:(id)arg0 anisetteDataProvider:(id)arg1 withHandler:(id)arg2 ;
-(void)performRequestForDevice:(id)arg0 withHandler:(id)arg1 ;
-(void)performRequestWithHandler:(id)arg0 ;
-(void)performRequestWithSession:(id)arg0 withHandler:(id)arg1 ;
-(void)performSignedRequestWithHandler:(id)arg0 ;
-(void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg0 ;
-(void)setDeviceProvisioningMachineId:(id)arg0 ;
-(void)setDeviceProvisioningOneTimePassword:(id)arg0 ;


@end


#endif