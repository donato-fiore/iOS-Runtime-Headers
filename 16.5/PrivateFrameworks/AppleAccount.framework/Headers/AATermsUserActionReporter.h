// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AATERMSUSERACTIONREPORTER_H
#define AATERMSUSERACTIONREPORTER_H

@class ACAccount, NSDictionary, AKAppleIDAuthenticationController;
@protocol AARemoteServerProtocol;

#import <Foundation/Foundation.h>


@interface AATermsUserActionReporter : NSObject {
    ACAccount *_account;
    NSDictionary *_requestDictionary;
    AKAppleIDAuthenticationController *_authController;
    NSUInteger _requestCount;
    id<AARemoteServerProtocol> *_remoteServer;
}




-(id)_authController;
-(id)initWithAccount:(id)arg0 parameters:(id)arg1 ;
-(id)initWithAccount:(id)arg0 parameters:(id)arg1 remoteServer:(id)arg2 ;
-(void)_createRequestForAccount:(id)arg0 requestHandler:(id)arg1 ;
-(void)reportEvent;


@end


#endif