// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKURLREQUEST_H
#define NNMKURLREQUEST_H


#import <Foundation/Foundation.h>


@interface NNMKURLRequest : NSObject



+(id)_methodNameForType:(NSUInteger)arg0 ;
+(id)mailNotificationURL;
// +(void)_formBodyRequestWithBaseURLString:(id)arg0 path:(id)arg1 body:(id)arg2 method:(id)arg3 token:(id)arg4 errorParser:(id)arg5 completion:(unk)arg6  ;
// +(void)_getRequestWithBaseURLString:(id)arg0 path:(id)arg1 params:(id)arg2 token:(id)arg3 errorParser:(id)arg4 completion:(unk)arg5  ;
// +(void)_handleRequest:(id)arg0 errorParser:(id)arg1 completion:(unk)arg2  ;
// +(void)_jsonBodyRequestWithBaseURLString:(id)arg0 path:(id)arg1 body:(id)arg2 method:(id)arg3 token:(id)arg4 needsBAA:(BOOL)arg5 errorParser:(id)arg6 completion:(unk)arg7  ;
+(void)formPostRequestWithBaseURLString:(id)arg0 path:(id)arg1 body:(id)arg2 token:(id)arg3 completion:(id)arg4 ;
+(void)getRequestWithBaseURLString:(id)arg0 path:(id)arg1 params:(id)arg2 token:(id)arg3 completion:(id)arg4 ;
+(void)patchRequestWithBaseURLString:(id)arg0 path:(id)arg1 body:(id)arg2 token:(id)arg3 completion:(id)arg4 ;
+(void)postRequestWithBaseURLString:(id)arg0 path:(id)arg1 body:(id)arg2 token:(id)arg3 completion:(id)arg4 ;
+(void)postRequestWithBaseURLString:(id)arg0 path:(id)arg1 body:(id)arg2 token:(id)arg3 needsBAA:(BOOL)arg4 completion:(id)arg5 ;
// +(void)requestWithType:(NSUInteger)arg0 baseURLString:(id)arg1 path:(id)arg2 body:(id)arg3 token:(id)arg4 needsBAA:(BOOL)arg5 errorParser:(id)arg6 completion:(unk)arg7  ;


@end


#endif