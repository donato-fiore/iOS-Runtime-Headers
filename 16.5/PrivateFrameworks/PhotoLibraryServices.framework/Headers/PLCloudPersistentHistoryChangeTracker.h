// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLOUDPERSISTENTHISTORYCHANGETRACKER_H
#define PLCLOUDPERSISTENTHISTORYCHANGETRACKER_H

@class NSPersistentHistoryToken, NSPersistentStoreCoordinator, NSString;
@protocol PLCloudPersistentHistoryChangeTrackerDelegate;

#import <Foundation/Foundation.h>

#import "PLChangeHandlingNotificationObserver.h"

@interface PLCloudPersistentHistoryChangeTracker : NSObject {
    NSPersistentHistoryToken *_lastKnownToken;
    NSPersistentStoreCoordinator *_coordinator;
    PLChangeHandlingNotificationObserver *_notificationObserver;
}


@property (weak, nonatomic) NSObject<PLCloudPersistentHistoryChangeTrackerDelegate> *delegate; // ivar: _delegate
@property (readonly) BOOL hasChangeTrackerToken;
@property (readonly, copy) NSString *lastKnownTokenDescription;
@property (readonly, copy) NSString *name;


-(BOOL)connect;
-(BOOL)isConnected;
-(id)_eventsResultFromPersistentHistoryToken:(id)arg0 inContext:(id)arg1 ;
-(id)currentToken;
-(id)fetchAllEventsInContext:(id)arg0 ;
-(id)initWithPersistentStoreCoordinator:(id)arg0 libraryBundle:(id)arg1 ;
-(id)lastKnownTokenFromDisk;
-(void)_registerForChangeHandlingNotifications;
-(void)_unregisterForChangeHandlingNotifications;
-(void)_updateLastKnownTokensToToken:(id)arg0 ;
-(void)changeTrackerDidReceiveChangesWithTransaction:(id)arg0 ;
-(void)clearToken;
-(void)disconnect;
-(void)forceTokenToCurrent;
-(void)saveLastKnownChangeTrackerTokenToDisk;
-(void)updateLastKnownTokenToResult:(id)arg0 ;


@end


#endif