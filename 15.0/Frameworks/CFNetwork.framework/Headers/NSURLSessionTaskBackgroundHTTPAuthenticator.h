// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSURLSESSIONTASKBACKGROUNDHTTPAUTHENTICATOR_H
#define NSURLSESSIONTASKBACKGROUNDHTTPAUTHENTICATOR_H



#import "NSURLSessionTaskHTTPAuthenticator.h"

@interface NSURLSessionTaskBackgroundHTTPAuthenticator : NSURLSessionTaskHTTPAuthenticator



-(id)initWithStatusCodes:(id)arg0 ;
-(void)dealloc;
-(void)getAuthenticationHeadersForTask:(id)arg0 task:(id)arg1 response:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif