// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSUBSCRIPTIONMANAGER_H
#define DRSUBSCRIPTIONMANAGER_H

@class NSMutableSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DRSubscriptionManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (readonly, nonatomic) NSMutableSet *inFlightSubscriptionRequests; // ivar: _inFlightSubscriptionRequests
@property (readonly, nonatomic) NSMutableDictionary *perTeamIdConfigState; // ivar: _perTeamIdConfigState
@property (readonly, nonatomic) NSMutableDictionary *perTeamIdMonitors; // ivar: _perTeamIdMonitors


+(id)sharedInstance;
-(BOOL)_hasInitializedSubscriptionForTeamID:(id)arg0 cachedConfigOut:(*id)arg1 errorOut:(*id)arg2 ;
-(id)_configFromEvent:(id)arg0 teamIdOut:(*id)arg1 ;
-(id)init;
-(void)_broadcastErrorForTeamID:(id)arg0 error:(id)arg1 ;
-(void)_completeSubscriptionRequestForTeamID:(id)arg0 config:(id)arg1 event:(id)arg2 ;
-(void)_processNewEvent:(id)arg0 ;
-(void)_requestSubscriptionToTeamIDStream:(id)arg0 ;
-(void)_unsubscribeFromStreamWithTeamID:(id)arg0 ;
-(void)addMonitor:(id)arg0 ;
-(void)removeMonitor:(id)arg0 ;


@end


#endif