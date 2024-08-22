// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKHOST_H
#define PKHOST_H

@class NSMutableDictionary, NSMapTable, NSDictionary;
@protocol OS_dispatch_queue, PKProxyFactory;

#import <Foundation/Foundation.h>

#import "PKDaemonClient.h"

@interface PKHost : NSObject

@property (retain) NSMutableDictionary *activeOneShots; // ivar: _activeOneShots
@property (retain) NSMutableDictionary *activePlugIns; // ivar: _activePlugIns
@property (retain) PKDaemonClient *daemon; // ivar: _daemon
@property (retain) NSMapTable *discoveryMap; // ivar: _discoveryMap
@property (readonly) NSDictionary *hostInfoPlist; // ivar: _hostInfoPlist
@property (retain) NSObject<OS_dispatch_queue> *hostQueue; // ivar: _hostQueue
@property (retain) NSObject<PKProxyFactory> *proxyFactory; // ivar: _proxyFactory


+(id)defaultHost;
-(id)activatePlugIn:(id)arg0 ;
-(id)activePlugInForIdentifier:(id)arg0 ;
-(id)continuouslyDiscoverPlugInsForAttributes:(id)arg0 flags:(NSUInteger)arg1 found:(id)arg2 ;
-(id)init;
-(id)initWithDaemon:(id)arg0 proxyFactory:(id)arg1 ;
-(id)rewriteDiscoveryAttributes:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)accessPlugIns:(id)arg0 synchronously:(BOOL)arg1 flags:(NSUInteger)arg2 extensions:(id)arg3 ;
-(void)cancelPlugInDiscovery:(id)arg0 ;
-(void)deactivatePlugIn:(id)arg0 ;
-(void)discoverPlugInsForAttributes:(id)arg0 flags:(NSUInteger)arg1 found:(id)arg2 ;
-(void)findPlugInByPathURL:(id)arg0 reply:(id)arg1 ;
-(void)findPlugInByUUID:(id)arg0 reply:(id)arg1 ;
-(void)readyPlugIns:(id)arg0 synchronously:(BOOL)arg1 environment:(id)arg2 languages:(id)arg3 persona:(id)arg4 sandbox:(id)arg5 ready:(id)arg6 ;
-(void)setElection:(NSInteger)arg0 forPlugIn:(id)arg1 ;
-(void)setExtensionState:(id)arg0 forPlugIn:(id)arg1 ;


@end


#endif