// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXXPCCALLSOURCE_H
#define CXXPCCALLSOURCE_H

@class NSString, NSURL, NSSet, NSXPCConnection;


#import "CXCallSource.h"

@interface CXXPCCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}


@property (readonly, nonatomic) os_unfair_lock_s accessorLock; // ivar: _accessorLock
@property (readonly, copy, nonatomic) NSSet *capabilities; // ivar: _capabilities
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, nonatomic) BOOL hasVoIPBackgroundMode; // ivar: _hasVoIPBackgroundMode


-(BOOL)isConnected;
-(BOOL)isPermittedToUseBluetoothAccessories;
-(BOOL)isPermittedToUsePrivateAPI;
-(BOOL)isPermittedToUsePublicAPI;
-(id)bundleIdentifier;
-(id)bundleURL;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(id)localizedName;
-(id)vendorProtocolDelegate;
-(int)processIdentifier;
-(struct ? )auditToken;
-(void)dealloc;


@end


#endif