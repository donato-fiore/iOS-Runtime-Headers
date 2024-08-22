// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMXPCSERVICE_H
#define CDMXPCSERVICE_H

@class NSMutableArray, NSString, AFPreferences;
@protocol CDMXPCConnectionDelegate, OS_dispatch_queue;


#import "CDMBaseService.h"
#import "CDMXPCListener.h"

@interface CDMXPCService : CDMBaseService <CDMXPCConnectionDelegate>

 {
    CDMXPCListener *_listener;
    NSMutableArray *_connections;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_localeIdentifier;
    AFPreferences *_afPreferences;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isErrorFatal:(id)arg0 ;
-(BOOL)publishErrorIfNilLanguage:(id)arg0 withClientId:(id)arg1 ;
-(BOOL)validResponseType:(id)arg0 expectedKindOfClass:(Class)arg1 outError:(*id)arg2 ;
-(id)getLocaleIdentifier;
-(id)initWithConfig:(id)arg0 ;
-(id)supportedCommands;
-(void)_handleGenericSend:(id)arg0 withCallback:(id)arg1 ;
-(void)_handleNewConnection:(id)arg0 ;
-(void)_initializeXPCListener;
-(void)handleCommand:(id)arg0 withCallback:(id)arg1 ;
-(void)setLocaleIdentifier:(id)arg0 ;
-(void)smXPCConnection:(id)arg0 didReceiveUpdate:(id)arg1 ;
-(void)smXPCConnectionDidDisconnect:(id)arg0 ;
-(void)smXPCConnectionListGraphs:(id)arg0 withReply:(id)arg1 ;
-(void)smXPCConnectionNLU:(id)arg0 nluRequest:(id)arg1 ;
-(void)smXPCConnectionSetGraph:(id)arg0 activeGraph:(id)arg1 withReply:(id)arg2 ;
-(void)smXPCConnectionSetup:(id)arg0 setupRequest:(id)arg1 ;


@end


#endif