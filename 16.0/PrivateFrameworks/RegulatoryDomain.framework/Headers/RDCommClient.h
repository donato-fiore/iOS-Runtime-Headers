// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RDCOMMCLIENT_H
#define RDCOMMCLIENT_H

@class NSXPCConnection;
@protocol RDXPCProtocol;

#import <Foundation/Foundation.h>


@interface RDCommClient : NSObject <RDXPCProtocol>

 {
    NSXPCConnection *connection;
    id<RDXPCProtocol> *server;
}




-(id)init;
-(void)clearDataCache;
-(void)clearStatusSharedWithPeers;
-(void)createCacheDirAtPath:(id)arg0 ;
-(void)ping;
-(void)shareStatusWithPeers;
-(void)update:(NSInteger)arg0 withCountryCode:(id)arg1 ;
-(void)updatePeer:(id)arg0 withCountryCode:(id)arg1 priority:(int)arg2 andTimestamp:(id)arg3 ;
-(void)updatePeer:(id)arg0 withEstimate:(id)arg1 ;


@end


#endif