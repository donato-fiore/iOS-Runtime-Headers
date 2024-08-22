// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MGDAEMON_H
#define MGDAEMON_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, MGServiceInterfaceProtocol, MGGroupsQueryAgentDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MGServiceClientSet.h"
#import "MGGroupsMediator.h"
#import "MGServiceListenerProvider.h"
#import "MGGroupsQueryAgent.h"

@interface MGDaemon : NSObject <NSXPCListenerDelegate, MGServiceInterfaceProtocol, MGGroupsQueryAgentDelegate>



@property (readonly, nonatomic) MGServiceClientSet *clients; // ivar: _clients
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, nonatomic) MGGroupsMediator *groupsMediator; // ivar: _groupsMediator
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly, nonatomic) MGServiceListenerProvider *listenerProvider; // ivar: _listenerProvider
@property (readonly, nonatomic) MGGroupsQueryAgent *queryAgent; // ivar: _queryAgent
@property (readonly) Class superclass;
@property (copy, nonatomic) id *topologyRequestHandler; // ivar: _topologyRequestHandler


+(id)daemon;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)initWithServiceListenerProvider:(id)arg0 ;
-(void)HomeKitAccessoryOfType:(id)arg0 accessoryIdentifier:(id)arg1 homeIdentifier:(id)arg2 categoryType:(id)arg3 name:(id)arg4 completion:(id)arg5 ;
-(void)_ingestHomeKitHome:(id)arg0 ;
-(void)addHomeKitAccessory:(id)arg0 fromHome:(id)arg1 ;
-(void)addHomeKitHome:(id)arg0 ;
-(void)addHomeKitMediaSystem:(id)arg0 ;
-(void)addHomeKitMediaSystem:(id)arg0 fromHome:(id)arg1 ;
-(void)addHomeKitRoom:(id)arg0 fromHome:(id)arg1 ;
-(void)addHomeKitZone:(id)arg0 fromHome:(id)arg1 ;
-(void)addMember:(id)arg0 group:(id)arg1 completion:(id)arg2 ;
-(void)createGroupWithType:(id)arg0 name:(id)arg1 members:(id)arg2 completion:(id)arg3 ;
-(void)deleteGroup:(id)arg0 completion:(id)arg1 ;
-(void)groupsQueryAgent:(id)arg0 didFindGroups:(id)arg1 forQuery:(id)arg2 ;
-(void)removeHomeKitAccessory:(id)arg0 fromHome:(id)arg1 ;
-(void)removeHomeKitHome:(id)arg0 ;
-(void)removeHomeKitMediaSystem:(id)arg0 ;
-(void)removeHomeKitMediaSystem:(id)arg0 fromHome:(id)arg1 ;
-(void)removeHomeKitRoom:(id)arg0 fromHome:(id)arg1 ;
-(void)removeHomeKitZone:(id)arg0 fromHome:(id)arg1 ;
-(void)removeMember:(id)arg0 group:(id)arg1 completion:(id)arg2 ;
-(void)setName:(id)arg0 group:(id)arg1 completion:(id)arg2 ;
-(void)startQueryWithPredicate:(id)arg0 completion:(id)arg1 ;
-(void)stopQuery:(id)arg0 completion:(id)arg1 ;


@end


#endif