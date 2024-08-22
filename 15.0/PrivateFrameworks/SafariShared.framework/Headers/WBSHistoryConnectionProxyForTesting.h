// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSHISTORYCONNECTIONPROXYFORTESTING_H
#define WBSHISTORYCONNECTIONPROXYFORTESTING_H

@class NSXPCListenerEndpoint;


#import "WBSHistoryConnectionProxy.h"

@interface WBSHistoryConnectionProxyForTesting : WBSHistoryConnectionProxy {
    NSXPCListenerEndpoint *_listenerEndpoint;
}




-(id)_createConnection;
-(id)initWithListenerEndpoint:(id)arg0 ;


@end


#endif