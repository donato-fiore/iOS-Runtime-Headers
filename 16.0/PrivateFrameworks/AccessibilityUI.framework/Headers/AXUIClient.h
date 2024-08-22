// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXUICLIENT_H
#define AXUICLIENT_H

@class NSString, NSDictionary, AXUIMessageSender;
@protocol AXUIMessageSenderDelegate, AXUIClientConnectionStateObserver, AXUIClientDelegate;

#import <Foundation/Foundation.h>

#import "AXUIClientConnection.h"

@interface AXUIClient : NSObject <AXUIMessageSenderDelegate, AXUIClientConnectionStateObserver>



@property (retain, nonatomic) AXUIClientConnection *clientConnection; // ivar: _clientConnection
@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXUIClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *initializationMessage; // ivar: _initializationMessage
@property (retain, nonatomic) AXUIMessageSender *messageSender; // ivar: _messageSender
@property (nonatomic, getter=isRegisteredWithServer) BOOL registeredWithServer; // ivar: _registeredWithServer
@property (copy, nonatomic) NSString *serviceBundleName; // ivar: _serviceBundleName
@property (readonly) Class superclass;


-(*void)messageSender:(id)arg0 extractCustomDataFromXPCReply:(id)arg1 numberOfKeyValuePairsForCustomData:(*NSUInteger)arg2 ;
-(id)initWithIdentifier:(id)arg0 serviceBundleName:(id)arg1 ;
-(id)sendSynchronousMessage:(id)arg0 withIdentifier:(NSUInteger)arg1 error:(*id)arg2 ;
-(void)_requestInitializationMessageFromDelegateIfNeeded;
-(void)clientConnection:(id)arg0 didChangeConnectedState:(BOOL)arg1 ;
-(void)dealloc;
-(void)messageSender:(id)arg0 accessLaunchAngelConnectionForMessageWithContext:(*void)arg1 usingBlock:(id)arg2 ;
-(void)messageSender:(id)arg0 accessXPCConnectionForMessageWithContext:(*void)arg1 usingBlock:(id)arg2 ;
-(void)messageSender:(id)arg0 processCustomDataFromXPCReply:(*void)arg1 ;
-(void)messageSender:(id)arg0 willSendXPCMessage:(id)arg1 context:(*void)arg2 ;
-(void)sendAsynchronousMessage:(id)arg0 withIdentifier:(NSUInteger)arg1 targetAccessQueue:(id)arg2 completion:(id)arg3 ;
-(void)sendAsynchronousMessage:(id)arg0 withIdentifier:(NSUInteger)arg1 targetAccessQueue:(id)arg2 completionRequiresWritingBlock:(BOOL)arg3 completion:(id)arg4 ;


@end


#endif