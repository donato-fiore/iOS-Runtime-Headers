// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPHOMEMANAGEROBSERVER_H
#define MPHOMEMANAGEROBSERVER_H

@class HMHomeManager, HMHome, HMUser, NSSet, NSMutableDictionary, HMAccessory, NSString;
@protocol HMHomeManagerDelegatePrivate, HMHomeDelegatePrivate, OS_dispatch_queue, MPHomeManagerObserverDelegate;

#import <Foundation/Foundation.h>

#import "MPHomeUserMonitor.h"

@interface MPHomeManagerObserver : NSObject <HMHomeManagerDelegatePrivate, HMHomeDelegatePrivate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    HMHomeManager *_homeManager;
    HMHome *_currentHome;
    HMUser *_currentUser;
    NSSet *_homeUsers;
    NSMutableDictionary *_userMonitorMap;
    BOOL _soundCheckCachedValue;
    BOOL _setupDidComplete;
}


@property (readonly, nonatomic) HMAccessory *currentAccessory;
@property (readonly, nonatomic) HMHome *currentHome;
@property (readonly, nonatomic) HMUser *currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MPHomeManagerObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCurrentAccessory;
@property (readonly, nonatomic) BOOL hasCurrentHome;
@property (readonly, nonatomic) BOOL hasCurrentUser;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MPHomeUserMonitor *monitorForCurrentUser;
@property (readonly, nonatomic) BOOL setupDidComplete;
@property (nonatomic, getter=isSoundCheckEnabled) BOOL soundCheckEnabled;
@property (readonly) Class superclass;


+(id)sharedObserver;
-(id)_userMonitorWithHomeIdentifiers:(id)arg0 ;
-(id)homeAccesssoryWithRouteID:(id)arg0 ;
-(id)init;
-(id)userMonitorWithHomeIdentifier:(id)arg0 ;
-(id)userMonitorWithHomeIdentifiers:(id)arg0 ;
-(void)_soundCheckDidChange;
-(void)_update;
-(void)_updateAsyncOnQueue;
-(void)_updateSoundCheck;
-(void)_usersDidChange;
-(void)homeDidUpdateAccessControlForCurrentUser:(id)arg0 ;
-(void)homeDidUpdateSoundCheck:(id)arg0 ;
-(void)homeManager:(id)arg0 didAddHome:(id)arg1 ;
-(void)homeManager:(id)arg0 didRemoveHome:(id)arg1 ;
-(void)homeManager:(id)arg0 didUpdateStatus:(NSUInteger)arg1 ;
-(void)homeManagerDidRemoveCurrentAccessory:(id)arg0 ;
-(void)homeManagerDidUpdateCurrentHome:(id)arg0 ;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;
-(void)homeManagerDidUpdatePrimaryHome:(id)arg0 ;


@end


#endif