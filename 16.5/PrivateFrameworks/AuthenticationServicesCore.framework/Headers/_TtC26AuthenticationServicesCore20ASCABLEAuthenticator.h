// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC26AUTHENTICATIONSERVICESCORE20ASCABLEAUTHENTICATOR_H
#define _TTC26AUTHENTICATIONSERVICESCORE20ASCABLEAUTHENTICATOR_H


#import <Foundation/Foundation.h>


@interface _TtC26AuthenticationServicesCore20ASCABLEAuthenticator : NSObject {
    ? cryptographyManager;
    ? bluetoothAdvertiser;
    ? advertisement;
    ? webSocket;
    ? apsConnection;
    ? apsWrapper;
    ? completionHandler;
    ? powerLogger;
    ? currentCTAPCommand;
    ? networkPathMonitor;
    ? currentState;
}




-(id)init;
-(id)initWithCaBLEURL:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)finishTransactionWithCredential:(id)arg0 error:(id)arg1 ;
-(void)startWithCompletionHandler:(id)arg0 ;


@end


#endif