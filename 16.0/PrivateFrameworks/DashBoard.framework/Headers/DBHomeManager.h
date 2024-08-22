// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBHOMEMANAGER_H
#define DBHOMEMANAGER_H

@class NSString, HMFLocationAuthorization, HMHomeManager, NSDictionary, CARObserverHashTable;
@protocol DBHomeKitResourceProvider, HMHomeManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DBLocationManager.h"
#import "DBNetworkPathMonitor.h"

@interface DBHomeManager : NSObject <DBHomeKitResourceProvider, HMHomeManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMFLocationAuthorization *homeLocationAuthorization; // ivar: _homeLocationAuthorization
@property (retain, nonatomic) HMHomeManager *homeManager; // ivar: _homeManager
@property (retain, nonatomic) NSDictionary *homes; // ivar: _homes
@property (retain, nonatomic) DBLocationManager *locationManager; // ivar: _locationManager
@property (retain, nonatomic) DBNetworkPathMonitor *networkPathMonitor; // ivar: _networkPathMonitor
@property (retain) CARObserverHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)init;
-(void)_authorizeHomeManager;
-(void)_setupHomeManager;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif