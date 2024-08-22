// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDIDSACTIVITYMONITOROBSERVER_H
#define HMDIDSACTIVITYMONITOROBSERVER_H

@class NSString, NSMutableDictionary;
@protocol IDSActivityMonitorListenerDelegate, HMFLogging, NSLocking, HMDIDSActivityMonitorObserverRegistrationManager;

#import <Foundation/Foundation.h>

#import "HMDIDSActivityMonitor.h"

@interface HMDIDSActivityMonitorObserver : NSObject <IDSActivityMonitorListenerDelegate, HMFLogging>

 {
    id<NSLocking> *_lock;
}


@property (readonly) HMDIDSActivityMonitor *activityMonitor; // ivar: _activityMonitor
@property (retain) NSObject<HMDIDSActivityMonitorObserverRegistrationManager> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSMutableDictionary *subactivityToDelegatesMap; // ivar: _subactivityToDelegatesMap
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithActivityMonitor:(id)arg0 ;
-(id)logIdentifier;
-(void)activityMonitor:(id)arg0 didReceiveActivityUpdate:(id)arg1 ;
-(void)addObserver:(id)arg0 forSubActivity:(id)arg1 ;
-(void)configureWithDataSource:(id)arg0 ;
-(void)removeObserver:(id)arg0 forSubActivity:(id)arg1 ;
-(void)startObservingPresenceForDevice:(id)arg0 ;
-(void)stopObservingPresenceForDevice:(id)arg0 ;


@end


#endif