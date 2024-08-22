// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCSYNCDATAHANDLER_H
#define VCSYNCDATAHANDLER_H

@class NSString, NSArray, NSHashTable;
@protocol VCSyncDataHandling, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCSyncDataHandler : NSObject <VCSyncDataHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, copy, nonatomic) NSArray *services;
@property (readonly, nonatomic) NSHashTable *servicesTable; // ivar: _servicesTable
@property (readonly) Class superclass;


+(Class)changeClass;
+(int)messageType;
-(BOOL)applyChanges:(id)arg0 fromSyncService:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteSyncedData:(*id)arg0 ;
-(BOOL)markChangesAsSynced:(id)arg0 withSyncService:(id)arg1 metadata:(id)arg2 error:(*id)arg3 ;
-(BOOL)resetSyncStateForService:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)unsyncedChangesForSyncService:(id)arg0 metadata:(*id)arg1 error:(*id)arg2 ;
-(void)deregisterSyncService:(id)arg0 ;
-(void)registerSyncService:(id)arg0 ;
-(void)requestFullResync;
-(void)requestSync;


@end


#endif