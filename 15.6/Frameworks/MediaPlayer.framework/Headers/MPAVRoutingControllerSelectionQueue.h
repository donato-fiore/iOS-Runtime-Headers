// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPAVROUTINGCONTROLLERSELECTIONQUEUE_H
#define MPAVROUTINGCONTROLLERSELECTIONQUEUE_H

@class NSMutableArray, NSMutableSet, MSVTimer, NSMapTable, NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPAVRoutingControllerSelection.h"
#import "MPAVRoute.h"
#import "MPAVRoutingController.h"

@interface MPAVRoutingControllerSelectionQueue : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_selectionsEnqueued;
    MPAVRoutingControllerSelection *_selectionInProgress;
    NSMutableSet *_pendingRoutes;
    MSVTimer *_selectionInProgressTimer;
    NSMapTable *_pendingSelectionTimers;
}


@property (readonly, nonatomic) BOOL hasPendingPickedRoutes; // ivar: _hasPendingPickedRoutes
@property (readonly, nonatomic) MPAVRoute *pendingPickedRoute;
@property (readonly, nonatomic) NSSet *pendingPickedRoutes;
@property (readonly, weak, nonatomic) MPAVRoutingController *routingController; // ivar: _routingController


-(BOOL)hasPendingRoutes;
-(BOOL)routeIsPendingPick:(id)arg0 ;
-(id)initWithRoutingController:(id)arg0 ;
-(void)_dequeue;
-(void)_dequeueSelectionWhenPossible;
-(void)_enqueue:(id)arg0 ;
-(void)_processSelection:(id)arg0 completion:(id)arg1 ;
-(void)addPendingRoutes:(id)arg0 ;
-(void)cancelInProgressSelectionForRoute:(id)arg0 ;
-(void)enqueueSelectionOperation:(NSInteger)arg0 forRoutes:(id)arg1 completion:(id)arg2 ;
-(void)pickedRouteDidChange;
-(void)removeAllPendingRoutes;
-(void)removePendingRoutes:(id)arg0 ;
-(void)removePendingRoutes:(id)arg0 withError:(BOOL)arg1 ;


@end


#endif