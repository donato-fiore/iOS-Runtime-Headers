// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONCLIENTMANAGER_H
#define CLKCOMPLICATIONCLIENTMANAGER_H

@class NSMutableDictionary, NSLock, NSMutableSet, NSDictionary, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface CLKComplicationClientManager : NSObject <NSXPCListenerDelegate>

 {
    NSMutableDictionary *_clientsByIdentifier;
    NSLock *_clientsByIdentifierLock;
    NSMutableDictionary *_waitForClientRegistriesByIdentifier;
    NSLock *_waitForClientRegistriesByIdentifierLock;
    NSMutableSet *_anonymousClients;
    NSLock *_anonymousClientsLock;
    NSMutableSet *_clientPIDs;
    NSLock *_clientPIDsLock;
    NSUInteger _nextWaitForClientTokenValue;
    NSLock *_nextWaitForClientTokenValueLock;
}


@property (copy, nonatomic) id *clientRegistrationHandler; // ivar: _clientRegistrationHandler
@property (copy, nonatomic) id *clientUnregistrationHandler; // ivar: _clientUnregistrationHandler
@property (readonly, nonatomic) NSDictionary *clientsByIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedClientManager;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)waitForClientWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)_addClient:(id)arg0 ;
-(void)_removeClient:(id)arg0 ;
-(void)dealloc;
-(void)enumerateClientsWithBlock:(id)arg0 ;
-(void)stopWaitingForClientWithIdentifier:(id)arg0 forToken:(id)arg1 ;


@end


#endif