// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFPROXCONTROLACTIVITYCLIENTMANAGER_H
#define HFPROXCONTROLACTIVITYCLIENTMANAGER_H

@class NSUUID, NSOrderedSet, PCDisambiguationContext, NSHashTable, PCRemoteActivityClient;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HFProxControlActivityClientManager : NSObject

@property (retain, nonatomic) NSUUID *accessoryID; // ivar: _accessoryID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataModelUpdateQueue; // ivar: _dataModelUpdateQueue
@property (nonatomic) BOOL hasStartedMonitoringUpdates; // ivar: _hasStartedMonitoringUpdates
@property (retain, nonatomic) NSUUID *homeID; // ivar: _homeID
@property (copy, nonatomic) NSOrderedSet *lastActivities; // ivar: _lastActivities
@property (retain, nonatomic) PCDisambiguationContext *lastDisambiguationContext; // ivar: _lastDisambiguationContext
@property (retain, nonatomic) NSObject *lastIdentifier; // ivar: _lastIdentifier
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) PCRemoteActivityClient *proxControlActivityClient; // ivar: _proxControlActivityClient
@property (nonatomic) BOOL useSAConfig; // ivar: _useSAConfig


+(id)sharedInstance;
-(id)_setupProxControlClient;
-(id)init;
-(id)startMonitoringUpdatesForAccessoryID:(id)arg0 homeID:(id)arg1 ;
-(id)startMonitoringUpdatesForMediaRemoteIdentifier:(id)arg0 ;
-(void)_notifyObserversForUpdatedActivities:(id)arg0 forProxControlID:(id)arg1 disambiguationContext:(id)arg2 ;
-(void)_resetProxClient;
-(void)addObserver:(id)arg0 ;
-(void)invalidateProxClient;
-(void)removeObserver:(id)arg0 ;
-(void)userTappedCloseButton;
-(void)userTappedDisambiguationButtonForContext:(id)arg0 ;


@end


#endif