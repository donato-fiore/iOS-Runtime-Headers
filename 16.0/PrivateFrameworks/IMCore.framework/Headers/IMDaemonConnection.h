// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDAEMONCONNECTION_H
#define IMDAEMONCONNECTION_H


#import <Foundation/Foundation.h>


@interface IMDaemonConnection : NSObject {
    ? queue;
    ? requestQueue;
    ? setupQueue;
    ? unlockedConnection;
    ? unlockedRemoteProxy;
    ? unlockedSynchronousRemoteProxy;
    ? unlockedShouldRequestSetup;
    ? unlockedCapabilities;
    ? unlockedContext;
    ? unlockedOnSetupComplete;
    ? unlockedPendingSetupInvocation;
    ? unlockedIsInvokingSetup;
    ? listener;
}




-(id)init;
-(id)initWithListener:(id)arg0 ;


@end


#endif