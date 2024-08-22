// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMXPCCLIENT_H
#define CDMXPCCLIENT_H

@class NSXPCConnection, NSString;
@protocol CDMXPCListenerServiceDelegate, CDMXPCListenerService, CDMXPCClientDelegate;

#import <Foundation/Foundation.h>


@interface CDMXPCClient : NSObject <CDMXPCListenerServiceDelegate, CDMXPCListenerService>

 {
    NSXPCConnection *_connection;
    id<CDMXPCClientDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)connect;
-(void)disconnect;
-(void)handleClientAceUpdate:(id)arg0 ;
-(void)handleClientListGraphs:(id)arg0 ;
-(void)handleClientNLURequest:(id)arg0 ;
-(void)handleClientSetGraph:(id)arg0 reply:(id)arg1 ;
-(void)handleClientSetupRequest:(id)arg0 ;
-(void)handleServiceAceUpdate:(id)arg0 ;
-(void)handleServiceErrorResponse:(id)arg0 ;
-(void)handleServiceNLUResponse:(id)arg0 ;


@end


#endif