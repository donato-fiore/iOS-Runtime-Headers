// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPDPROCESSMONITOR_H
#define FPDPROCESSMONITOR_H

@class RBSProcessMonitor, NSMutableDictionary, NSCountedSet, NSMutableSet, NSSet;
@protocol FPDProcessMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FPDProcessMonitor : NSObject {
    RBSProcessMonitor *_monitor;
    NSMutableDictionary *_bundleIDForPID;
    NSCountedSet *_bundleIDs;
    NSCountedSet *_pids;
    NSMutableSet *_foregroundBundleIDs;
    NSSet *_excludedBundleIDs;
}


@property (weak) NSObject<FPDProcessMonitorDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue


-(BOOL)_isProcessForeground:(id)arg0 ;
-(BOOL)isForeground;
-(id)_bundleIDForPID:(int)arg0 ;
-(id)description;
-(id)initWithExcludedBundleIDs:(id)arg0 ;
-(id)prettyDescription;
-(void)_addPIDToObserve:(int)arg0 ;
-(void)_configureAppMonitor:(id)arg0 ;
-(void)_createMonitor;
-(void)_handleProcessStateUpdate:(id)arg0 ;
-(void)_invalidate;
-(void)_removePIDToObserve:(int)arg0 ;
-(void)_startMonitoringAndSendInitialNotificationForPID:(int)arg0 ;
-(void)_stopMonitoringPID:(int)arg0 ;
-(void)_updateMonitoredBundleIDs;
-(void)addPIDToObserve:(int)arg0 ;
-(void)invalidate;
-(void)process:(int)arg0 didBecomeForeground:(BOOL)arg1 ;
-(void)removePIDToObserve:(int)arg0 ;


@end


#endif