// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANANNOUNCEREACHABILITYSERVICELISTENER_H
#define ANANNOUNCEREACHABILITYSERVICELISTENER_H

@class NSMutableSet, NSString, NSXPCListener;
@protocol ANAnnounceReachabilityServiceInterface, ANAnnounceReachabilityManagerDelegate, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>

#import "ANAnnounceReachabilityManager.h"

@interface ANAnnounceReachabilityServiceListener : NSObject <ANAnnounceReachabilityServiceInterface, ANAnnounceReachabilityManagerDelegate, NSXPCListenerDelegate>



@property (retain) NSMutableSet *connections; // ivar: _connections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) ANAnnounceReachabilityManager *reachabilityManager; // ivar: _reachabilityManager
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_addConnection:(id)arg0 ;
-(void)_removeConnection:(id)arg0 ;
-(void)_sendCurrentReachabilityToConnection:(id)arg0 ;
-(void)announceReachabilityForHomeName:(id)arg0 reply:(id)arg1 ;
-(void)announceReachabilityForHomeUUID:(id)arg0 reply:(id)arg1 ;
-(void)announceReachabilityForRoomName:(id)arg0 inHomeName:(id)arg1 reply:(id)arg2 ;
-(void)announceReachabilityForRoomUUID:(id)arg0 inHomeUUID:(id)arg1 reply:(id)arg2 ;
-(void)cleanForExit;
-(void)reachabilityLevel:(NSUInteger)arg0 didChangeForHome:(id)arg1 ;
-(void)reachabilityLevel:(NSUInteger)arg0 didChangeForRoom:(id)arg1 inHome:(id)arg2 ;
-(void)resumeWithCompletionHandler:(id)arg0 ;


@end


#endif