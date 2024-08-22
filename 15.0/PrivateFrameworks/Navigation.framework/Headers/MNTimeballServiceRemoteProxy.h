// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNTIMEBALLSERVICEREMOTEPROXY_H
#define MNTIMEBALLSERVICEREMOTEPROXY_H

@class NSXPCConnection, NSString;
@protocol MNTimeballServiceProxyInterface, MNTimeballServiceProxyDelegate;

#import <Foundation/Foundation.h>

#import "MNTimeballSubscriberStore.h"

@interface MNTimeballServiceRemoteProxy : NSObject <MNTimeballServiceProxyInterface, MNTimeballServiceProxyDelegate>

 {
    NSXPCConnection *_connection;
    MNTimeballSubscriberStore *_subscriberStore;
    BOOL _requestLeeching;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<MNTimeballServiceProxyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_remoteObjectProxy;
-(id)init;
-(void)_closeConnection;
-(void)_openConnection;
-(void)_registerForNavdRestart;
-(void)completedUpdateForHandlerID:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveError:(id)arg0 forDestination:(id)arg1 ;
-(void)didReceiveUpdate:(id)arg0 forDestination:(id)arg1 ;
-(void)invokeHandlerWithID:(id)arg0 forDestination:(id)arg1 update:(id)arg2 error:(id)arg3 ;
-(void)requestRoutingOptions:(NSInteger)arg0 forDestinations:(id)arg1 freshness:(id)arg2 handlerID:(id)arg3 ;
-(void)subscribeToAllDestinations;
-(void)subscribeToDestination:(id)arg0 options:(NSInteger)arg1 refreshPolicy:(NSUInteger)arg2 ;
-(void)unsubscribeFromAllDestinations;
-(void)unsubscribeFromDestination:(id)arg0 ;


@end


#endif