// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSURLSESSIONTASKLOCALHTTPAUTHENTICATOR_H
#define NSURLSESSIONTASKLOCALHTTPAUTHENTICATOR_H

@protocol NSURLSessionAppleIDContext;


#import "NSURLSessionTaskHTTPAuthenticator.h"

@interface NSURLSessionTaskLocalHTTPAuthenticator : NSURLSessionTaskHTTPAuthenticator

@property (copy) NSObject<NSURLSessionAppleIDContext> *externalAuthenticator; // ivar: _externalAuthenticator


-(id)initWithSessionAuthenticator:(id)arg0 statusCodes:(id)arg1 ;
-(void)dealloc;
-(void)getAuthenticationHeadersForTask:(id)arg0 task:(id)arg1 response:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif