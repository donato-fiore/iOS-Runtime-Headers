// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8FMCLIENT10HTTPCLIENT_H
#define _TTC8FMCLIENT10HTTPCLIENT_H


#import <Foundation/Foundation.h>


@interface _TtC8FMClient10HttpClient : NSObject {
    ? authenticationChallengeHandler;
    ? httpSuccessCodeMin;
    ? httpSuccessCodeMax;
    ? endpoint;
    ? statusCodeHandlers;
    ? statusCodeHandlerQueue;
    ? sessionQueue;
    ? $__lazy_storage_$_session;
}




-(id)init;
-(void)dealloc;


@end


#endif