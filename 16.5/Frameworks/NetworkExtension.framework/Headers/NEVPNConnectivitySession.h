// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEVPNCONNECTIVITYSESSION_H
#define NEVPNCONNECTIVITYSESSION_H

@protocol NEVPNConnectivitySessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NEConfiguration.h"

@interface NEVPNConnectivitySession : NSObject {
    NEConfiguration *_configuration;
    *void _session;
    id<NEVPNConnectivitySessionDelegate> *_delegate;
    id *_pendingCancelCompletionHandler;
    NSObject<OS_dispatch_queue> *_queue;
}






@end


#endif