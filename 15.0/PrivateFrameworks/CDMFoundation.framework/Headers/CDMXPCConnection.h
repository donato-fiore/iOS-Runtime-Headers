// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMXPCCONNECTION_H
#define CDMXPCCONNECTION_H

@class NSXPCConnection, NSString, NSDictionary;
@protocol CDMXPCListenerService, CDMXPCConnectionDelegate;

#import <Foundation/Foundation.h>


@interface CDMXPCConnection : NSObject <CDMXPCListenerService>

 {
    NSXPCConnection *_connection;
}


@property (readonly, nonatomic) NSString *clientId; // ivar: _clientId
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CDMXPCConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) Class superclass;


-(id)_remoteObject;
-(id)initWithXPCConnection:(id)arg0 ;
-(void)dealloc;
-(void)handleClientAceUpdate:(id)arg0 ;
-(void)handleClientListGraphs:(id)arg0 ;
-(void)handleClientNLURequest:(id)arg0 ;
-(void)handleClientSetGraph:(id)arg0 reply:(id)arg1 ;
-(void)handleClientSetupRequest:(id)arg0 ;
-(void)publish:(id)arg0 ;
-(void)publishError:(id)arg0 isFatal:(BOOL)arg1 ;
-(void)publishNLUResponse:(id)arg0 ;


@end


#endif