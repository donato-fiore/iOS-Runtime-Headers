// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTMTLDIAGNOSTICSSERVICEOBSERVER_H
#define GTMTLDIAGNOSTICSSERVICEOBSERVER_H

@protocol GTMTLDiagnosticsServiceObserver, OS_xpc_object, GTXPCConnection;

#import <Foundation/Foundation.h>


@interface GTMTLDiagnosticsServiceObserver : NSObject <GTMTLDiagnosticsServiceObserver>

 {
    NSUInteger _replyStream;
    NSObject<OS_xpc_object> *_replyPath;
    id<GTXPCConnection> *_connection;
}




-(id)initWithMessage:(id)arg0 notifyConnection:(id)arg1 ;
-(void)notifyCommandBufferIssue:(id)arg0 ;
-(void)notifyDiagnosticsIssue:(id)arg0 ;


@end


#endif