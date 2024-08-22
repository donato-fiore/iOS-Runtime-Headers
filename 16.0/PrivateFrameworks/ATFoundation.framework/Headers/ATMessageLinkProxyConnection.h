// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATMESSAGELINKPROXYCONNECTION_H
#define ATMESSAGELINKPROXYCONNECTION_H

@class NSXPCConnection, NSString, ATMessageLink;
@protocol ATMessageLinkProxyConnection, NSStreamDelegate, ATMessageLinkObserver, ATMessageLinkRequestHandler;

#import <Foundation/Foundation.h>


@interface ATMessageLinkProxyConnection : NSObject <ATMessageLinkProxyConnection, NSStreamDelegate, ATMessageLinkObserver, ATMessageLinkRequestHandler>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) ATMessageLink *messageLink; // ivar: _messageLink
@property (readonly) Class superclass;


-(id)initWithMessageLink:(id)arg0 connection:(id)arg1 ;
-(void)addRequestHandler:(id)arg0 forDataClass:(id)arg1 completion:(id)arg2 ;
-(void)connectWithCompletion:(id)arg0 ;
-(void)messageLink:(id)arg0 didReceiveRequest:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg0 ;
-(void)messageLinkWasInitialized:(id)arg0 ;
-(void)messageLinkWasOpened:(id)arg0 ;
-(void)removeRequestHandlerForDataClass:(id)arg0 completion:(id)arg1 ;
-(void)sendRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)sendResponse:(id)arg0 withCompletion:(id)arg1 ;
-(void)stop;


@end


#endif