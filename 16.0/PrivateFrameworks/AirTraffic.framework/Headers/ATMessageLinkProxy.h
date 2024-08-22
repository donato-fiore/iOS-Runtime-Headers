// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATMESSAGELINKPROXY_H
#define ATMESSAGELINKPROXY_H

@class NSXPCConnection, NSXPCListenerEndpoint, NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol NSSecureCoding, ATMessageLinkObserver, ATMessageLinkRequestHandler;


#import "ATMessageLink.h"

@interface ATMessageLinkProxy : ATMessageLink <NSSecureCoding, ATMessageLinkObserver, ATMessageLinkRequestHandler>

 {
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_endpoint;
    NSHashTable *_observers;
    NSMutableDictionary *_requestHandlers;
    NSMutableSet *_streams;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int endpointType; // ivar: _endpointType
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic, getter=isInitialized) BOOL initialized; // ivar: _initialized
@property (nonatomic, getter=isOpen) BOOL open; // ivar: _open
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)addRequestHandler:(id)arg0 forDataClass:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)messageLink:(id)arg0 didReceiveRequest:(id)arg1 completion:(id)arg2 ;
-(void)messageLinkWasClosed:(id)arg0 ;
-(void)messageLinkWasInitialized:(id)arg0 ;
-(void)messageLinkWasOpened:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeRequestHandlerForDataClass:(id)arg0 ;
-(void)sendRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)sendResponse:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif