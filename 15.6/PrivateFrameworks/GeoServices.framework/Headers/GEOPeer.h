// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPEER_H
#define GEOPEER_H

@class NSMutableDictionary, NSString;
@protocol NSObject, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "GEODaemon.h"
#import "GEOProxyClient.h"

@interface GEOPeer : NSObject {
    GEODaemon *_daemon;
    NSMutableDictionary *_entitlementValueCache;
    id<NSObject> *_peerTransaction;
    id<NSObject> *_preloadingTransaction;
}


@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) GEOProxyClient *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (copy, nonatomic) NSString *debugIdentifier; // ivar: _debugIdentifier
@property (retain, nonatomic) NSMutableDictionary *entitlementCache; // ivar: _entitlementCache
@property (nonatomic) NSUInteger handleRequestSignpost; // ivar: _handleRequestSignpost
@property (readonly, nonatomic) BOOL isLocationd;
@property (readonly, nonatomic) NSString *peerID; // ivar: _peerID
@property (nonatomic) BOOL preloading; // ivar: _preloading
@property (nonatomic) BOOL preloadingExclusively; // ivar: _preloadingExclusively


-(BOOL)hasEntitlement:(id)arg0 ;
-(id)description;
-(id)initWithConnection:(id)arg0 daemon:(id)arg1 ;
-(id)valueForEntitlement:(id)arg0 ;
-(void)_handleEvent:(id)arg0 ;
-(void)dealloc;


@end


#endif