// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLREMOTEDIAGNOSTICSCLIENT_H
#define PLREMOTEDIAGNOSTICSCLIENT_H

@class NSXPCConnection, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface PLRemoteDiagnosticsClient : NSObject <NSXPCListenerDelegate>

 {
    NSXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_connectionForListenerEndpoint:(id)arg0 ;
+(id)diagnosticsAgentWithErrorHandler:(id)arg0 ;


@end


#endif