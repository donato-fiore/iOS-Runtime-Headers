// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPAPPPROXYFLOWBRIDGE_H
#define NPAPPPROXYFLOWBRIDGE_H

@class NEAppProxyFlow, NWEndpoint, NSError;
@protocol OS_nw_connection, OS_dispatch_queue, OS_os_transaction, OS_nw_context;

#import <Foundation/Foundation.h>


@interface NPAppProxyFlowBridge : NSObject {
    BOOL _eofNW;
    BOOL _eofFlow;
    int _currentState;
    NEAppProxyFlow *_flow;
    NWEndpoint *_remoteEndpoint;
    NSObject<OS_nw_connection> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_transaction> *_networkTransaction;
    NSError *_connectionError;
    NSObject<OS_nw_context> *_nwContext;
}




-(id)initWithAppProxyFlow:(id)arg0 nwContext:(id)arg1 ;


@end


#endif