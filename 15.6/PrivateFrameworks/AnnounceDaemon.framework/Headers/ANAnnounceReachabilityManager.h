// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANANNOUNCEREACHABILITYMANAGER_H
#define ANANNOUNCEREACHABILITYMANAGER_H

@class NSString, NSMutableDictionary, NSArray;
@protocol ANHomeManagerDelegate, ANRapportConnectionDeviceDelegate, ANAnnounceReachabilityManagerDelegate, OS_os_log, ANRapportConnectionProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ANAnnounceReachabilityManager : NSObject <ANHomeManagerDelegate, ANRapportConnectionDeviceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ANAnnounceReachabilityManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *homeReachability; // ivar: _homeReachability
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) NSArray *monitoredHomes;
@property (readonly, nonatomic) NSObject<ANRapportConnectionProvider> *rapportConnection; // ivar: _rapportConnection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (nonatomic) BOOL started; // ivar: _started
@property (readonly) Class superclass;


-(NSUInteger)_filteredReachabilityLevelFromReachabilityLevel:(NSUInteger)arg0 forHome:(id)arg1 ;
-(NSUInteger)_reachabilityForHome:(id)arg0 ;
-(NSUInteger)_reachabilityForRoom:(id)arg0 inHome:(id)arg1 ;
-(NSUInteger)reachabilityForHome:(id)arg0 ;
-(NSUInteger)reachabilityForRoom:(id)arg0 inHome:(id)arg1 ;
-(id)init;
-(id)monitoredRoomsForHome:(id)arg0 ;
-(void)_initializeReachabilityStatus;
-(void)_notifyClientsReachabilityChangeForHome:(id)arg0 toLevel:(NSUInteger)arg1 ;
-(void)_notifyClientsReachabilityChangeForRoom:(id)arg0 inHome:(id)arg1 toLevel:(NSUInteger)arg2 ;
-(void)_rapportActivationHandler:(id)arg0 ;
-(void)_reevaluateHomeKitReachabilityForHome:(id)arg0 ;
-(void)_updateReachabilityLevelWithReachabilityLevel:(NSUInteger)arg0 forAccessory:(id)arg1 operation:(NSUInteger)arg2 ;
-(void)accessoryDidUpdateControllable:(id)arg0 ;
-(void)connection:(id)arg0 didFindDevice:(id)arg1 ;
-(void)connection:(id)arg0 didLoseDevice:(id)arg1 ;
-(void)didAddHome:(id)arg0 ;
-(void)didRemoveHome:(id)arg0 ;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)homeDidUpdateAccessControlForCurrentUser:(id)arg0 ;
-(void)startWithCompletionHandler:(id)arg0 ;
-(void)stop;


@end


#endif