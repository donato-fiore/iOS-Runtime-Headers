// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRREGULATORYASSISTANCEENDPOINT_H
#define PRREGULATORYASSISTANCEENDPOINT_H

@class NSXPCConnection;
@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PRRegulatoryAssistanceEndpoint : NSObject {
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_conn;
}




+(id)endpointWithQueue:(id)arg0 ;
-(id)initInternalWithQueue:(id)arg0 ;
-(void)connectWithCompletionHandler:(id)arg0 ;
-(void)invalidate;
-(void)provideIsoCode:(id)arg0 ;


@end


#endif