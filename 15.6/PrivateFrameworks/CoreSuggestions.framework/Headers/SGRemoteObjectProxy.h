// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGREMOTEOBJECTPROXY_H
#define SGREMOTEOBJECTPROXY_H

@protocol SGDSuggestManagerAllProtocol;

#import <Foundation/Foundation.h>

#import "SGDaemonConnection.h"

@interface SGRemoteObjectProxy : NSObject <SGDSuggestManagerAllProtocol>

 {
    SGDaemonConnection *_connection;
    id<SGDSuggestManagerAllProtocol> *_inProcessSuggestManager;
    BOOL _queuesRequestsIfBusy;
}




-(id)initWithConnection:(id)arg0 queuesRequestsIfBusy:(BOOL)arg1 ;
-(id)initWithInProcessSuggestManager:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif