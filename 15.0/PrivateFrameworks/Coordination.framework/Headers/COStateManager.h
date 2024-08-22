// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COSTATEMANAGER_H
#define COSTATEMANAGER_H

@class NSSet, NSString, NSXPCConnection, NSArray, NSDictionary;
@protocol COStateManagerClientInterface, OS_dispatch_queue, COStateManagerConnectionProvider;

#import <Foundation/Foundation.h>


@interface COStateManager : NSObject <COStateManagerClientInterface>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_workQueue;
}


@property (readonly, copy, nonatomic) NSSet *clusters; // ivar: _clusters
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSXPCConnection *lastConnection; // ivar: _lastConnection
@property (copy, nonatomic) NSArray *mediaStateObservers; // ivar: _mediaStateObservers
@property (copy, nonatomic) NSArray *observers; // ivar: _observers
@property (readonly, nonatomic) NSObject<COStateManagerConnectionProvider> *provider; // ivar: _provider
@property (copy, nonatomic) NSDictionary *state; // ivar: _state
@property (readonly, copy, nonatomic) NSString *suite; // ivar: _suite
@property (readonly) Class superclass;


-(BOOL)_onqueue_clustersValid:(id)arg0 ;
-(BOOL)isMediaSystemLeader;
// -(id)_remoteInterfaceWithErrorHandler:(id)arg0 checkinWithServer:(unk)arg1  ;
-(id)_sanitizeChanges:(id)arg0 ;
-(id)addMediaSystemLeaderObserverToDispatchQueue:(id)arg0 block:(id)arg1 ;
-(id)addObserverForKeyPathUsingPredicate:(id)arg0 queue:(id)arg1 usingBlock:(id)arg2 ;
-(id)initWithConnectionProvider:(id)arg0 suite:(id)arg1 clusters:(id)arg2 ;
-(id)initWithSuiteName:(id)arg0 clusters:(id)arg1 ;
-(void)_invalidate;
-(void)_lostConnectionToService;
-(void)_onqueue_registerObserver:(id)arg0 ;
-(void)_onqueue_removeObjectsForKeyPaths:(id)arg0 clusters:(id)arg1 completionHandler:(id)arg2 ;
-(void)_onqueue_setDictionary:(id)arg0 clusters:(id)arg1 completionHandler:(id)arg2 ;
-(void)_withLock:(id)arg0 ;
-(void)changesObserved:(id)arg0 forPredicate:(id)arg1 ;
-(void)dealloc;
-(void)delayForDoorbellChimeWithCompletionHandler:(id)arg0 ;
-(void)fetchCompositionForCluster:(id)arg0 dispatchQueue:(id)arg1 block:(id)arg2 ;
-(void)mediaSystemLeaderDidChangeTo:(BOOL)arg0 callback:(id)arg1 ;
-(void)removeMediaSystemLeaderObserver:(id)arg0 ;
-(void)removeObjectForKeyPath:(id)arg0 clusters:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeObjectsForKeyPaths:(id)arg0 clusters:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)roleOfMember:(id)arg0 inCluster:(id)arg1 didChangeTo:(id)arg2 ;
-(void)setBool:(BOOL)arg0 forKeyPath:(id)arg1 clusters:(id)arg2 completionHandler:(id)arg3 ;
-(void)setDate:(id)arg0 forKeyPath:(id)arg1 clusters:(id)arg2 completionHandler:(id)arg3 ;
-(void)setDictionary:(id)arg0 clusters:(id)arg1 completionHandler:(id)arg2 ;
-(void)setNumber:(id)arg0 forKeyPath:(id)arg1 clusters:(id)arg2 completionHandler:(id)arg3 ;
-(void)setString:(id)arg0 forKeyPath:(id)arg1 clusters:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif