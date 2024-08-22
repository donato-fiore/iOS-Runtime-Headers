// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EMACTIVITYREGISTRYOBSERVERWRAPPER_H
#define _EMACTIVITYREGISTRYOBSERVERWRAPPER_H

@class NSMutableDictionary, NSArray, NSString;
@protocol EFCancelable, EMActivityObserver_xpc, EMActivityObserver;

#import <Foundation/Foundation.h>

#import "EMRemoteConnection.h"
#import "EMActivityRegistry.h"

@interface _EMActivityRegistryObserverWrapper : NSObject <EFCancelable, EMActivityObserver_xpc>

 {
    id<EFCancelable> *_observerCancelable;
    NSMutableDictionary *_trackedActivities;
    os_unfair_lock_s _lock;
}


@property (retain) NSArray *activities;
@property (retain) EMRemoteConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) NSObject<EMActivityObserver> *observer; // ivar: _observer
@property (weak) EMActivityRegistry *registry; // ivar: _registry
@property (readonly) Class superclass;


-(id)activityWithObjectID:(id)arg0 ;
-(id)initWithConnection:(id)arg0 registry:(id)arg1 observer:(id)arg2 ;
-(void)_recover;
-(void)_resetWithCancelable:(id)arg0 ;
-(void)_startObservingIfNecessary;
-(void)activityWithID:(id)arg0 finishedWithError:(id)arg1 ;
-(void)activityWithID:(id)arg0 setCompletedCount:(id)arg1 totalCount:(id)arg2 ;
-(void)activityWithID:(id)arg0 setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)removedActivityWithID:(id)arg0 ;
-(void)startedActivity:(id)arg0 ;


@end


#endif