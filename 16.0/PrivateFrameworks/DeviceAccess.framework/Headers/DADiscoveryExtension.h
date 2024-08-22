// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DADISCOVERYEXTENSION_H
#define DADISCOVERYEXTENSION_H

@class NSXPCConnection, _EXExtensionIdentity;
@protocol DADiscoveryExtensionXPCProtocolHost, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DADiscovery.h"

@interface DADiscoveryExtension : NSObject <DADiscoveryExtensionXPCProtocolHost>

 {
    NSXPCConnection *_xpcConnection;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) _EXExtensionIdentity *ekExtension; // ivar: _ekExtension
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) DADiscovery *parent; // ivar: _parent


-(id)description;
-(void)_activate;
-(void)_interrupted;
-(void)_invalidate;
-(void)_invalidated;
-(void)activate;
-(void)invalidate;
-(void)reportEvent:(id)arg0 ;


@end


#endif