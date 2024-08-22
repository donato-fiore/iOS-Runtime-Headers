// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMANAGEDOBJECTCONTEXTUPDATER_H
#define ICMANAGEDOBJECTCONTEXTUPDATER_H

@class NSManagedObjectContext, NSDate, NSPersistentHistoryToken, NSPersistentStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICSelectorDelayer.h"

@interface ICManagedObjectContextUpdater : NSObject

@property (weak, nonatomic) NSManagedObjectContext *context; // ivar: _context
@property (retain, nonatomic) ICSelectorDelayer *delayer; // ivar: _delayer
@property (nonatomic, getter=isListening) BOOL listening; // ivar: _listening
@property (nonatomic) NSUInteger numberOfCoalescedNotifications; // ivar: _numberOfCoalescedNotifications
@property (retain, nonatomic) NSDate *previousHistoryDate; // ivar: _previousHistoryDate
@property (retain, nonatomic) NSPersistentHistoryToken *previousHistoryToken; // ivar: _previousHistoryToken
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (weak, nonatomic) NSPersistentStore *store; // ivar: _store


+(id)contextSaveNotificationFromPersistentHistoryResult:(id)arg0 ignoringContextName:(id)arg1 fromTransactionAuthor:(id)arg2 latestToken:(*id)arg3 latestTimestamp:(*id)arg4 ;
-(id)init;
-(id)initWithStore:(id)arg0 context:(id)arg1 ;
-(id)persistentStoreCoordinator;
-(void)dealloc;
-(void)fetchChangeHistory;
-(void)handlePersistentStoreRemoteChangeNotification:(id)arg0 ;
-(void)requestUpdate;
-(void)startListeningForRemoteContextDidChangeNotifications;
-(void)stopListeningForRemoteContextDidChangeNotifications;


@end


#endif