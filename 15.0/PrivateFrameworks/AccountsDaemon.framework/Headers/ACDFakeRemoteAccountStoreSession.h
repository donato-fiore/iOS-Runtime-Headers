// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACDFAKEREMOTEACCOUNTSTORESESSION_H
#define ACDFAKEREMOTEACCOUNTSTORESESSION_H

@class ACRemoteAccountStoreSession;

#import <Foundation/Foundation.h>


@interface ACDFakeRemoteAccountStoreSession : ACRemoteAccountStoreSession {
    NSObject *_proxy;
}




-(id)initWithFakeProxy:(id)arg0 ;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;


@end


#endif