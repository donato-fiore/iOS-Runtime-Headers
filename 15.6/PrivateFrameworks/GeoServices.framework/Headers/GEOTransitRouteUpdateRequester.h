// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTRANSITROUTEUPDATEREQUESTER_H
#define GEOTRANSITROUTEUPDATEREQUESTER_H

@class NSMutableSet, NSTimer, NSHashTable;

#import <Foundation/Foundation.h>


@interface GEOTransitRouteUpdateRequester : NSObject {
    os_unfair_lock_s _updatersLock;
    os_unfair_lock_s _processedRequestsLock;
    os_unfair_lock_s _inflightRequestsLock;
    NSMutableSet *_inflightRequests;
    NSTimer *_updateTimer;
    NSUInteger _maxRetries;
    NSUInteger _numRetries;
}


@property (nonatomic) CGFloat initialDelay; // ivar: _initialDelay
@property (readonly, nonatomic) NSMutableSet *processedRequests; // ivar: _processedRequests
@property (nonatomic) CGFloat requestInterval; // ivar: _requestInterval
@property (readonly, nonatomic) NSHashTable *updaters; // ivar: _updaters


+(id)sharedInstance;
-(id)_requestsForUpdaters:(id)arg0 ;
-(id)_uuidsForRequests:(id)arg0 ;
-(id)initPrivate;
-(void)_cancelAllRequestsIfNeeded;
-(void)_cancelUpdateTimer;
-(void)_handleResponse:(id)arg0 andError:(id)arg1 forRequest:(id)arg2 ;
-(void)_processRequests;
-(void)_purgeAllObjects;
-(void)_removeRequestsIfApplicable:(id)arg0 ;
-(void)_scheduleUpdateTimerWithInterval:(CGFloat)arg0 ;
-(void)_sendRequestForRequests:(id)arg0 ;
-(void)registerRouteUpdater:(id)arg0 ;
-(void)unregisterRouteUpdater:(id)arg0 ;


@end


#endif