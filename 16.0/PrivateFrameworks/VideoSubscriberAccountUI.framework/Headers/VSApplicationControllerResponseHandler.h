// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSAPPLICATIONCONTROLLERRESPONSEHANDLER_H
#define VSAPPLICATIONCONTROLLERRESPONSEHANDLER_H


#import <Foundation/Foundation.h>


@interface VSApplicationControllerResponseHandler : NSObject



-(id)_accountAuthenticationWithJavascriptResponse:(id)arg0 error:(*id)arg1 ;
-(id)_parseSAMLResponseString:(id)arg0 error:(*id)arg1 ;
-(void)_handleJavascriptResponseInternal:(id)arg0 requestType:(NSInteger)arg1 accountAuthentication:(id)arg2 completionHandler:(id)arg3 ;
-(void)_setSubscriptionDataWithResponse:(id)arg0 forJavascriptResponse:(id)arg1 ;
-(void)handleJavascriptResponse:(id)arg0 requestType:(NSInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif