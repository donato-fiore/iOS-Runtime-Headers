// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUROUTECONTROLLER_H
#define TUROUTECONTROLLER_H

@class NSHashTable, NSArray, NSDictionary;
@protocol TURouteControllerActions, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TURoute.h"

@interface TURouteController : NSObject

@property (readonly, weak, nonatomic) NSObject<TURouteControllerActions> *actionsDelegate; // ivar: _actionsDelegate
@property (readonly, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (readonly, copy, nonatomic) TURoute *pickedRoute;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, copy, nonatomic) TURoute *receiverRoute;
@property (readonly, copy, nonatomic) NSArray *routes;
@property (copy, nonatomic) NSDictionary *routesByUniqueIdentifier; // ivar: _routesByUniqueIdentifier
@property (readonly, copy, nonatomic) TURoute *speakerRoute;


-(id)initWithActionsDelegate:(id)arg0 serialQueue:(id)arg1 ;
-(id)routeWithSourceIdentifier:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)handleRoutesByUniqueIdentifierUpdated:(id)arg0 ;
-(void)handleServerDisconnect;
-(void)handleServerReconnect;
-(void)pickRoute:(id)arg0 ;
-(void)pickRouteWhenAvailableWithUniqueIdentifier:(id)arg0 ;
-(void)pickRouteWithUniqueIdentifier:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)requeryRoutes;


@end


#endif