// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AEASSESSMENTSTATESOURCEREGISTERINGPROXY_H
#define AEASSESSMENTSTATESOURCEREGISTERINGPROXY_H

@protocol AEAssessmentStateSourceRegistering, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AEXPCProxy.h"

@interface AEAssessmentStateSourceRegisteringProxy : NSObject <AEAssessmentStateSourceRegistering>

 {
    AEXPCProxy *_xpcProxy;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)daemonProxyWithQueue:(id)arg0 ;
+(id)proxyWithEndpoint:(id)arg0 queue:(id)arg1 ;
-(void)registerPublisherWithLifetimeEndpoint:(id)arg0 completion:(id)arg1 ;


@end


#endif