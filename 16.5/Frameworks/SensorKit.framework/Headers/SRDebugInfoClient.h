// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRDEBUGINFOCLIENT_H
#define SRDEBUGINFOCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface SRDebugInfoClient : NSObject

@property (retain) NSXPCConnection *connection; // ivar: _connection
@property BOOL connectionDidInterrupt; // ivar: _connectionDidInterrupt


+(id)clientInterface;
+(id)remoteInterface;
+(void)initialize;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(void)datastoreListingWithReply:(id)arg0 ;
-(void)dealloc;
-(void)dumpClientsWithReply:(id)arg0 ;
-(void)dumpConfigurationsWithReply:(id)arg0 ;
-(void)dumpDefaultsWithReply:(id)arg0 ;
-(void)dumpStateCacheWithReply:(id)arg0 ;
-(void)fetchEligibilityStatusForBundleIdentifier:(id)arg0 sensor:(id)arg1 reply:(id)arg2 ;
-(void)invalidate;
-(void)listClientsWithReply:(id)arg0 ;
-(void)setupConnection;


@end


#endif