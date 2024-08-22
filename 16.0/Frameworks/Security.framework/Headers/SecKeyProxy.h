// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SECKEYPROXY_H
#define SECKEYPROXY_H

@class NSData, NSXPCListener, NSString, NSXPCListenerEndpoint;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface SecKeyProxy : NSObject <NSXPCListenerDelegate>

 {
    id *_key;
    NSData *_certificate;
    NSXPCListener *_listener;
    uint8_t _clientCount;
}


@property (copy, nonatomic) id *clientConnectionHandler; // ivar: _clientConnectionHandler
@property (copy, nonatomic) id *clientDisconnectionHandler; // ivar: _clientDisconnectionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)targetForKey:(struct __SecKey *)arg0 error:(struct __CFError **)arg1 ;
+(struct __SecIdentity *)createIdentityFromEndpoint:(id)arg0 error:(*id)arg1 ;
+(struct __SecKey *)createItemFromEndpoint:(id)arg0 certificate:(*id)arg1 error:(*id)arg2 ;
+(struct __SecKey *)createKeyFromEndpoint:(id)arg0 error:(*id)arg1 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithIdentity:(struct __SecIdentity *)arg0 ;
-(id)initWithKey:(struct __SecKey *)arg0 ;
-(id)initWithKey:(struct __SecKey *)arg0 certificate:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif